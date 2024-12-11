/**
 * @file Tree-sitter plugin for the Yara language.
 * @author egibs <evan@egibs.xyz>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const PREC = {
  primary: 7,
  unary: 6,
  multiplicative: 5,
  additive: 4,
  comparative: 3,
  and: 2,
  or: 1,
};

module.exports = grammar({
  name: "yara",

  extras: ($) => [$.comment, /[\s\f\uFEFF\u2060\u200B]|\r?\n/],

  word: ($) => $.identifier,

  rules: {
    source_file: ($) =>
      prec.right(
        0,
        repeat(
          choice($.import_statement, $.include_statement, $.rule_definition),
        ),
      ),

    // Token definitions
    _equal: (_) => "=",
    _colon: (_) => ":",
    _lbrace: (_) => "{",
    _rbrace: (_) => "}",
    _lbrack: (_) => "[",
    _rbrack: (_) => "]",
    _lparen: (_) => "(",
    _rparen: (_) => ")",
    _dollar: (_) => "$",
    _hash: (_) => "#",
    _at: (_) => "@",
    _range: (_) => "..",
    _question: (_) => "?",
    _pipe: (_) => "|",
    _comma: (_) => ",",
    _bang: (_) => "!",
    _slash: (_) => "/",
    _quote: (_) => '"',
    _squote: (_) => "'",

    import_statement: ($) => seq("import", $.string_literal),

    include_statement: ($) => seq("include", $.string_literal),

    rule_definition: ($) =>
      seq(
        optional("private"),
        optional("global"),
        "rule",
        field("name", $.identifier),
        optional($.tag_list),
        field("body", $.rule_body),
      ),

    tag_list: ($) =>
      seq($._colon, $.identifier, repeat(alias($.identifier, $.tag))),

    rule_body: ($) =>
      prec.right(
        seq(
          $._lbrace,
          optional($.meta_section),
          optional($.strings_section),
          $.condition_section,
          $._rbrace,
        ),
      ),

    meta_section: ($) => seq("meta", $._colon, repeat1($.meta_definition)),

    meta_definition: ($) =>
      seq(
        field("key", $.identifier),
        $._equal,
        field(
          "value",
          choice($.string_literal, $.integer_literal, $.boolean_literal),
        ),
      ),

    strings_section: ($) =>
      seq("strings", $._colon, repeat1($.string_definition)),

    string_definition: ($) =>
      seq(
        field("name", $.string_identifier),
        $._equal,
        field("value", choice($.text_string, $.hex_string, $.regex_string)),
        optional($.string_modifiers),
      ),

    string_identifier: ($) => seq($._dollar, optional($.identifier)),

    text_string: ($) => choice($.double_quoted_string, $.single_quoted_string),

    double_quoted_string: ($) =>
      seq(
        $._quote,
        repeat(choice(token.immediate(prec(1, /[^"\\]+/)), $.escape_sequence)),
        $._quote,
      ),

    single_quoted_string: ($) =>
      seq(
        $._squote,
        repeat(choice(token.immediate(prec(1, /[^'\\]+/)), $.escape_sequence)),
        $._squote,
      ),

    escape_sequence: (_) =>
      token.immediate(
        seq(
          "\\",
          choice(
            /[^xuU]/,
            /\d{2,3}/,
            /x[0-9a-fA-F]{2}/,
            /u[0-9a-fA-F]{4}/,
            /U[0-9a-fA-F]{8}/,
          ),
        ),
      ),

    hex_string: ($) =>
      seq(
        $._lbrace,
        repeat1(
          choice($.hex_byte, $.hex_wildcard, $.hex_jump, $.hex_alternative),
        ),
        $._rbrace,
      ),

    hex_byte: (_) => /[0-9a-fA-F]{2}/,
    hex_wildcard: (_) => "?",
    hex_jump: ($) =>
      seq(
        $._lbrack,
        optional($.integer_literal),
        $._range,
        optional($.integer_literal),
        $._rbrack,
      ),

    hex_alternative: ($) =>
      seq($._lparen, sep1($.hex_byte, $._pipe), $._rparen),

    regex_string: ($) =>
      prec.right(
        1,
        seq(
          $._slash,
          alias($.regex_string_content, $.pattern),
          $._slash,
          optional($.string_modifiers),
        ),
      ),

    regex_string_content: ($) =>
      repeat1(choice(token.immediate(/[^\/\\]+/), $.escape_sequence)),

    string_modifiers: ($) =>
      prec.left(
        1,
        repeat1(
          choice(
            "nocase",
            "ascii",
            "wide",
            "fullword",
            seq(
              "base64",
              optional(seq($._lparen, $.string_literal, $._rparen)),
            ),
            seq(
              "base64wide",
              optional(seq($._lparen, $.string_literal, $._rparen)),
            ),
            "xor",
          ),
        ),
      ),

    condition_section: ($) => seq("condition", $._colon, $._expression),

    _expression: ($) =>
      choice(
        $.identifier,
        $.string_identifier,
        $.integer_literal,
        $.boolean_literal,
        $.string_literal,
        $.string_count,
        $.string_offset,
        $.string_length,
        $.filesize,
        $.entrypoint,
        $.for_expression,
        $.for_of_expression,
        $.of_expression,
        $.parenthesized_expression,
        $.unary_expression,
        $.binary_expression,
      ),

    filesize: (_) => "filesize",
    entrypoint: (_) => "entrypoint",

    size_unit: (_) => choice("KB", "MB", "GB"),

    integer_literal: ($) => seq(/[0-9]+/, optional($.size_unit)),

    string_count: ($) => seq($._hash, $.string_identifier),

    string_offset: ($) =>
      seq(
        $._at,
        $.string_identifier,
        optional(seq($._lbrack, $.integer_literal, $._rbrack)),
      ),

    string_length: ($) =>
      seq(
        $._bang,
        $.string_identifier,
        optional(seq($._lbrack, $.integer_literal, $._rbrack)),
      ),

    for_expression: ($) =>
      seq(
        "for",
        $.quantifier,
        "of",
        $.string_set,
        $._colon,
        $._lparen,
        $._expression,
        $._rparen,
      ),

    for_of_expression: ($) =>
      seq(
        "for",
        $.quantifier,
        "of",
        $.string_set,
        "in",
        $.range,
        $._colon,
        $._lparen,
        $._expression,
        $._rparen,
      ),

    of_expression: ($) => seq($.quantifier, "of", $.string_set),

    quantifier: ($) => choice("all", "any", seq($.integer_literal, "of")),

    string_set: ($) =>
      choice(
        "them",
        seq($._lparen, sep1($.string_identifier, $._comma), $._rparen),
      ),

    range: ($) =>
      seq($._lparen, $.integer_literal, $._range, $.integer_literal, $._rparen),

    unary_expression: ($) =>
      prec(
        PREC.unary,
        seq(
          field("operator", choice("not", "-")),
          field("operand", $._expression),
        ),
      ),

    binary_expression: ($) =>
      choice(
        prec.left(
          PREC.multiplicative,
          seq(
            field("left", $._expression),
            field("operator", choice("*", "\\", "%")),
            field("right", $._expression),
          ),
        ),
        prec.left(
          PREC.additive,
          seq(
            field("left", $._expression),
            field("operator", choice("+", "-")),
            field("right", $._expression),
          ),
        ),
        prec.left(
          PREC.comparative,
          seq(
            field("left", $._expression),
            field(
              "operator",
              choice(
                "==",
                "!=",
                "<",
                "<=",
                ">",
                ">=",
                "contains",
                "matches",
                "icontains",
                "imatches",
                "startswith",
                "istartswith",
                "endswith",
                "iendswith",
              ),
            ),
            field("right", $._expression),
          ),
        ),
        prec.left(
          PREC.and,
          seq(
            field("left", $._expression),
            field("operator", "and"),
            field("right", $._expression),
          ),
        ),
        prec.left(
          PREC.or,
          seq(
            field("left", $._expression),
            field("operator", "or"),
            field("right", $._expression),
          ),
        ),
      ),

    parenthesized_expression: ($) => seq($._lparen, $._expression, $._rparen),

    identifier: (_) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    boolean_literal: (_) => choice("true", "false"),
    string_literal: ($) =>
      choice($.double_quoted_string, $.single_quoted_string),

    comment: (_) =>
      token(
        choice(seq("//", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
      ),
  },

  precedences: () => [
    ["binary_expression", "size_unit"],
    ["tag_list", "rule_body"],
  ],
});

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
