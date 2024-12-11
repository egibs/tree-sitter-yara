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
      repeat(
        choice($.import_statement, $.include_statement, $.rule_definition),
      ),

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

    tag_list: ($) => seq(":", $.identifier, repeat(alias($.identifier, $.tag))),

    rule_body: ($) =>
      prec.right(
        seq(
          "{",
          optional($.meta_section),
          optional($.strings_section),
          $.condition_section,
          "}",
        ),
      ),

    meta_section: ($) => seq("meta", ":", repeat1($.meta_definition)),

    meta_definition: ($) =>
      seq(
        field("key", $.identifier),
        "=",
        field(
          "value",
          choice($.string_literal, $.integer_literal, $.boolean_literal),
        ),
      ),

    strings_section: ($) => seq("strings", ":", repeat1($.string_definition)),

    string_definition: ($) =>
      seq(
        field("name", $.string_identifier),
        "=",
        field("value", choice($.text_string, $.hex_string, $.regex_string)),
        optional($.string_modifiers),
      ),

    string_identifier: ($) => seq("$", optional($.identifier)),

    text_string: ($) => choice($.double_quoted_string, $.single_quoted_string),

    double_quoted_string: ($) =>
      seq(
        '"',
        repeat(choice(token.immediate(prec(1, /[^"\\]+/)), $.escape_sequence)),
        '"',
      ),

    single_quoted_string: ($) =>
      seq(
        "'",
        repeat(choice(token.immediate(prec(1, /[^'\\]+/)), $.escape_sequence)),
        "'",
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
        "{",
        repeat1(
          choice($.hex_byte, $.hex_wildcard, $.hex_jump, $.hex_alternative),
        ),
        "}",
      ),

    hex_byte: (_) => /[0-9a-fA-F]{2}/,
    hex_wildcard: (_) => "?",
    hex_jump: ($) =>
      seq(
        "[",
        optional($.integer_literal),
        "-",
        optional($.integer_literal),
        "]",
      ),

    hex_alternative: ($) => seq("(", sep1($.hex_byte, "|"), ")"),

    regex_string: ($) =>
      prec.right(
        1,
        seq(
          "/",
          alias($.regex_string_content, $.pattern),
          "/",
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
            seq("base64", optional(seq("(", $.string_literal, ")"))),
            seq("base64wide", optional(seq("(", $.string_literal, ")"))),
            "xor",
          ),
        ),
      ),

    condition_section: ($) => seq("condition", ":", $._expression),

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

    string_count: ($) => seq("#", $.string_identifier),

    string_offset: ($) =>
      seq("@", $.string_identifier, optional(seq("[", $.integer_literal, "]"))),

    string_length: ($) =>
      seq("!", $.string_identifier, optional(seq("[", $.integer_literal, "]"))),

    for_expression: ($) =>
      seq(
        "for",
        $.quantifier,
        "of",
        $.string_set,
        ":",
        "(",
        $._expression,
        ")",
      ),

    for_of_expression: ($) =>
      seq(
        "for",
        $.quantifier,
        "of",
        $.string_set,
        "in",
        $.range,
        ":",
        "(",
        $._expression,
        ")",
      ),

    of_expression: ($) => seq($.quantifier, "of", $.string_set),

    quantifier: ($) => choice("all", "any", seq($.integer_literal, "of")),

    string_set: ($) =>
      choice("them", seq("(", sep1($.string_identifier, ","), ")")),

    range: ($) => seq("(", $.integer_literal, "..", $.integer_literal, ")"),

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

    parenthesized_expression: ($) => seq("(", $._expression, ")"),

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
