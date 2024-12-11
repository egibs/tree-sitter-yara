#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 183
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 1
#define TOKEN_COUNT 78
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_import = 2,
  anon_sym_include = 3,
  anon_sym_private = 4,
  anon_sym_global = 5,
  anon_sym_rule = 6,
  anon_sym_COLON = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_meta = 10,
  anon_sym_EQ = 11,
  anon_sym_strings = 12,
  anon_sym_DOLLAR = 13,
  anon_sym_DQUOTE = 14,
  aux_sym_double_quoted_string_token1 = 15,
  anon_sym_SQUOTE = 16,
  aux_sym_single_quoted_string_token1 = 17,
  sym_escape_sequence = 18,
  sym_hex_byte = 19,
  sym_hex_wildcard = 20,
  anon_sym_LBRACK = 21,
  anon_sym_DASH = 22,
  anon_sym_RBRACK = 23,
  anon_sym_LPAREN = 24,
  anon_sym_PIPE = 25,
  anon_sym_RPAREN = 26,
  anon_sym_SLASH = 27,
  aux_sym_regex_string_content_token1 = 28,
  anon_sym_nocase = 29,
  anon_sym_ascii = 30,
  anon_sym_wide = 31,
  anon_sym_fullword = 32,
  anon_sym_base64 = 33,
  anon_sym_base64wide = 34,
  anon_sym_xor = 35,
  anon_sym_condition = 36,
  sym_filesize = 37,
  sym_entrypoint = 38,
  anon_sym_KB = 39,
  anon_sym_MB = 40,
  anon_sym_GB = 41,
  aux_sym_integer_literal_token1 = 42,
  anon_sym_POUND = 43,
  anon_sym_AT = 44,
  anon_sym_BANG = 45,
  anon_sym_for = 46,
  anon_sym_of = 47,
  anon_sym_in = 48,
  anon_sym_all = 49,
  anon_sym_any = 50,
  anon_sym_them = 51,
  anon_sym_COMMA = 52,
  anon_sym_DOT_DOT = 53,
  anon_sym_not = 54,
  anon_sym_STAR = 55,
  anon_sym_BSLASH = 56,
  anon_sym_PERCENT = 57,
  anon_sym_PLUS = 58,
  anon_sym_EQ_EQ = 59,
  anon_sym_BANG_EQ = 60,
  anon_sym_LT = 61,
  anon_sym_LT_EQ = 62,
  anon_sym_GT = 63,
  anon_sym_GT_EQ = 64,
  anon_sym_contains = 65,
  anon_sym_matches = 66,
  anon_sym_icontains = 67,
  anon_sym_imatches = 68,
  anon_sym_startswith = 69,
  anon_sym_istartswith = 70,
  anon_sym_endswith = 71,
  anon_sym_iendswith = 72,
  anon_sym_and = 73,
  anon_sym_or = 74,
  anon_sym_true = 75,
  anon_sym_false = 76,
  sym_comment = 77,
  sym_source_file = 78,
  sym_import_statement = 79,
  sym_include_statement = 80,
  sym_rule_definition = 81,
  sym_tag_list = 82,
  sym_rule_body = 83,
  sym_meta_section = 84,
  sym_meta_definition = 85,
  sym_strings_section = 86,
  sym_string_definition = 87,
  sym_string_identifier = 88,
  sym_text_string = 89,
  sym_double_quoted_string = 90,
  sym_single_quoted_string = 91,
  sym_hex_string = 92,
  sym_hex_jump = 93,
  sym_hex_alternative = 94,
  sym_regex_string = 95,
  sym_regex_string_content = 96,
  sym_string_modifiers = 97,
  sym_condition_section = 98,
  sym__expression = 99,
  sym_size_unit = 100,
  sym_integer_literal = 101,
  sym_string_count = 102,
  sym_string_offset = 103,
  sym_string_length = 104,
  sym_for_expression = 105,
  sym_for_of_expression = 106,
  sym_of_expression = 107,
  sym_quantifier = 108,
  sym_string_set = 109,
  sym_range = 110,
  sym_unary_expression = 111,
  sym_binary_expression = 112,
  sym_parenthesized_expression = 113,
  sym_boolean_literal = 114,
  sym_string_literal = 115,
  aux_sym_source_file_repeat1 = 116,
  aux_sym_tag_list_repeat1 = 117,
  aux_sym_meta_section_repeat1 = 118,
  aux_sym_strings_section_repeat1 = 119,
  aux_sym_double_quoted_string_repeat1 = 120,
  aux_sym_single_quoted_string_repeat1 = 121,
  aux_sym_hex_string_repeat1 = 122,
  aux_sym_hex_alternative_repeat1 = 123,
  aux_sym_regex_string_content_repeat1 = 124,
  aux_sym_string_modifiers_repeat1 = 125,
  aux_sym_string_set_repeat1 = 126,
  alias_sym_tag = 127,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_import] = "import",
  [anon_sym_include] = "include",
  [anon_sym_private] = "private",
  [anon_sym_global] = "global",
  [anon_sym_rule] = "rule",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_meta] = "meta",
  [anon_sym_EQ] = "=",
  [anon_sym_strings] = "strings",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_single_quoted_string_token1] = "single_quoted_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_hex_byte] = "hex_byte",
  [sym_hex_wildcard] = "hex_wildcard",
  [anon_sym_LBRACK] = "[",
  [anon_sym_DASH] = "-",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_PIPE] = "|",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SLASH] = "/",
  [aux_sym_regex_string_content_token1] = "regex_string_content_token1",
  [anon_sym_nocase] = "nocase",
  [anon_sym_ascii] = "ascii",
  [anon_sym_wide] = "wide",
  [anon_sym_fullword] = "fullword",
  [anon_sym_base64] = "base64",
  [anon_sym_base64wide] = "base64wide",
  [anon_sym_xor] = "xor",
  [anon_sym_condition] = "condition",
  [sym_filesize] = "filesize",
  [sym_entrypoint] = "entrypoint",
  [anon_sym_KB] = "KB",
  [anon_sym_MB] = "MB",
  [anon_sym_GB] = "GB",
  [aux_sym_integer_literal_token1] = "integer_literal_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_AT] = "@",
  [anon_sym_BANG] = "!",
  [anon_sym_for] = "for",
  [anon_sym_of] = "of",
  [anon_sym_in] = "in",
  [anon_sym_all] = "all",
  [anon_sym_any] = "any",
  [anon_sym_them] = "them",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_not] = "not",
  [anon_sym_STAR] = "*",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_contains] = "contains",
  [anon_sym_matches] = "matches",
  [anon_sym_icontains] = "icontains",
  [anon_sym_imatches] = "imatches",
  [anon_sym_startswith] = "startswith",
  [anon_sym_istartswith] = "istartswith",
  [anon_sym_endswith] = "endswith",
  [anon_sym_iendswith] = "iendswith",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_import_statement] = "import_statement",
  [sym_include_statement] = "include_statement",
  [sym_rule_definition] = "rule_definition",
  [sym_tag_list] = "tag_list",
  [sym_rule_body] = "rule_body",
  [sym_meta_section] = "meta_section",
  [sym_meta_definition] = "meta_definition",
  [sym_strings_section] = "strings_section",
  [sym_string_definition] = "string_definition",
  [sym_string_identifier] = "string_identifier",
  [sym_text_string] = "text_string",
  [sym_double_quoted_string] = "double_quoted_string",
  [sym_single_quoted_string] = "single_quoted_string",
  [sym_hex_string] = "hex_string",
  [sym_hex_jump] = "hex_jump",
  [sym_hex_alternative] = "hex_alternative",
  [sym_regex_string] = "regex_string",
  [sym_regex_string_content] = "pattern",
  [sym_string_modifiers] = "string_modifiers",
  [sym_condition_section] = "condition_section",
  [sym__expression] = "_expression",
  [sym_size_unit] = "size_unit",
  [sym_integer_literal] = "integer_literal",
  [sym_string_count] = "string_count",
  [sym_string_offset] = "string_offset",
  [sym_string_length] = "string_length",
  [sym_for_expression] = "for_expression",
  [sym_for_of_expression] = "for_of_expression",
  [sym_of_expression] = "of_expression",
  [sym_quantifier] = "quantifier",
  [sym_string_set] = "string_set",
  [sym_range] = "range",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_boolean_literal] = "boolean_literal",
  [sym_string_literal] = "string_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_tag_list_repeat1] = "tag_list_repeat1",
  [aux_sym_meta_section_repeat1] = "meta_section_repeat1",
  [aux_sym_strings_section_repeat1] = "strings_section_repeat1",
  [aux_sym_double_quoted_string_repeat1] = "double_quoted_string_repeat1",
  [aux_sym_single_quoted_string_repeat1] = "single_quoted_string_repeat1",
  [aux_sym_hex_string_repeat1] = "hex_string_repeat1",
  [aux_sym_hex_alternative_repeat1] = "hex_alternative_repeat1",
  [aux_sym_regex_string_content_repeat1] = "regex_string_content_repeat1",
  [aux_sym_string_modifiers_repeat1] = "string_modifiers_repeat1",
  [aux_sym_string_set_repeat1] = "string_set_repeat1",
  [alias_sym_tag] = "tag",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_rule] = anon_sym_rule,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_meta] = anon_sym_meta,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_strings] = anon_sym_strings,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_single_quoted_string_token1] = aux_sym_single_quoted_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_hex_byte] = sym_hex_byte,
  [sym_hex_wildcard] = sym_hex_wildcard,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_regex_string_content_token1] = aux_sym_regex_string_content_token1,
  [anon_sym_nocase] = anon_sym_nocase,
  [anon_sym_ascii] = anon_sym_ascii,
  [anon_sym_wide] = anon_sym_wide,
  [anon_sym_fullword] = anon_sym_fullword,
  [anon_sym_base64] = anon_sym_base64,
  [anon_sym_base64wide] = anon_sym_base64wide,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_condition] = anon_sym_condition,
  [sym_filesize] = sym_filesize,
  [sym_entrypoint] = sym_entrypoint,
  [anon_sym_KB] = anon_sym_KB,
  [anon_sym_MB] = anon_sym_MB,
  [anon_sym_GB] = anon_sym_GB,
  [aux_sym_integer_literal_token1] = aux_sym_integer_literal_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_all] = anon_sym_all,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_them] = anon_sym_them,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_contains] = anon_sym_contains,
  [anon_sym_matches] = anon_sym_matches,
  [anon_sym_icontains] = anon_sym_icontains,
  [anon_sym_imatches] = anon_sym_imatches,
  [anon_sym_startswith] = anon_sym_startswith,
  [anon_sym_istartswith] = anon_sym_istartswith,
  [anon_sym_endswith] = anon_sym_endswith,
  [anon_sym_iendswith] = anon_sym_iendswith,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_import_statement] = sym_import_statement,
  [sym_include_statement] = sym_include_statement,
  [sym_rule_definition] = sym_rule_definition,
  [sym_tag_list] = sym_tag_list,
  [sym_rule_body] = sym_rule_body,
  [sym_meta_section] = sym_meta_section,
  [sym_meta_definition] = sym_meta_definition,
  [sym_strings_section] = sym_strings_section,
  [sym_string_definition] = sym_string_definition,
  [sym_string_identifier] = sym_string_identifier,
  [sym_text_string] = sym_text_string,
  [sym_double_quoted_string] = sym_double_quoted_string,
  [sym_single_quoted_string] = sym_single_quoted_string,
  [sym_hex_string] = sym_hex_string,
  [sym_hex_jump] = sym_hex_jump,
  [sym_hex_alternative] = sym_hex_alternative,
  [sym_regex_string] = sym_regex_string,
  [sym_regex_string_content] = sym_regex_string_content,
  [sym_string_modifiers] = sym_string_modifiers,
  [sym_condition_section] = sym_condition_section,
  [sym__expression] = sym__expression,
  [sym_size_unit] = sym_size_unit,
  [sym_integer_literal] = sym_integer_literal,
  [sym_string_count] = sym_string_count,
  [sym_string_offset] = sym_string_offset,
  [sym_string_length] = sym_string_length,
  [sym_for_expression] = sym_for_expression,
  [sym_for_of_expression] = sym_for_of_expression,
  [sym_of_expression] = sym_of_expression,
  [sym_quantifier] = sym_quantifier,
  [sym_string_set] = sym_string_set,
  [sym_range] = sym_range,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_string_literal] = sym_string_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_tag_list_repeat1] = aux_sym_tag_list_repeat1,
  [aux_sym_meta_section_repeat1] = aux_sym_meta_section_repeat1,
  [aux_sym_strings_section_repeat1] = aux_sym_strings_section_repeat1,
  [aux_sym_double_quoted_string_repeat1] = aux_sym_double_quoted_string_repeat1,
  [aux_sym_single_quoted_string_repeat1] = aux_sym_single_quoted_string_repeat1,
  [aux_sym_hex_string_repeat1] = aux_sym_hex_string_repeat1,
  [aux_sym_hex_alternative_repeat1] = aux_sym_hex_alternative_repeat1,
  [aux_sym_regex_string_content_repeat1] = aux_sym_regex_string_content_repeat1,
  [aux_sym_string_modifiers_repeat1] = aux_sym_string_modifiers_repeat1,
  [aux_sym_string_set_repeat1] = aux_sym_string_set_repeat1,
  [alias_sym_tag] = alias_sym_tag,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strings] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_byte] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_wildcard] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_regex_string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_nocase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ascii] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fullword] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_base64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_base64wide] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_xor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_condition] = {
    .visible = true,
    .named = false,
  },
  [sym_filesize] = {
    .visible = true,
    .named = true,
  },
  [sym_entrypoint] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_KB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GB] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_integer_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_all] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_any] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_them] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contains] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_matches] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_icontains] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_imatches] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_startswith] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_istartswith] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endswith] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iendswith] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_list] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_body] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_section] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_strings_section] = {
    .visible = true,
    .named = true,
  },
  [sym_string_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_string_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_text_string] = {
    .visible = true,
    .named = true,
  },
  [sym_double_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_single_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_string] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_jump] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_alternative] = {
    .visible = true,
    .named = true,
  },
  [sym_regex_string] = {
    .visible = true,
    .named = true,
  },
  [sym_regex_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_string_modifiers] = {
    .visible = true,
    .named = true,
  },
  [sym_condition_section] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_size_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_count] = {
    .visible = true,
    .named = true,
  },
  [sym_string_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_string_length] = {
    .visible = true,
    .named = true,
  },
  [sym_for_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_for_of_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_of_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_quantifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string_set] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_meta_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_strings_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_double_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_single_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_alternative_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_regex_string_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_modifiers_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_set_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_tag] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_body = 1,
  field_key = 2,
  field_left = 3,
  field_name = 4,
  field_operand = 5,
  field_operator = 6,
  field_right = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_key] = "key",
  [field_left] = "left",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 2},
  [7] = {.index = 10, .length = 2},
  [8] = {.index = 12, .length = 2},
  [9] = {.index = 14, .length = 2},
  [10] = {.index = 16, .length = 2},
  [11] = {.index = 18, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 2},
    {field_name, 1},
  [2] =
    {field_body, 3},
    {field_name, 2},
  [4] =
    {field_body, 3},
    {field_name, 1},
  [6] =
    {field_body, 4},
    {field_name, 3},
  [8] =
    {field_body, 4},
    {field_name, 2},
  [10] =
    {field_body, 5},
    {field_name, 3},
  [12] =
    {field_operand, 1},
    {field_operator, 0},
  [14] =
    {field_key, 0},
    {field_value, 2},
  [16] =
    {field_name, 0},
    {field_value, 2},
  [18] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [6] = {
    [0] = alias_sym_tag,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 51,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 97,
  [103] = 98,
  [104] = 91,
  [105] = 92,
  [106] = 3,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 18,
  [124] = 2,
  [125] = 4,
  [126] = 5,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '\r') SKIP(0);
      if (lookahead == '!') ADVANCE(66);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(67);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '?') ADVANCE(51);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '|') ADVANCE(56);
      if (lookahead == '}') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 1:
      if (lookahead == '\r') SKIP(1);
      if (lookahead == '!') ADVANCE(65);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == '@') ADVANCE(64);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 2:
      if (lookahead == '\r') SKIP(2);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(67);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == '}') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 3:
      if (lookahead == '\r') SKIP(3);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '?') ADVANCE(51);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == '}') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == '\r') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(40);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 5:
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '\\') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(33);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 6:
      if (lookahead == '\r') ADVANCE(59);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(59);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(82);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(68);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 13:
      if (lookahead == 'U') ADVANCE(22);
      if (lookahead == 'u') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '\r') SKIP(23);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(38);
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '}') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead == '/') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(37);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '*') ADVANCE(36);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(37);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\r') ADVANCE(40);
      if (lookahead == '/') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_hex_byte);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_hex_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_hex_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_hex_wildcard);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(82);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_regex_string_content_token1);
      if (lookahead == '\r') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_regex_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_integer_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_integer_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\r') SKIP(0);
      if (lookahead == 'G') ADVANCE(1);
      if (lookahead == 'K') ADVANCE(2);
      if (lookahead == 'M') ADVANCE(3);
      if (lookahead == 'a') ADVANCE(4);
      if (lookahead == 'b') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(6);
      if (lookahead == 'e') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'g') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(10);
      if (lookahead == 'm') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == 'p') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == 'w') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(19);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'B') ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == 'B') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == 'B') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'm') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 'h') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_GB);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_KB);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_MB);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(52);
      if (lookahead == 'y') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(67);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_all);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_any);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(90);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(91);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 74:
      if (lookahead == 'v') ADVANCE(101);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 83:
      if (lookahead == '6') ADVANCE(109);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 86:
      if (lookahead == 'w') ADVANCE(112);
      END_STATE();
    case 87:
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 90:
      if (lookahead == 'w') ADVANCE(116);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 93:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 94:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 96:
      if (lookahead == 'u') ADVANCE(122);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(124);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(126);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_them);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_wide);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_ascii);
      END_STATE();
    case 109:
      if (lookahead == '4') ADVANCE(129);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 119:
      if (lookahead == 'w') ADVANCE(138);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(139);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(141);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(146);
      END_STATE();
    case 128:
      if (lookahead == 'g') ADVANCE(147);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_base64);
      if (lookahead == 'w') ADVANCE(148);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 134:
      if (lookahead == 'z') ADVANCE(153);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(160);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_nocase);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 146:
      if (lookahead == 'w') ADVANCE(162);
      END_STATE();
    case 147:
      if (lookahead == 's') ADVANCE(163);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 151:
      if (lookahead == 'h') ADVANCE(167);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 154:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 155:
      if (lookahead == 'n') ADVANCE(171);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 159:
      if (lookahead == 'w') ADVANCE(174);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 162:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_strings);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_endswith);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(178);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_filesize);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_fullword);
      END_STATE();
    case 171:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 172:
      if (lookahead == 'h') ADVANCE(180);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_imatches);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 175:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(183);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 178:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_icontains);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_iendswith);
      END_STATE();
    case 181:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 182:
      if (lookahead == 'h') ADVANCE(186);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_base64wide);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_entrypoint);
      END_STATE();
    case 185:
      if (lookahead == 'h') ADVANCE(187);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_startswith);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_istartswith);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 23},
  [25] = {.lex_state = 23},
  [26] = {.lex_state = 23},
  [27] = {.lex_state = 23},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 23},
  [30] = {.lex_state = 23},
  [31] = {.lex_state = 23},
  [32] = {.lex_state = 23},
  [33] = {.lex_state = 23},
  [34] = {.lex_state = 23},
  [35] = {.lex_state = 23},
  [36] = {.lex_state = 23},
  [37] = {.lex_state = 23},
  [38] = {.lex_state = 23},
  [39] = {.lex_state = 23},
  [40] = {.lex_state = 23},
  [41] = {.lex_state = 23},
  [42] = {.lex_state = 23},
  [43] = {.lex_state = 23},
  [44] = {.lex_state = 23},
  [45] = {.lex_state = 23},
  [46] = {.lex_state = 23},
  [47] = {.lex_state = 23},
  [48] = {.lex_state = 23},
  [49] = {.lex_state = 23},
  [50] = {.lex_state = 23},
  [51] = {.lex_state = 23},
  [52] = {.lex_state = 23},
  [53] = {.lex_state = 23},
  [54] = {.lex_state = 23},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 23},
  [57] = {.lex_state = 23},
  [58] = {.lex_state = 23},
  [59] = {.lex_state = 23},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 23},
  [64] = {.lex_state = 23},
  [65] = {.lex_state = 23},
  [66] = {.lex_state = 23},
  [67] = {.lex_state = 23},
  [68] = {.lex_state = 23},
  [69] = {.lex_state = 23},
  [70] = {.lex_state = 23},
  [71] = {.lex_state = 23},
  [72] = {.lex_state = 23},
  [73] = {.lex_state = 23},
  [74] = {.lex_state = 23},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 23},
  [77] = {.lex_state = 23},
  [78] = {.lex_state = 23},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 23},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 23},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 23},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 23},
  [107] = {.lex_state = 23},
  [108] = {.lex_state = 23},
  [109] = {.lex_state = 23},
  [110] = {.lex_state = 23},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 23},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 23},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 23},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 23},
  [121] = {.lex_state = 23},
  [122] = {.lex_state = 23},
  [123] = {.lex_state = 23},
  [124] = {.lex_state = 23},
  [125] = {.lex_state = 23},
  [126] = {.lex_state = 23},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 23},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 23},
  [134] = {.lex_state = 23},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 23},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 23},
  [141] = {.lex_state = 23},
  [142] = {.lex_state = 23},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 23},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 23},
  [147] = {.lex_state = 23},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 23},
  [150] = {.lex_state = 23},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 23},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 23},
  [155] = {.lex_state = 23},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 23},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 23},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 23},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 23},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 23},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 23},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_strings] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_hex_byte] = ACTIONS(1),
    [sym_hex_wildcard] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_nocase] = ACTIONS(1),
    [anon_sym_ascii] = ACTIONS(1),
    [anon_sym_wide] = ACTIONS(1),
    [anon_sym_fullword] = ACTIONS(1),
    [anon_sym_base64] = ACTIONS(1),
    [anon_sym_base64wide] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_condition] = ACTIONS(1),
    [sym_filesize] = ACTIONS(1),
    [sym_entrypoint] = ACTIONS(1),
    [anon_sym_KB] = ACTIONS(1),
    [anon_sym_MB] = ACTIONS(1),
    [anon_sym_GB] = ACTIONS(1),
    [aux_sym_integer_literal_token1] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_them] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_contains] = ACTIONS(1),
    [anon_sym_matches] = ACTIONS(1),
    [anon_sym_icontains] = ACTIONS(1),
    [anon_sym_imatches] = ACTIONS(1),
    [anon_sym_startswith] = ACTIONS(1),
    [anon_sym_istartswith] = ACTIONS(1),
    [anon_sym_endswith] = ACTIONS(1),
    [anon_sym_iendswith] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(177),
    [sym_import_statement] = STATE(48),
    [sym_include_statement] = STATE(48),
    [sym_rule_definition] = STATE(48),
    [aux_sym_source_file_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [anon_sym_include] = ACTIONS(9),
    [anon_sym_private] = ACTIONS(11),
    [anon_sym_global] = ACTIONS(13),
    [anon_sym_rule] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 3,
      anon_sym_base64,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 35,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
  [46] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 3,
      anon_sym_base64,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 35,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
  [92] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_base64,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 35,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
  [138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 3,
      anon_sym_base64,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 35,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
  [184] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_BANG,
    ACTIONS(53), 1,
      anon_sym_for,
    ACTIONS(57), 1,
      anon_sym_not,
    STATE(27), 1,
      sym_integer_literal,
    STATE(174), 1,
      sym_quantifier,
    ACTIONS(55), 2,
      anon_sym_all,
      anon_sym_any,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(33), 3,
      sym_filesize,
      sym_entrypoint,
      sym_identifier,
    STATE(32), 13,
      sym_string_identifier,
      sym__expression,
      sym_string_count,
      sym_string_offset,
      sym_string_length,
      sym_for_expression,
      sym_for_of_expression,
      sym_of_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_boolean_literal,
      sym_string_literal,
  [259] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_BANG,
    ACTIONS(53), 1,
      anon_sym_for,
    ACTIONS(57), 1,
      anon_sym_not,
    STATE(27), 1,
      sym_integer_literal,
    STATE(174), 1,
      sym_quantifier,
    ACTIONS(55), 2,
      anon_sym_all,
      anon_sym_any,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(61), 3,
      sym_filesize,
      sym_entrypoint,
      sym_identifier,
    STATE(45), 13,
      sym_string_identifier,
      sym__expression,
      sym_string_count,
      sym_string_offset,
      sym_string_length,
      sym_for_expression,
      sym_for_of_expression,
      sym_of_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_boolean_literal,
      sym_string_literal,
  [334] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_BANG,
    ACTIONS(53), 1,
      anon_sym_for,
    ACTIONS(57), 1,
      anon_sym_not,
    STATE(27), 1,
      sym_integer_literal,
    STATE(174), 1,
      sym_quantifier,
    ACTIONS(55), 2,
      anon_sym_all,
      anon_sym_any,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(63), 3,
      sym_filesize,
      sym_entrypoint,
      sym_identifier,
    STATE(40), 13,
      sym_string_identifier,
      sym__expression,
      sym_string_count,
      sym_string_offset,
      sym_string_length,
      sym_for_expression,
      sym_for_of_expression,
      sym_of_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_boolean_literal,
      sym_string_literal,
  [409] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_BANG,
    ACTIONS(53), 1,
      anon_sym_for,
    ACTIONS(57), 1,
      anon_sym_not,
    STATE(27), 1,
      sym_integer_literal,
    STATE(174), 1,
      sym_quantifier,
    ACTIONS(55), 2,
      anon_sym_all,
      anon_sym_any,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(65), 3,
      sym_filesize,
      sym_entrypoint,
      sym_identifier,
    STATE(43), 13,
      sym_string_identifier,
      sym__expression,
      sym_string_count,
      sym_string_offset,
      sym_string_length,
      sym_for_expression,
      sym_for_of_expression,
      sym_of_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_boolean_literal,
      sym_string_literal,
  [484] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_BANG,
    ACTIONS(53), 1,
      anon_sym_for,
    ACTIONS(57), 1,
      anon_sym_not,
    STATE(27), 1,
      sym_integer_literal,
    STATE(174), 1,
      sym_quantifier,
    ACTIONS(55), 2,
      anon_sym_all,
      anon_sym_any,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(67), 3,
      sym_filesize,
      sym_entrypoint,
      sym_identifier,
    STATE(31), 13,
      sym_string_identifier,
      sym__expression,
      sym_string_count,
      sym_string_offset,
      sym_string_length,
      sym_for_expression,
      sym_for_of_expression,
      sym_of_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_boolean_literal,
      sym_string_literal,
  [559] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_BANG,
    ACTIONS(53), 1,
      anon_sym_for,
    ACTIONS(57), 1,
      anon_sym_not,
    STATE(27), 1,
      sym_integer_literal,
    STATE(174), 1,
      sym_quantifier,
    ACTIONS(55), 2,
      anon_sym_all,
      anon_sym_any,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(69), 3,
      sym_filesize,
      sym_entrypoint,
      sym_identifier,
    STATE(33), 13,
      sym_string_identifier,
      sym__expression,
      sym_string_count,
      sym_string_offset,
      sym_string_length,
      sym_for_expression,
      sym_for_of_expression,
      sym_of_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_boolean_literal,
      sym_string_literal,
  [634] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_BANG,
    ACTIONS(53), 1,
      anon_sym_for,
    ACTIONS(57), 1,
      anon_sym_not,
    STATE(27), 1,
      sym_integer_literal,
    STATE(174), 1,
      sym_quantifier,
    ACTIONS(55), 2,
      anon_sym_all,
      anon_sym_any,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(71), 3,
      sym_filesize,
      sym_entrypoint,
      sym_identifier,
    STATE(38), 13,
      sym_string_identifier,
      sym__expression,
      sym_string_count,
      sym_string_offset,
      sym_string_length,
      sym_for_expression,
      sym_for_of_expression,
      sym_of_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_boolean_literal,
      sym_string_literal,
  [709] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_BANG,
    ACTIONS(53), 1,
      anon_sym_for,
    ACTIONS(57), 1,
      anon_sym_not,
    STATE(27), 1,
      sym_integer_literal,
    STATE(174), 1,
      sym_quantifier,
    ACTIONS(55), 2,
      anon_sym_all,
      anon_sym_any,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(73), 3,
      sym_filesize,
      sym_entrypoint,
      sym_identifier,
    STATE(34), 13,
      sym_string_identifier,
      sym__expression,
      sym_string_count,
      sym_string_offset,
      sym_string_length,
      sym_for_expression,
      sym_for_of_expression,
      sym_of_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_boolean_literal,
      sym_string_literal,
  [784] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_BANG,
    ACTIONS(53), 1,
      anon_sym_for,
    ACTIONS(57), 1,
      anon_sym_not,
    STATE(27), 1,
      sym_integer_literal,
    STATE(174), 1,
      sym_quantifier,
    ACTIONS(55), 2,
      anon_sym_all,
      anon_sym_any,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(75), 3,
      sym_filesize,
      sym_entrypoint,
      sym_identifier,
    STATE(44), 13,
      sym_string_identifier,
      sym__expression,
      sym_string_count,
      sym_string_offset,
      sym_string_length,
      sym_for_expression,
      sym_for_of_expression,
      sym_of_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_boolean_literal,
      sym_string_literal,
  [859] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(47), 1,
      anon_sym_POUND,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_BANG,
    ACTIONS(53), 1,
      anon_sym_for,
    ACTIONS(57), 1,
      anon_sym_not,
    STATE(27), 1,
      sym_integer_literal,
    STATE(174), 1,
      sym_quantifier,
    ACTIONS(55), 2,
      anon_sym_all,
      anon_sym_any,
    ACTIONS(59), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(77), 3,
      sym_filesize,
      sym_entrypoint,
      sym_identifier,
    STATE(42), 13,
      sym_string_identifier,
      sym__expression,
      sym_string_count,
      sym_string_offset,
      sym_string_length,
      sym_for_expression,
      sym_for_of_expression,
      sym_of_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_parenthesized_expression,
      sym_boolean_literal,
      sym_string_literal,
  [934] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(19), 1,
      sym_size_unit,
    ACTIONS(83), 3,
      anon_sym_KB,
      anon_sym_MB,
      anon_sym_GB,
    ACTIONS(81), 13,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(79), 16,
      anon_sym_strings,
      anon_sym_condition,
      anon_sym_of,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
  [979] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 13,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(85), 16,
      anon_sym_strings,
      anon_sym_condition,
      anon_sym_of,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
  [1016] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 27,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
  [1053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 13,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(93), 16,
      anon_sym_strings,
      anon_sym_condition,
      anon_sym_of,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
  [1090] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(99), 13,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(101), 13,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
  [1127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 11,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(103), 15,
      anon_sym_strings,
      anon_sym_condition,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
      sym_identifier,
  [1161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 23,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
  [1195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 23,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
  [1228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 23,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
  [1261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 23,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_in,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
  [1294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 21,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
  [1328] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_of,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 21,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
  [1362] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_LBRACK,
    ACTIONS(139), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 21,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
  [1396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 21,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
  [1427] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 21,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
  [1458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(149), 18,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
  [1491] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 21,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
  [1522] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(151), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(149), 16,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
  [1557] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_and,
    ACTIONS(155), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
    ACTIONS(151), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(157), 12,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
  [1596] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(163), 21,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
  [1627] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(167), 21,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
  [1658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 21,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
  [1689] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(149), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(157), 12,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
  [1726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 21,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
  [1757] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 21,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
  [1788] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(183), 21,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
      anon_sym_and,
      anon_sym_or,
  [1819] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_and,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    ACTIONS(189), 1,
      anon_sym_or,
    ACTIONS(155), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(157), 12,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
  [1859] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_and,
    ACTIONS(189), 1,
      anon_sym_or,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(157), 12,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
  [1899] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_and,
    ACTIONS(189), 1,
      anon_sym_or,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(157), 12,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
  [1939] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_and,
    ACTIONS(189), 1,
      anon_sym_or,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(159), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(157), 12,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_contains,
      anon_sym_matches,
      anon_sym_icontains,
      anon_sym_imatches,
      anon_sym_startswith,
      anon_sym_istartswith,
      anon_sym_endswith,
      anon_sym_iendswith,
  [1979] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_base64,
    ACTIONS(203), 1,
      anon_sym_base64wide,
    STATE(54), 1,
      aux_sym_string_modifiers_repeat1,
    STATE(138), 1,
      sym_string_modifiers,
    ACTIONS(197), 2,
      anon_sym_DOLLAR,
      anon_sym_condition,
    ACTIONS(199), 5,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_xor,
  [2006] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_base64,
    ACTIONS(203), 1,
      anon_sym_base64wide,
    STATE(51), 1,
      aux_sym_string_modifiers_repeat1,
    STATE(59), 1,
      sym_string_modifiers,
    ACTIONS(205), 2,
      anon_sym_DOLLAR,
      anon_sym_condition,
    ACTIONS(207), 5,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_xor,
  [2033] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      anon_sym_include,
    ACTIONS(11), 1,
      anon_sym_private,
    ACTIONS(13), 1,
      anon_sym_global,
    ACTIONS(15), 1,
      anon_sym_rule,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    STATE(50), 4,
      sym_import_statement,
      sym_include_statement,
      sym_rule_definition,
      aux_sym_source_file_repeat1,
  [2061] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(211), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(123), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(120), 3,
      sym_integer_literal,
      sym_boolean_literal,
      sym_string_literal,
  [2087] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 1,
      anon_sym_import,
    ACTIONS(222), 1,
      anon_sym_include,
    ACTIONS(225), 1,
      anon_sym_private,
    ACTIONS(228), 1,
      anon_sym_global,
    ACTIONS(231), 1,
      anon_sym_rule,
    STATE(50), 4,
      sym_import_statement,
      sym_include_statement,
      sym_rule_definition,
      aux_sym_source_file_repeat1,
  [2115] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_base64,
    STATE(52), 1,
      aux_sym_string_modifiers_repeat1,
    ACTIONS(234), 8,
      anon_sym_DOLLAR,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
  [2135] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_base64,
    ACTIONS(246), 1,
      anon_sym_base64wide,
    STATE(52), 1,
      aux_sym_string_modifiers_repeat1,
    ACTIONS(238), 2,
      anon_sym_DOLLAR,
      anon_sym_condition,
    ACTIONS(240), 5,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_xor,
  [2159] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    ACTIONS(253), 1,
      anon_sym_base64,
    ACTIONS(249), 8,
      anon_sym_DOLLAR,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
  [2179] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_base64,
    ACTIONS(203), 1,
      anon_sym_base64wide,
    STATE(52), 1,
      aux_sym_string_modifiers_repeat1,
    ACTIONS(234), 2,
      anon_sym_DOLLAR,
      anon_sym_condition,
    ACTIONS(255), 5,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_xor,
  [2203] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    ACTIONS(257), 1,
      anon_sym_LBRACE,
    ACTIONS(259), 1,
      anon_sym_SLASH,
    STATE(56), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(46), 3,
      sym_text_string,
      sym_hex_string,
      sym_regex_string,
  [2228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_base64,
    ACTIONS(261), 8,
      anon_sym_DOLLAR,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
  [2245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_base64,
    ACTIONS(265), 8,
      anon_sym_DOLLAR,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
  [2262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_base64,
    ACTIONS(269), 8,
      anon_sym_DOLLAR,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
  [2279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_base64,
    ACTIONS(273), 8,
      anon_sym_DOLLAR,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
  [2296] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 2,
      sym_hex_byte,
      sym_hex_wildcard,
    STATE(61), 3,
      sym_hex_jump,
      sym_hex_alternative,
      aux_sym_hex_string_repeat1,
  [2318] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    ACTIONS(293), 1,
      anon_sym_LPAREN,
    ACTIONS(287), 2,
      sym_hex_byte,
      sym_hex_wildcard,
    STATE(61), 3,
      sym_hex_jump,
      sym_hex_alternative,
      aux_sym_hex_string_repeat1,
  [2340] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_LBRACK,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(296), 2,
      sym_hex_byte,
      sym_hex_wildcard,
    STATE(60), 3,
      sym_hex_jump,
      sym_hex_alternative,
      aux_sym_hex_string_repeat1,
  [2359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2395] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_meta,
    ACTIONS(306), 1,
      anon_sym_strings,
    ACTIONS(308), 1,
      anon_sym_condition,
    STATE(96), 1,
      sym_meta_section,
    STATE(129), 1,
      sym_strings_section,
    STATE(159), 1,
      sym_condition_section,
  [2417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2477] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2489] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2513] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(63), 1,
      sym_string_literal,
    STATE(18), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2530] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      sym_identifier,
    ACTIONS(329), 2,
      anon_sym_strings,
      anon_sym_condition,
    STATE(76), 2,
      sym_meta_definition,
      aux_sym_meta_section_repeat1,
  [2545] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_DOLLAR,
    ACTIONS(334), 1,
      anon_sym_condition,
    STATE(180), 1,
      sym_string_identifier,
    STATE(77), 2,
      sym_string_definition,
      aux_sym_strings_section_repeat1,
  [2562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym_identifier,
    ACTIONS(338), 2,
      anon_sym_strings,
      anon_sym_condition,
    STATE(76), 2,
      sym_meta_definition,
      aux_sym_meta_section_repeat1,
  [2577] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(65), 1,
      sym_string_literal,
    STATE(18), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2594] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_SQUOTE,
    STATE(181), 1,
      sym_string_literal,
    STATE(18), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 5,
      anon_sym_RBRACE,
      sym_hex_byte,
      sym_hex_wildcard,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [2622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 5,
      anon_sym_RBRACE,
      sym_hex_byte,
      sym_hex_wildcard,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [2633] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym_integer_literal_token1,
    STATE(160), 1,
      sym_integer_literal,
    STATE(166), 1,
      sym_quantifier,
    ACTIONS(344), 2,
      anon_sym_all,
      anon_sym_any,
  [2650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 5,
      anon_sym_RBRACE,
      sym_hex_byte,
      sym_hex_wildcard,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [2661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 5,
      anon_sym_RBRACE,
      sym_hex_byte,
      sym_hex_wildcard,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [2672] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(350), 1,
      anon_sym_condition,
    STATE(180), 1,
      sym_string_identifier,
    STATE(77), 2,
      sym_string_definition,
      aux_sym_strings_section_repeat1,
  [2689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 5,
      anon_sym_RBRACE,
      sym_hex_byte,
      sym_hex_wildcard,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [2700] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_COLON,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_rule_body,
    STATE(136), 1,
      sym_tag_list,
  [2716] = 4,
    ACTIONS(358), 1,
      anon_sym_SQUOTE,
    ACTIONS(363), 1,
      sym_comment,
    STATE(89), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(360), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [2730] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_COLON,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_rule_body,
    STATE(132), 1,
      sym_tag_list,
  [2746] = 4,
    ACTIONS(363), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      aux_sym_double_quoted_string_repeat1,
    ACTIONS(367), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
  [2760] = 4,
    ACTIONS(363), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_SQUOTE,
    STATE(89), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(371), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [2774] = 4,
    ACTIONS(363), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_SLASH,
    STATE(93), 1,
      aux_sym_regex_string_content_repeat1,
    ACTIONS(373), 2,
      sym_escape_sequence,
      aux_sym_regex_string_content_token1,
  [2788] = 4,
    ACTIONS(363), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_SLASH,
    STATE(93), 1,
      aux_sym_regex_string_content_repeat1,
    ACTIONS(378), 2,
      sym_escape_sequence,
      aux_sym_regex_string_content_token1,
  [2802] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_COLON,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_rule_body,
    STATE(143), 1,
      sym_tag_list,
  [2818] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_strings,
    ACTIONS(308), 1,
      anon_sym_condition,
    STATE(140), 1,
      sym_strings_section,
    STATE(165), 1,
      sym_condition_section,
  [2834] = 4,
    ACTIONS(363), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
    STATE(91), 1,
      aux_sym_double_quoted_string_repeat1,
    ACTIONS(384), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
  [2848] = 4,
    ACTIONS(363), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_SQUOTE,
    STATE(92), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(388), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [2862] = 4,
    ACTIONS(363), 1,
      sym_comment,
    STATE(94), 1,
      aux_sym_regex_string_content_repeat1,
    STATE(178), 1,
      sym_regex_string_content,
    ACTIONS(390), 2,
      sym_escape_sequence,
      aux_sym_regex_string_content_token1,
  [2876] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(180), 1,
      sym_string_identifier,
    STATE(86), 2,
      sym_string_definition,
      aux_sym_strings_section_repeat1,
  [2890] = 4,
    ACTIONS(363), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      aux_sym_double_quoted_string_repeat1,
    ACTIONS(394), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
  [2904] = 4,
    ACTIONS(363), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      aux_sym_double_quoted_string_repeat1,
    ACTIONS(399), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
  [2918] = 4,
    ACTIONS(363), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_SQUOTE,
    STATE(105), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(403), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [2932] = 4,
    ACTIONS(363), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      aux_sym_double_quoted_string_repeat1,
    ACTIONS(367), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
  [2946] = 4,
    ACTIONS(363), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_SQUOTE,
    STATE(89), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(371), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [2960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 3,
      anon_sym_strings,
      anon_sym_condition,
      sym_identifier,
  [2969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(411), 1,
      anon_sym_them,
    STATE(144), 1,
      sym_string_set,
  [2982] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_identifier,
    ACTIONS(415), 1,
      anon_sym_LBRACE,
    STATE(121), 1,
      aux_sym_tag_list_repeat1,
  [2995] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(417), 1,
      anon_sym_DASH,
    STATE(176), 1,
      sym_integer_literal,
  [3008] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym_identifier,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      aux_sym_tag_list_repeat1,
  [3021] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym_string_set_repeat1,
  [3034] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(428), 1,
      anon_sym_RBRACK,
    STATE(167), 1,
      sym_integer_literal,
  [3047] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_hex_alternative_repeat1,
  [3060] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    ACTIONS(434), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym_string_set_repeat1,
  [3073] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(436), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      sym_integer_literal,
  [3086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_PIPE,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_hex_alternative_repeat1,
  [3099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_string_set_repeat1,
  [3112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_LPAREN,
    ACTIONS(411), 1,
      anon_sym_them,
    STATE(35), 1,
      sym_string_set,
  [3125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_PIPE,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_hex_alternative_repeat1,
  [3138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 3,
      anon_sym_strings,
      anon_sym_condition,
      sym_identifier,
  [3147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_identifier,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      aux_sym_tag_list_repeat1,
  [3160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      sym_identifier,
    STATE(78), 2,
      sym_meta_definition,
      aux_sym_meta_section_repeat1,
  [3171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 3,
      anon_sym_strings,
      anon_sym_condition,
      sym_identifier,
  [3180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 3,
      anon_sym_strings,
      anon_sym_condition,
      sym_identifier,
  [3189] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 3,
      anon_sym_strings,
      anon_sym_condition,
      sym_identifier,
  [3198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 3,
      anon_sym_strings,
      anon_sym_condition,
      sym_identifier,
  [3207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(111), 1,
      sym_string_identifier,
  [3217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(26), 1,
      sym_string_identifier,
  [3227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_condition,
    STATE(165), 1,
      sym_condition_section,
  [3237] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
    STATE(151), 1,
      sym_range,
  [3247] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(135), 1,
      sym_string_identifier,
  [3257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_rule_body,
  [3267] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_global,
    ACTIONS(460), 1,
      anon_sym_rule,
  [3277] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym_integer_literal_token1,
    STATE(162), 1,
      sym_integer_literal,
  [3287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_rule_body,
  [3305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 2,
      anon_sym_DOLLAR,
      anon_sym_condition,
  [3321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      sym_string_identifier,
  [3331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_condition,
    STATE(158), 1,
      sym_condition_section,
  [3341] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym_integer_literal_token1,
    STATE(168), 1,
      sym_integer_literal,
  [3351] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_LBRACE,
      sym_identifier,
  [3359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_rule_body,
  [3369] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_COLON,
    ACTIONS(468), 1,
      anon_sym_in,
  [3379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(29), 1,
      sym_string_identifier,
  [3389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym_integer_literal_token1,
    STATE(148), 1,
      sym_integer_literal,
  [3399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym_integer_literal_token1,
    STATE(171), 1,
      sym_integer_literal,
  [3409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_RBRACK,
  [3416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_of,
  [3423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym_identifier,
  [3430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_COLON,
  [3437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_rule,
  [3444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_LPAREN,
  [3451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_of,
  [3458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_rule,
  [3465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_RBRACK,
  [3472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COLON,
  [3479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
  [3486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
  [3493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_of,
  [3500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_EQ,
  [3507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_DOT_DOT,
  [3514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_LPAREN,
  [3521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      sym_identifier,
  [3528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_RBRACE,
  [3535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_of,
  [3542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_RBRACK,
  [3549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
  [3556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      sym_identifier,
  [3563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_COLON,
  [3570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_RBRACK,
  [3577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_hex_byte,
  [3584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_COLON,
  [3591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_of,
  [3598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_COLON,
  [3605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_DASH,
  [3612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      ts_builtin_sym_end,
  [3619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_SLASH,
  [3626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym_identifier,
  [3633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_EQ,
  [3640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_RPAREN,
  [3647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      sym_hex_byte,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 184,
  [SMALL_STATE(7)] = 259,
  [SMALL_STATE(8)] = 334,
  [SMALL_STATE(9)] = 409,
  [SMALL_STATE(10)] = 484,
  [SMALL_STATE(11)] = 559,
  [SMALL_STATE(12)] = 634,
  [SMALL_STATE(13)] = 709,
  [SMALL_STATE(14)] = 784,
  [SMALL_STATE(15)] = 859,
  [SMALL_STATE(16)] = 934,
  [SMALL_STATE(17)] = 979,
  [SMALL_STATE(18)] = 1016,
  [SMALL_STATE(19)] = 1053,
  [SMALL_STATE(20)] = 1090,
  [SMALL_STATE(21)] = 1127,
  [SMALL_STATE(22)] = 1161,
  [SMALL_STATE(23)] = 1195,
  [SMALL_STATE(24)] = 1228,
  [SMALL_STATE(25)] = 1261,
  [SMALL_STATE(26)] = 1294,
  [SMALL_STATE(27)] = 1328,
  [SMALL_STATE(28)] = 1362,
  [SMALL_STATE(29)] = 1396,
  [SMALL_STATE(30)] = 1427,
  [SMALL_STATE(31)] = 1458,
  [SMALL_STATE(32)] = 1491,
  [SMALL_STATE(33)] = 1522,
  [SMALL_STATE(34)] = 1557,
  [SMALL_STATE(35)] = 1596,
  [SMALL_STATE(36)] = 1627,
  [SMALL_STATE(37)] = 1658,
  [SMALL_STATE(38)] = 1689,
  [SMALL_STATE(39)] = 1726,
  [SMALL_STATE(40)] = 1757,
  [SMALL_STATE(41)] = 1788,
  [SMALL_STATE(42)] = 1819,
  [SMALL_STATE(43)] = 1859,
  [SMALL_STATE(44)] = 1899,
  [SMALL_STATE(45)] = 1939,
  [SMALL_STATE(46)] = 1979,
  [SMALL_STATE(47)] = 2006,
  [SMALL_STATE(48)] = 2033,
  [SMALL_STATE(49)] = 2061,
  [SMALL_STATE(50)] = 2087,
  [SMALL_STATE(51)] = 2115,
  [SMALL_STATE(52)] = 2135,
  [SMALL_STATE(53)] = 2159,
  [SMALL_STATE(54)] = 2179,
  [SMALL_STATE(55)] = 2203,
  [SMALL_STATE(56)] = 2228,
  [SMALL_STATE(57)] = 2245,
  [SMALL_STATE(58)] = 2262,
  [SMALL_STATE(59)] = 2279,
  [SMALL_STATE(60)] = 2296,
  [SMALL_STATE(61)] = 2318,
  [SMALL_STATE(62)] = 2340,
  [SMALL_STATE(63)] = 2359,
  [SMALL_STATE(64)] = 2371,
  [SMALL_STATE(65)] = 2383,
  [SMALL_STATE(66)] = 2395,
  [SMALL_STATE(67)] = 2417,
  [SMALL_STATE(68)] = 2429,
  [SMALL_STATE(69)] = 2441,
  [SMALL_STATE(70)] = 2453,
  [SMALL_STATE(71)] = 2465,
  [SMALL_STATE(72)] = 2477,
  [SMALL_STATE(73)] = 2489,
  [SMALL_STATE(74)] = 2501,
  [SMALL_STATE(75)] = 2513,
  [SMALL_STATE(76)] = 2530,
  [SMALL_STATE(77)] = 2545,
  [SMALL_STATE(78)] = 2562,
  [SMALL_STATE(79)] = 2577,
  [SMALL_STATE(80)] = 2594,
  [SMALL_STATE(81)] = 2611,
  [SMALL_STATE(82)] = 2622,
  [SMALL_STATE(83)] = 2633,
  [SMALL_STATE(84)] = 2650,
  [SMALL_STATE(85)] = 2661,
  [SMALL_STATE(86)] = 2672,
  [SMALL_STATE(87)] = 2689,
  [SMALL_STATE(88)] = 2700,
  [SMALL_STATE(89)] = 2716,
  [SMALL_STATE(90)] = 2730,
  [SMALL_STATE(91)] = 2746,
  [SMALL_STATE(92)] = 2760,
  [SMALL_STATE(93)] = 2774,
  [SMALL_STATE(94)] = 2788,
  [SMALL_STATE(95)] = 2802,
  [SMALL_STATE(96)] = 2818,
  [SMALL_STATE(97)] = 2834,
  [SMALL_STATE(98)] = 2848,
  [SMALL_STATE(99)] = 2862,
  [SMALL_STATE(100)] = 2876,
  [SMALL_STATE(101)] = 2890,
  [SMALL_STATE(102)] = 2904,
  [SMALL_STATE(103)] = 2918,
  [SMALL_STATE(104)] = 2932,
  [SMALL_STATE(105)] = 2946,
  [SMALL_STATE(106)] = 2960,
  [SMALL_STATE(107)] = 2969,
  [SMALL_STATE(108)] = 2982,
  [SMALL_STATE(109)] = 2995,
  [SMALL_STATE(110)] = 3008,
  [SMALL_STATE(111)] = 3021,
  [SMALL_STATE(112)] = 3034,
  [SMALL_STATE(113)] = 3047,
  [SMALL_STATE(114)] = 3060,
  [SMALL_STATE(115)] = 3073,
  [SMALL_STATE(116)] = 3086,
  [SMALL_STATE(117)] = 3099,
  [SMALL_STATE(118)] = 3112,
  [SMALL_STATE(119)] = 3125,
  [SMALL_STATE(120)] = 3138,
  [SMALL_STATE(121)] = 3147,
  [SMALL_STATE(122)] = 3160,
  [SMALL_STATE(123)] = 3171,
  [SMALL_STATE(124)] = 3180,
  [SMALL_STATE(125)] = 3189,
  [SMALL_STATE(126)] = 3198,
  [SMALL_STATE(127)] = 3207,
  [SMALL_STATE(128)] = 3217,
  [SMALL_STATE(129)] = 3227,
  [SMALL_STATE(130)] = 3237,
  [SMALL_STATE(131)] = 3247,
  [SMALL_STATE(132)] = 3257,
  [SMALL_STATE(133)] = 3267,
  [SMALL_STATE(134)] = 3277,
  [SMALL_STATE(135)] = 3287,
  [SMALL_STATE(136)] = 3295,
  [SMALL_STATE(137)] = 3305,
  [SMALL_STATE(138)] = 3313,
  [SMALL_STATE(139)] = 3321,
  [SMALL_STATE(140)] = 3331,
  [SMALL_STATE(141)] = 3341,
  [SMALL_STATE(142)] = 3351,
  [SMALL_STATE(143)] = 3359,
  [SMALL_STATE(144)] = 3369,
  [SMALL_STATE(145)] = 3379,
  [SMALL_STATE(146)] = 3389,
  [SMALL_STATE(147)] = 3399,
  [SMALL_STATE(148)] = 3409,
  [SMALL_STATE(149)] = 3416,
  [SMALL_STATE(150)] = 3423,
  [SMALL_STATE(151)] = 3430,
  [SMALL_STATE(152)] = 3437,
  [SMALL_STATE(153)] = 3444,
  [SMALL_STATE(154)] = 3451,
  [SMALL_STATE(155)] = 3458,
  [SMALL_STATE(156)] = 3465,
  [SMALL_STATE(157)] = 3472,
  [SMALL_STATE(158)] = 3479,
  [SMALL_STATE(159)] = 3486,
  [SMALL_STATE(160)] = 3493,
  [SMALL_STATE(161)] = 3500,
  [SMALL_STATE(162)] = 3507,
  [SMALL_STATE(163)] = 3514,
  [SMALL_STATE(164)] = 3521,
  [SMALL_STATE(165)] = 3528,
  [SMALL_STATE(166)] = 3535,
  [SMALL_STATE(167)] = 3542,
  [SMALL_STATE(168)] = 3549,
  [SMALL_STATE(169)] = 3556,
  [SMALL_STATE(170)] = 3563,
  [SMALL_STATE(171)] = 3570,
  [SMALL_STATE(172)] = 3577,
  [SMALL_STATE(173)] = 3584,
  [SMALL_STATE(174)] = 3591,
  [SMALL_STATE(175)] = 3598,
  [SMALL_STATE(176)] = 3605,
  [SMALL_STATE(177)] = 3612,
  [SMALL_STATE(178)] = 3619,
  [SMALL_STATE(179)] = 3626,
  [SMALL_STATE(180)] = 3633,
  [SMALL_STATE(181)] = 3640,
  [SMALL_STATE(182)] = 3647,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_size_unit, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_size_unit, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_identifier, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_identifier, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_identifier, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_identifier, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_set, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_set, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_set, 4, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_set, 4, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_set, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_set, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_offset, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_offset, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_length, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_length, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_count, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_count, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 11),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 11),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_of_expression, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_of_expression, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_length, 5, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_length, 5, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_offset, 5, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_offset, 5, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expression, 8, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expression, 8, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 8),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 8),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_of_expression, 10, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_of_expression, 10, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_section, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_definition, 3, 0, 10),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_string, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(133),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(155),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_modifiers, 1, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_modifiers, 1, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_modifiers_repeat1, 2, 0, 0),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_modifiers_repeat1, 1, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_modifiers_repeat1, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_string, 1, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_string, 1, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_string, 3, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_string, 3, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_modifiers_repeat1, 4, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_modifiers_repeat1, 4, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_string, 4, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_string, 4, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hex_string_repeat1, 2, 0, 0),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_string_repeat1, 2, 0, 0), SHIFT_REPEAT(61),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_string_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_string_repeat1, 2, 0, 0), SHIFT_REPEAT(182),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 6, 0, 7),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 3, 0, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 5, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 4, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 3, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 4, 0, 3),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 5, 0, 4),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 5, 0, 5),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 4, 0, 2),
  [326] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_meta_section_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_meta_section_repeat1, 2, 0, 0),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_strings_section_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_strings_section_repeat1, 2, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_section, 3, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_jump, 3, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_alternative, 3, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_jump, 4, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_alternative, 4, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strings_section, 3, 0, 0),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_jump, 5, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(89),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_regex_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_string_content_repeat1, 2, 0, 0),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_string_content, 1, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_list, 2, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_list_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_list_repeat1, 2, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_set_repeat1, 2, 0, 0),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_set_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_alternative_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hex_alternative_repeat1, 2, 0, 0),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_definition, 3, 0, 9),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_list, 3, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_definition, 4, 0, 10),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_list_repeat1, 1, 0, 6),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 2, 0, 0),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 1, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5, 0, 0),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [522] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_yara(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
