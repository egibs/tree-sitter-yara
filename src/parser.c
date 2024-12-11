#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 191
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 125
#define ALIAS_COUNT 1
#define TOKEN_COUNT 78
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 13

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_import = 2,
  anon_sym_include = 3,
  anon_sym_private = 4,
  anon_sym_global = 5,
  anon_sym_rule = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_COLON = 9,
  aux_sym_tag_list_token1 = 10,
  anon_sym_meta = 11,
  anon_sym_EQ = 12,
  anon_sym_strings = 13,
  anon_sym_DOLLAR = 14,
  anon_sym_DQUOTE = 15,
  anon_sym_SQUOTE = 16,
  anon_sym_LPAREN = 17,
  anon_sym_PIPE = 18,
  anon_sym_RPAREN = 19,
  anon_sym_LBRACK = 20,
  anon_sym_DASH = 21,
  anon_sym_RBRACK = 22,
  sym_hex_byte = 23,
  sym_hex_wildcard = 24,
  anon_sym_SLASH = 25,
  anon_sym_nocase = 26,
  anon_sym_ascii = 27,
  anon_sym_wide = 28,
  anon_sym_fullword = 29,
  anon_sym_base64 = 30,
  anon_sym_base64wide = 31,
  anon_sym_xor = 32,
  anon_sym_condition = 33,
  anon_sym_filesize = 34,
  anon_sym_entrypoint = 35,
  anon_sym_KB = 36,
  anon_sym_MB = 37,
  anon_sym_GB = 38,
  aux_sym_integer_literal_token1 = 39,
  anon_sym_POUND = 40,
  anon_sym_AT = 41,
  anon_sym_BANG = 42,
  anon_sym_for = 43,
  anon_sym_of = 44,
  anon_sym_in = 45,
  anon_sym_all = 46,
  anon_sym_any = 47,
  anon_sym_none = 48,
  anon_sym_them = 49,
  anon_sym_COMMA = 50,
  anon_sym_DOT_DOT = 51,
  anon_sym_not = 52,
  anon_sym_STAR = 53,
  anon_sym_BSLASH = 54,
  anon_sym_PERCENT = 55,
  anon_sym_PLUS = 56,
  anon_sym_EQ_EQ = 57,
  anon_sym_BANG_EQ = 58,
  anon_sym_LT = 59,
  anon_sym_LT_EQ = 60,
  anon_sym_GT = 61,
  anon_sym_GT_EQ = 62,
  anon_sym_contains = 63,
  anon_sym_matches = 64,
  anon_sym_icontains = 65,
  anon_sym_imatches = 66,
  anon_sym_startswith = 67,
  anon_sym_istartswith = 68,
  anon_sym_endswith = 69,
  anon_sym_iendswith = 70,
  anon_sym_and = 71,
  anon_sym_or = 72,
  anon_sym_true = 73,
  anon_sym_false = 74,
  sym_comment = 75,
  sym__string_content = 76,
  sym__pattern_content = 77,
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
  sym_hex_alt_sequence = 93,
  sym_hex_jump = 94,
  sym_regex_string = 95,
  sym_string_modifiers = 96,
  sym_condition_section = 97,
  sym__expression = 98,
  sym_filesize_literal = 99,
  sym_entrypoint_literal = 100,
  sym_size_unit = 101,
  sym_integer_literal = 102,
  sym_string_count = 103,
  sym_string_offset = 104,
  sym_string_length = 105,
  sym_for_expression = 106,
  sym_for_of_expression = 107,
  sym_of_expression = 108,
  sym_quantifier = 109,
  sym_string_set = 110,
  sym_range = 111,
  sym_unary_expression = 112,
  sym_binary_expression = 113,
  sym_parenthesized_expression = 114,
  sym_boolean_literal = 115,
  sym_string_literal = 116,
  aux_sym_source_file_repeat1 = 117,
  aux_sym_tag_list_repeat1 = 118,
  aux_sym_meta_section_repeat1 = 119,
  aux_sym_strings_section_repeat1 = 120,
  aux_sym_hex_string_repeat1 = 121,
  aux_sym_hex_alt_sequence_repeat1 = 122,
  aux_sym_string_modifiers_repeat1 = 123,
  aux_sym_string_set_repeat1 = 124,
  alias_sym_tag = 125,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_import] = "import",
  [anon_sym_include] = "include",
  [anon_sym_private] = "private",
  [anon_sym_global] = "global",
  [anon_sym_rule] = "rule",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [aux_sym_tag_list_token1] = "tag_list_token1",
  [anon_sym_meta] = "meta",
  [anon_sym_EQ] = "=",
  [anon_sym_strings] = "strings",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DQUOTE] = "string_delimiter",
  [anon_sym_SQUOTE] = "string_delimiter",
  [anon_sym_LPAREN] = "(",
  [anon_sym_PIPE] = "|",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_DASH] = "-",
  [anon_sym_RBRACK] = "]",
  [sym_hex_byte] = "hex_byte",
  [sym_hex_wildcard] = "hex_wildcard",
  [anon_sym_SLASH] = "string_delimiter",
  [anon_sym_nocase] = "nocase",
  [anon_sym_ascii] = "ascii",
  [anon_sym_wide] = "wide",
  [anon_sym_fullword] = "fullword",
  [anon_sym_base64] = "base64",
  [anon_sym_base64wide] = "base64wide",
  [anon_sym_xor] = "xor",
  [anon_sym_condition] = "condition",
  [anon_sym_filesize] = "filesize",
  [anon_sym_entrypoint] = "entrypoint",
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
  [anon_sym_none] = "none",
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
  [sym__string_content] = "_string_content",
  [sym__pattern_content] = "pattern",
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
  [sym_hex_alt_sequence] = "hex_alt_sequence",
  [sym_hex_jump] = "hex_jump",
  [sym_regex_string] = "regex_string",
  [sym_string_modifiers] = "string_modifiers",
  [sym_condition_section] = "condition_section",
  [sym__expression] = "_expression",
  [sym_filesize_literal] = "filesize_literal",
  [sym_entrypoint_literal] = "entrypoint_literal",
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
  [aux_sym_hex_string_repeat1] = "hex_string_repeat1",
  [aux_sym_hex_alt_sequence_repeat1] = "hex_alt_sequence_repeat1",
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_tag_list_token1] = aux_sym_tag_list_token1,
  [anon_sym_meta] = anon_sym_meta,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_strings] = anon_sym_strings,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_DQUOTE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_hex_byte] = sym_hex_byte,
  [sym_hex_wildcard] = sym_hex_wildcard,
  [anon_sym_SLASH] = anon_sym_DQUOTE,
  [anon_sym_nocase] = anon_sym_nocase,
  [anon_sym_ascii] = anon_sym_ascii,
  [anon_sym_wide] = anon_sym_wide,
  [anon_sym_fullword] = anon_sym_fullword,
  [anon_sym_base64] = anon_sym_base64,
  [anon_sym_base64wide] = anon_sym_base64wide,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_condition] = anon_sym_condition,
  [anon_sym_filesize] = anon_sym_filesize,
  [anon_sym_entrypoint] = anon_sym_entrypoint,
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
  [anon_sym_none] = anon_sym_none,
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
  [sym__string_content] = sym__string_content,
  [sym__pattern_content] = sym__pattern_content,
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
  [sym_hex_alt_sequence] = sym_hex_alt_sequence,
  [sym_hex_jump] = sym_hex_jump,
  [sym_regex_string] = sym_regex_string,
  [sym_string_modifiers] = sym_string_modifiers,
  [sym_condition_section] = sym_condition_section,
  [sym__expression] = sym__expression,
  [sym_filesize_literal] = sym_filesize_literal,
  [sym_entrypoint_literal] = sym_entrypoint_literal,
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
  [aux_sym_hex_string_repeat1] = aux_sym_hex_string_repeat1,
  [aux_sym_hex_alt_sequence_repeat1] = aux_sym_hex_alt_sequence_repeat1,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tag_list_token1] = {
    .visible = false,
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
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = true,
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
  [sym_hex_byte] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_wildcard] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = true,
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
  [anon_sym_filesize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_entrypoint] = {
    .visible = true,
    .named = false,
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
  [anon_sym_none] = {
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
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym__pattern_content] = {
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
  [sym_hex_alt_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_jump] = {
    .visible = true,
    .named = true,
  },
  [sym_regex_string] = {
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
  [sym_filesize_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_entrypoint_literal] = {
    .visible = true,
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
  [aux_sym_hex_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_alt_sequence_repeat1] = {
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
  [2] = {.index = 0, .length = 2},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 3},
    {field_name, 1},
  [2] =
    {field_body, 4},
    {field_name, 2},
  [4] =
    {field_body, 4},
    {field_name, 1},
  [6] =
    {field_body, 5},
    {field_name, 3},
  [8] =
    {field_body, 5},
    {field_name, 2},
  [10] =
    {field_operand, 1},
    {field_operator, 0},
  [12] =
    {field_body, 6},
    {field_name, 3},
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
  [1] = {
    [0] = alias_sym_tag,
  },
  [3] = {
    [1] = alias_sym_tag,
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
  [53] = 52,
  [54] = 54,
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
  [94] = 6,
  [95] = 95,
  [96] = 17,
  [97] = 3,
  [98] = 4,
  [99] = 5,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
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
  [123] = 123,
  [124] = 124,
  [125] = 121,
  [126] = 126,
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
  [143] = 126,
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
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 150,
  [189] = 189,
  [190] = 189,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '\r') SKIP(0);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '?') ADVANCE(33);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '}') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 2:
      if (lookahead == '\r') SKIP(2);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == '}') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == '\r') SKIP(3);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '?') ADVANCE(33);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == '}') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == '\r') ADVANCE(18);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(57);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(42);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 12:
      if (eof) ADVANCE(14);
      if (lookahead == '\r') SKIP(12);
      if (lookahead == '!') ADVANCE(39);
      if (lookahead == '"') ADVANCE(22);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(23);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '}') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '\r') SKIP(13);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '%') ADVANCE(45);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '+') ADVANCE(46);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == '<') ADVANCE(49);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '>') ADVANCE(51);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(44);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '}') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_tag_list_token1);
      if (lookahead == '\r') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(47);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_hex_byte);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_hex_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_hex_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_hex_wildcard);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(57);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_integer_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_integer_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(48);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(56);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(57);
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
      if (lookahead == 'n') ADVANCE(73);
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(76);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(81);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(82);
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
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 63:
      if (lookahead == 'b') ADVANCE(92);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 70:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 75:
      if (lookahead == 'v') ADVANCE(103);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(107);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_xor);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 84:
      if (lookahead == '6') ADVANCE(111);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 87:
      if (lookahead == 'w') ADVANCE(114);
      END_STATE();
    case 88:
      if (lookahead == 'y') ADVANCE(115);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 91:
      if (lookahead == 'w') ADVANCE(118);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 95:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(124);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_meta);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_none);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_them);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_wide);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_ascii);
      END_STATE();
    case 111:
      if (lookahead == '4') ADVANCE(131);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(135);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 121:
      if (lookahead == 'w') ADVANCE(140);
      END_STATE();
    case 122:
      if (lookahead == 'h') ADVANCE(141);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(148);
      END_STATE();
    case 130:
      if (lookahead == 'g') ADVANCE(149);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_base64);
      if (lookahead == 'w') ADVANCE(150);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 136:
      if (lookahead == 'z') ADVANCE(155);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 139:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(158);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_nocase);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 148:
      if (lookahead == 'w') ADVANCE(164);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 150:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 153:
      if (lookahead == 'h') ADVANCE(169);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 156:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(173);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(174);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 161:
      if (lookahead == 'w') ADVANCE(176);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_matches);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_private);
      END_STATE();
    case 164:
      if (lookahead == 'i') ADVANCE(177);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_strings);
      END_STATE();
    case 166:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_endswith);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_filesize);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_fullword);
      END_STATE();
    case 173:
      if (lookahead == 's') ADVANCE(181);
      END_STATE();
    case 174:
      if (lookahead == 'h') ADVANCE(182);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_imatches);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(183);
      END_STATE();
    case 177:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 178:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_condition);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_icontains);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_iendswith);
      END_STATE();
    case 183:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 184:
      if (lookahead == 'h') ADVANCE(188);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_base64wide);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_entrypoint);
      END_STATE();
    case 187:
      if (lookahead == 'h') ADVANCE(189);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_startswith);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_istartswith);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 13},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 13},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 12},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 12},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 12},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 12},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 12},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 12},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 12},
  [99] = {.lex_state = 12},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 12},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 12},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 12},
  [114] = {.lex_state = 12},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 4},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 12},
  [121] = {.lex_state = 0, .external_lex_state = 2},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 0, .external_lex_state = 2},
  [126] = {.lex_state = 0, .external_lex_state = 2},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 0, .external_lex_state = 2},
  [144] = {.lex_state = 12},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 12},
  [147] = {.lex_state = 12},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 12},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 0, .external_lex_state = 3},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 12},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 12},
  [173] = {.lex_state = 12},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 12},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_strings] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_hex_byte] = ACTIONS(1),
    [sym_hex_wildcard] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_nocase] = ACTIONS(1),
    [anon_sym_ascii] = ACTIONS(1),
    [anon_sym_wide] = ACTIONS(1),
    [anon_sym_fullword] = ACTIONS(1),
    [anon_sym_base64] = ACTIONS(1),
    [anon_sym_base64wide] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_condition] = ACTIONS(1),
    [anon_sym_filesize] = ACTIONS(1),
    [anon_sym_entrypoint] = ACTIONS(1),
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
    [anon_sym_none] = ACTIONS(1),
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
    [sym__string_content] = ACTIONS(1),
    [sym__pattern_content] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(184),
    [sym_import_statement] = STATE(54),
    [sym_include_statement] = STATE(54),
    [sym_rule_definition] = STATE(54),
    [aux_sym_source_file_repeat1] = STATE(54),
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
  [0] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_filesize,
    ACTIONS(31), 1,
      anon_sym_entrypoint,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_not,
    STATE(28), 1,
      sym_integer_literal,
    STATE(173), 1,
      sym_quantifier,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(43), 3,
      anon_sym_all,
      anon_sym_any,
      anon_sym_none,
    STATE(44), 15,
      sym_string_identifier,
      sym__expression,
      sym_filesize_literal,
      sym_entrypoint_literal,
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
  [82] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 3,
      anon_sym_base64,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 35,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
  [128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 3,
      anon_sym_base64,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 35,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
  [174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 3,
      anon_sym_base64,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 35,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
  [220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 3,
      anon_sym_base64,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 35,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
  [266] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_filesize,
    ACTIONS(31), 1,
      anon_sym_entrypoint,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(65), 1,
      sym_identifier,
    STATE(28), 1,
      sym_integer_literal,
    STATE(173), 1,
      sym_quantifier,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(43), 3,
      anon_sym_all,
      anon_sym_any,
      anon_sym_none,
    STATE(45), 15,
      sym_string_identifier,
      sym__expression,
      sym_filesize_literal,
      sym_entrypoint_literal,
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
  [348] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_filesize,
    ACTIONS(31), 1,
      anon_sym_entrypoint,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(28), 1,
      sym_integer_literal,
    STATE(173), 1,
      sym_quantifier,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(43), 3,
      anon_sym_all,
      anon_sym_any,
      anon_sym_none,
    STATE(29), 15,
      sym_string_identifier,
      sym__expression,
      sym_filesize_literal,
      sym_entrypoint_literal,
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
  [430] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_filesize,
    ACTIONS(31), 1,
      anon_sym_entrypoint,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(28), 1,
      sym_integer_literal,
    STATE(173), 1,
      sym_quantifier,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(43), 3,
      anon_sym_all,
      anon_sym_any,
      anon_sym_none,
    STATE(47), 15,
      sym_string_identifier,
      sym__expression,
      sym_filesize_literal,
      sym_entrypoint_literal,
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
  [512] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_filesize,
    ACTIONS(31), 1,
      anon_sym_entrypoint,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(28), 1,
      sym_integer_literal,
    STATE(173), 1,
      sym_quantifier,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(43), 3,
      anon_sym_all,
      anon_sym_any,
      anon_sym_none,
    STATE(46), 15,
      sym_string_identifier,
      sym__expression,
      sym_filesize_literal,
      sym_entrypoint_literal,
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
  [594] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_filesize,
    ACTIONS(31), 1,
      anon_sym_entrypoint,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(73), 1,
      sym_identifier,
    STATE(28), 1,
      sym_integer_literal,
    STATE(173), 1,
      sym_quantifier,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(43), 3,
      anon_sym_all,
      anon_sym_any,
      anon_sym_none,
    STATE(34), 15,
      sym_string_identifier,
      sym__expression,
      sym_filesize_literal,
      sym_entrypoint_literal,
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
  [676] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_filesize,
    ACTIONS(31), 1,
      anon_sym_entrypoint,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(75), 1,
      sym_identifier,
    STATE(28), 1,
      sym_integer_literal,
    STATE(173), 1,
      sym_quantifier,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(43), 3,
      anon_sym_all,
      anon_sym_any,
      anon_sym_none,
    STATE(35), 15,
      sym_string_identifier,
      sym__expression,
      sym_filesize_literal,
      sym_entrypoint_literal,
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
  [758] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_filesize,
    ACTIONS(31), 1,
      anon_sym_entrypoint,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(77), 1,
      sym_identifier,
    STATE(28), 1,
      sym_integer_literal,
    STATE(173), 1,
      sym_quantifier,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(43), 3,
      anon_sym_all,
      anon_sym_any,
      anon_sym_none,
    STATE(32), 15,
      sym_string_identifier,
      sym__expression,
      sym_filesize_literal,
      sym_entrypoint_literal,
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
  [840] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_filesize,
    ACTIONS(31), 1,
      anon_sym_entrypoint,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(79), 1,
      sym_identifier,
    STATE(28), 1,
      sym_integer_literal,
    STATE(173), 1,
      sym_quantifier,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(43), 3,
      anon_sym_all,
      anon_sym_any,
      anon_sym_none,
    STATE(36), 15,
      sym_string_identifier,
      sym__expression,
      sym_filesize_literal,
      sym_entrypoint_literal,
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
  [922] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(29), 1,
      anon_sym_filesize,
    ACTIONS(31), 1,
      anon_sym_entrypoint,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(35), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_BANG,
    ACTIONS(41), 1,
      anon_sym_for,
    ACTIONS(45), 1,
      anon_sym_not,
    ACTIONS(81), 1,
      sym_identifier,
    STATE(28), 1,
      sym_integer_literal,
    STATE(173), 1,
      sym_quantifier,
    ACTIONS(47), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(43), 3,
      anon_sym_all,
      anon_sym_any,
      anon_sym_none,
    STATE(31), 15,
      sym_string_identifier,
      sym__expression,
      sym_filesize_literal,
      sym_entrypoint_literal,
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
  [1004] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(18), 1,
      sym_size_unit,
    ACTIONS(87), 3,
      anon_sym_KB,
      anon_sym_MB,
      anon_sym_GB,
    ACTIONS(85), 13,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(83), 16,
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
  [1049] = 3,
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
      anon_sym_RPAREN,
      anon_sym_DASH,
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
  [1086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 13,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_RBRACK,
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
  [1123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 13,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_RBRACK,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(97), 16,
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
  [1160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(103), 13,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(105), 13,
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
  [1197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 11,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(107), 15,
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
  [1231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 23,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
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
  [1265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 23,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
  [1298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 23,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
  [1331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 23,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
  [1364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
  [1398] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_LBRACK,
    ACTIONS(137), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
  [1432] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_of,
    ACTIONS(143), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
  [1466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
  [1497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
  [1528] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_and,
    ACTIONS(155), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
    ACTIONS(157), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 12,
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
  [1567] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(153), 16,
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
  [1602] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(167), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
  [1633] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(153), 18,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
  [1666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
  [1697] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(153), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(159), 12,
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
  [1734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
  [1765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
  [1796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
  [1827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(183), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
  [1858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
  [1889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(191), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
  [1920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(195), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH,
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
  [1951] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_and,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    ACTIONS(201), 1,
      anon_sym_or,
    ACTIONS(155), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 12,
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
  [1991] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_and,
    ACTIONS(201), 1,
      anon_sym_or,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 12,
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
  [2031] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_and,
    ACTIONS(201), 1,
      anon_sym_or,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 12,
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
  [2071] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_and,
    ACTIONS(201), 1,
      anon_sym_or,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(155), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(159), 12,
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
  [2111] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_base64,
    ACTIONS(215), 1,
      anon_sym_base64wide,
    STATE(52), 1,
      aux_sym_string_modifiers_repeat1,
    STATE(106), 1,
      sym_string_modifiers,
    ACTIONS(209), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_condition,
    ACTIONS(211), 5,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_xor,
  [2139] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_base64,
    ACTIONS(215), 1,
      anon_sym_base64wide,
    STATE(53), 1,
      aux_sym_string_modifiers_repeat1,
    STATE(58), 1,
      sym_string_modifiers,
    ACTIONS(217), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_condition,
    ACTIONS(219), 5,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_xor,
  [2167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_LPAREN,
    ACTIONS(225), 1,
      anon_sym_base64,
    ACTIONS(221), 9,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
  [2188] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_base64,
    ACTIONS(235), 1,
      anon_sym_base64wide,
    STATE(51), 1,
      aux_sym_string_modifiers_repeat1,
    ACTIONS(227), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_condition,
    ACTIONS(229), 5,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_xor,
  [2213] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_base64,
    ACTIONS(215), 1,
      anon_sym_base64wide,
    STATE(51), 1,
      aux_sym_string_modifiers_repeat1,
    ACTIONS(238), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_condition,
    ACTIONS(240), 5,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_xor,
  [2238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_base64,
    STATE(51), 1,
      aux_sym_string_modifiers_repeat1,
    ACTIONS(238), 9,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
  [2259] = 8,
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
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    STATE(56), 4,
      sym_import_statement,
      sym_include_statement,
      sym_rule_definition,
      aux_sym_source_file_repeat1,
  [2287] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_base64,
    ACTIONS(246), 9,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
  [2305] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      ts_builtin_sym_end,
    ACTIONS(252), 1,
      anon_sym_import,
    ACTIONS(255), 1,
      anon_sym_include,
    ACTIONS(258), 1,
      anon_sym_private,
    ACTIONS(261), 1,
      anon_sym_global,
    ACTIONS(264), 1,
      anon_sym_rule,
    STATE(56), 4,
      sym_import_statement,
      sym_include_statement,
      sym_rule_definition,
      aux_sym_source_file_repeat1,
  [2333] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(267), 1,
      anon_sym_DQUOTE,
    ACTIONS(269), 1,
      anon_sym_SQUOTE,
    ACTIONS(271), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(96), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(93), 3,
      sym_integer_literal,
      sym_boolean_literal,
      sym_string_literal,
  [2359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_base64,
    ACTIONS(273), 9,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
  [2377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_base64,
    ACTIONS(277), 9,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
  [2395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_base64,
    ACTIONS(281), 9,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
  [2413] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(285), 1,
      anon_sym_LBRACE,
    ACTIONS(287), 1,
      anon_sym_SLASH,
    STATE(59), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(48), 3,
      sym_text_string,
      sym_hex_string,
      sym_regex_string,
  [2438] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(295), 2,
      sym_hex_byte,
      sym_hex_wildcard,
    STATE(63), 3,
      sym_hex_alt_sequence,
      sym_hex_jump,
      aux_sym_hex_string_repeat1,
  [2460] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
    ACTIONS(305), 2,
      sym_hex_byte,
      sym_hex_wildcard,
    STATE(63), 3,
      sym_hex_alt_sequence,
      sym_hex_jump,
      aux_sym_hex_string_repeat1,
  [2482] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_meta,
    ACTIONS(310), 1,
      anon_sym_strings,
    ACTIONS(312), 1,
      anon_sym_condition,
    STATE(85), 1,
      sym_meta_section,
    STATE(104), 1,
      sym_strings_section,
    STATE(164), 1,
      sym_condition_section,
    STATE(169), 1,
      sym_rule_body,
  [2507] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_meta,
    ACTIONS(310), 1,
      anon_sym_strings,
    ACTIONS(312), 1,
      anon_sym_condition,
    STATE(85), 1,
      sym_meta_section,
    STATE(104), 1,
      sym_strings_section,
    STATE(164), 1,
      sym_condition_section,
    STATE(174), 1,
      sym_rule_body,
  [2532] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_meta,
    ACTIONS(310), 1,
      anon_sym_strings,
    ACTIONS(312), 1,
      anon_sym_condition,
    STATE(85), 1,
      sym_meta_section,
    STATE(104), 1,
      sym_strings_section,
    STATE(164), 1,
      sym_condition_section,
    STATE(186), 1,
      sym_rule_body,
  [2557] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_LPAREN,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(314), 2,
      sym_hex_byte,
      sym_hex_wildcard,
    STATE(62), 3,
      sym_hex_alt_sequence,
      sym_hex_jump,
      aux_sym_hex_string_repeat1,
  [2576] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_meta,
    ACTIONS(310), 1,
      anon_sym_strings,
    ACTIONS(312), 1,
      anon_sym_condition,
    STATE(85), 1,
      sym_meta_section,
    STATE(104), 1,
      sym_strings_section,
    STATE(160), 1,
      sym_rule_body,
    STATE(164), 1,
      sym_condition_section,
  [2601] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_meta,
    ACTIONS(310), 1,
      anon_sym_strings,
    ACTIONS(312), 1,
      anon_sym_condition,
    STATE(85), 1,
      sym_meta_section,
    STATE(104), 1,
      sym_strings_section,
    STATE(164), 1,
      sym_condition_section,
    STATE(175), 1,
      sym_rule_body,
  [2626] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_meta,
    ACTIONS(310), 1,
      anon_sym_strings,
    ACTIONS(312), 1,
      anon_sym_condition,
    STATE(85), 1,
      sym_meta_section,
    STATE(104), 1,
      sym_strings_section,
    STATE(164), 1,
      sym_condition_section,
    STATE(179), 1,
      sym_rule_body,
  [2651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2675] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_DOLLAR,
    STATE(149), 1,
      sym_string_identifier,
    ACTIONS(320), 2,
      anon_sym_RBRACE,
      anon_sym_condition,
    STATE(73), 2,
      sym_string_definition,
      aux_sym_strings_section_repeat1,
  [2693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2705] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      sym_identifier,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    ACTIONS(332), 2,
      anon_sym_strings,
      anon_sym_condition,
    STATE(75), 2,
      sym_meta_definition,
      aux_sym_meta_section_repeat1,
  [2723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2735] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    STATE(149), 1,
      sym_string_identifier,
    ACTIONS(336), 2,
      anon_sym_RBRACE,
      anon_sym_condition,
    STATE(73), 2,
      sym_string_definition,
      aux_sym_strings_section_repeat1,
  [2753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2765] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    STATE(144), 1,
      sym_integer_literal,
    STATE(181), 1,
      sym_quantifier,
    ACTIONS(340), 3,
      anon_sym_all,
      anon_sym_any,
      anon_sym_none,
  [2783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2795] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    ACTIONS(348), 2,
      anon_sym_strings,
      anon_sym_condition,
    STATE(75), 2,
      sym_meta_definition,
      aux_sym_meta_section_repeat1,
  [2813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2837] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(74), 1,
      sym_string_literal,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2854] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_strings,
    ACTIONS(312), 1,
      anon_sym_condition,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    STATE(119), 1,
      sym_strings_section,
    STATE(177), 1,
      sym_condition_section,
  [2873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_hex_byte,
      sym_hex_wildcard,
  [2884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_hex_byte,
      sym_hex_wildcard,
  [2895] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(156), 1,
      sym_string_literal,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_hex_byte,
      sym_hex_wildcard,
  [2923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_hex_byte,
      sym_hex_wildcard,
  [2934] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(78), 1,
      sym_string_literal,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 5,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_hex_byte,
      sym_hex_wildcard,
  [2962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    ACTIONS(366), 3,
      anon_sym_strings,
      anon_sym_condition,
      sym_identifier,
  [2974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 3,
      anon_sym_strings,
      anon_sym_condition,
      sym_identifier,
  [2986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    STATE(149), 1,
      sym_string_identifier,
    STATE(77), 2,
      sym_string_definition,
      aux_sym_strings_section_repeat1,
  [3000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 3,
      anon_sym_strings,
      anon_sym_condition,
      sym_identifier,
  [3012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 3,
      anon_sym_strings,
      anon_sym_condition,
      sym_identifier,
  [3024] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 3,
      anon_sym_strings,
      anon_sym_condition,
      sym_identifier,
  [3036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 3,
      anon_sym_strings,
      anon_sym_condition,
      sym_identifier,
  [3048] = 4,
    ACTIONS(370), 1,
      sym_identifier,
    ACTIONS(373), 1,
      aux_sym_tag_list_token1,
    ACTIONS(376), 1,
      sym_comment,
    STATE(100), 1,
      aux_sym_tag_list_repeat1,
  [3061] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    ACTIONS(380), 1,
      anon_sym_COLON,
    STATE(185), 1,
      sym_tag_list,
  [3074] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_COLON,
    ACTIONS(382), 1,
      anon_sym_LBRACE,
    STATE(182), 1,
      sym_tag_list,
  [3087] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_them,
    STATE(124), 1,
      sym_string_set,
  [3100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_condition,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    STATE(177), 1,
      sym_condition_section,
  [3113] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(388), 1,
      anon_sym_DASH,
    STATE(161), 1,
      sym_integer_literal,
  [3126] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_condition,
  [3135] = 4,
    ACTIONS(376), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_identifier,
    ACTIONS(394), 1,
      aux_sym_tag_list_token1,
    STATE(100), 1,
      aux_sym_tag_list_repeat1,
  [3148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    ACTIONS(398), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_string_set_repeat1,
  [3161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_PIPE,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(112), 1,
      aux_sym_hex_alt_sequence_repeat1,
  [3174] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(404), 1,
      anon_sym_RBRACK,
    STATE(153), 1,
      sym_integer_literal,
  [3187] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym_string_set_repeat1,
  [3200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_PIPE,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_hex_alt_sequence_repeat1,
  [3213] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(410), 1,
      anon_sym_RBRACK,
    STATE(167), 1,
      sym_integer_literal,
  [3226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_identifier,
    STATE(81), 2,
      sym_meta_definition,
      aux_sym_meta_section_repeat1,
  [3237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_string_set_repeat1,
  [3250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_PIPE,
    ACTIONS(422), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_hex_alt_sequence_repeat1,
  [3263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_COLON,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    STATE(158), 1,
      sym_tag_list,
  [3276] = 4,
    ACTIONS(376), 1,
      sym_comment,
    ACTIONS(392), 1,
      sym_identifier,
    ACTIONS(426), 1,
      aux_sym_tag_list_token1,
    STATE(107), 1,
      aux_sym_tag_list_repeat1,
  [3289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_condition,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
    STATE(163), 1,
      sym_condition_section,
  [3302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
    ACTIONS(386), 1,
      anon_sym_them,
    STATE(37), 1,
      sym_string_set,
  [3315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_SQUOTE,
    ACTIONS(432), 1,
      sym__string_content,
  [3325] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 2,
      sym_hex_byte,
      sym_hex_wildcard,
  [3333] = 3,
    ACTIONS(376), 1,
      sym_comment,
    ACTIONS(436), 1,
      sym_identifier,
    ACTIONS(438), 1,
      aux_sym_tag_list_token1,
  [3343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_COLON,
    ACTIONS(442), 1,
      anon_sym_in,
  [3353] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_SQUOTE,
    ACTIONS(446), 1,
      sym__string_content,
  [3363] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_DQUOTE,
    ACTIONS(450), 1,
      sym__string_content,
  [3373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
    STATE(159), 1,
      sym_range,
  [3383] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    STATE(135), 1,
      sym_string_identifier,
  [3393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 2,
      sym_hex_byte,
      sym_hex_wildcard,
  [3401] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    STATE(151), 1,
      sym_integer_literal,
  [3411] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    STATE(38), 1,
      sym_string_identifier,
  [3421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    STATE(152), 1,
      sym_integer_literal,
  [3431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      sym_string_identifier,
  [3441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    STATE(170), 1,
      sym_integer_literal,
  [3451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_global,
    ACTIONS(458), 1,
      anon_sym_rule,
  [3469] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3477] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    STATE(26), 1,
      sym_string_identifier,
  [3487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    STATE(176), 1,
      sym_integer_literal,
  [3497] = 3,
    ACTIONS(376), 1,
      sym_comment,
    ACTIONS(460), 1,
      sym_identifier,
    ACTIONS(462), 1,
      aux_sym_tag_list_token1,
  [3507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    STATE(108), 1,
      sym_string_identifier,
  [3517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym_identifier,
    ACTIONS(466), 1,
      anon_sym_LBRACE,
  [3527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_DQUOTE,
    ACTIONS(470), 1,
      sym__string_content,
  [3537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_of,
  [3544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym_identifier,
  [3551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_rule,
  [3558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym_identifier,
  [3565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_COLON,
  [3572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_EQ,
  [3579] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_DQUOTE,
  [3586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_RBRACK,
  [3593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_RBRACK,
  [3600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_RBRACK,
  [3607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_of,
  [3614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      sym__pattern_content,
  [3621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
  [3628] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_of,
  [3635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
  [3642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COLON,
  [3649] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
  [3656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_DASH,
  [3663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_COLON,
  [3670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_RBRACE,
  [3677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
  [3684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_COLON,
  [3691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_rule,
  [3698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_RBRACK,
  [3705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym_identifier,
  [3712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
  [3719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_DOT_DOT,
  [3726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LPAREN,
  [3733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_EQ,
  [3740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_of,
  [3747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
  [3754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_RBRACE,
  [3761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
  [3768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_RBRACE,
  [3775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_COLON,
  [3782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_RBRACE,
  [3789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_SLASH,
  [3796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_of,
  [3803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
  [3810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      sym_identifier,
  [3817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      ts_builtin_sym_end,
  [3824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_LBRACE,
  [3831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
  [3838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_LPAREN,
  [3845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_DQUOTE,
  [3852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SQUOTE,
  [3859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_SQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 82,
  [SMALL_STATE(4)] = 128,
  [SMALL_STATE(5)] = 174,
  [SMALL_STATE(6)] = 220,
  [SMALL_STATE(7)] = 266,
  [SMALL_STATE(8)] = 348,
  [SMALL_STATE(9)] = 430,
  [SMALL_STATE(10)] = 512,
  [SMALL_STATE(11)] = 594,
  [SMALL_STATE(12)] = 676,
  [SMALL_STATE(13)] = 758,
  [SMALL_STATE(14)] = 840,
  [SMALL_STATE(15)] = 922,
  [SMALL_STATE(16)] = 1004,
  [SMALL_STATE(17)] = 1049,
  [SMALL_STATE(18)] = 1086,
  [SMALL_STATE(19)] = 1123,
  [SMALL_STATE(20)] = 1160,
  [SMALL_STATE(21)] = 1197,
  [SMALL_STATE(22)] = 1231,
  [SMALL_STATE(23)] = 1265,
  [SMALL_STATE(24)] = 1298,
  [SMALL_STATE(25)] = 1331,
  [SMALL_STATE(26)] = 1364,
  [SMALL_STATE(27)] = 1398,
  [SMALL_STATE(28)] = 1432,
  [SMALL_STATE(29)] = 1466,
  [SMALL_STATE(30)] = 1497,
  [SMALL_STATE(31)] = 1528,
  [SMALL_STATE(32)] = 1567,
  [SMALL_STATE(33)] = 1602,
  [SMALL_STATE(34)] = 1633,
  [SMALL_STATE(35)] = 1666,
  [SMALL_STATE(36)] = 1697,
  [SMALL_STATE(37)] = 1734,
  [SMALL_STATE(38)] = 1765,
  [SMALL_STATE(39)] = 1796,
  [SMALL_STATE(40)] = 1827,
  [SMALL_STATE(41)] = 1858,
  [SMALL_STATE(42)] = 1889,
  [SMALL_STATE(43)] = 1920,
  [SMALL_STATE(44)] = 1951,
  [SMALL_STATE(45)] = 1991,
  [SMALL_STATE(46)] = 2031,
  [SMALL_STATE(47)] = 2071,
  [SMALL_STATE(48)] = 2111,
  [SMALL_STATE(49)] = 2139,
  [SMALL_STATE(50)] = 2167,
  [SMALL_STATE(51)] = 2188,
  [SMALL_STATE(52)] = 2213,
  [SMALL_STATE(53)] = 2238,
  [SMALL_STATE(54)] = 2259,
  [SMALL_STATE(55)] = 2287,
  [SMALL_STATE(56)] = 2305,
  [SMALL_STATE(57)] = 2333,
  [SMALL_STATE(58)] = 2359,
  [SMALL_STATE(59)] = 2377,
  [SMALL_STATE(60)] = 2395,
  [SMALL_STATE(61)] = 2413,
  [SMALL_STATE(62)] = 2438,
  [SMALL_STATE(63)] = 2460,
  [SMALL_STATE(64)] = 2482,
  [SMALL_STATE(65)] = 2507,
  [SMALL_STATE(66)] = 2532,
  [SMALL_STATE(67)] = 2557,
  [SMALL_STATE(68)] = 2576,
  [SMALL_STATE(69)] = 2601,
  [SMALL_STATE(70)] = 2626,
  [SMALL_STATE(71)] = 2651,
  [SMALL_STATE(72)] = 2663,
  [SMALL_STATE(73)] = 2675,
  [SMALL_STATE(74)] = 2693,
  [SMALL_STATE(75)] = 2705,
  [SMALL_STATE(76)] = 2723,
  [SMALL_STATE(77)] = 2735,
  [SMALL_STATE(78)] = 2753,
  [SMALL_STATE(79)] = 2765,
  [SMALL_STATE(80)] = 2783,
  [SMALL_STATE(81)] = 2795,
  [SMALL_STATE(82)] = 2813,
  [SMALL_STATE(83)] = 2825,
  [SMALL_STATE(84)] = 2837,
  [SMALL_STATE(85)] = 2854,
  [SMALL_STATE(86)] = 2873,
  [SMALL_STATE(87)] = 2884,
  [SMALL_STATE(88)] = 2895,
  [SMALL_STATE(89)] = 2912,
  [SMALL_STATE(90)] = 2923,
  [SMALL_STATE(91)] = 2934,
  [SMALL_STATE(92)] = 2951,
  [SMALL_STATE(93)] = 2962,
  [SMALL_STATE(94)] = 2974,
  [SMALL_STATE(95)] = 2986,
  [SMALL_STATE(96)] = 3000,
  [SMALL_STATE(97)] = 3012,
  [SMALL_STATE(98)] = 3024,
  [SMALL_STATE(99)] = 3036,
  [SMALL_STATE(100)] = 3048,
  [SMALL_STATE(101)] = 3061,
  [SMALL_STATE(102)] = 3074,
  [SMALL_STATE(103)] = 3087,
  [SMALL_STATE(104)] = 3100,
  [SMALL_STATE(105)] = 3113,
  [SMALL_STATE(106)] = 3126,
  [SMALL_STATE(107)] = 3135,
  [SMALL_STATE(108)] = 3148,
  [SMALL_STATE(109)] = 3161,
  [SMALL_STATE(110)] = 3174,
  [SMALL_STATE(111)] = 3187,
  [SMALL_STATE(112)] = 3200,
  [SMALL_STATE(113)] = 3213,
  [SMALL_STATE(114)] = 3226,
  [SMALL_STATE(115)] = 3237,
  [SMALL_STATE(116)] = 3250,
  [SMALL_STATE(117)] = 3263,
  [SMALL_STATE(118)] = 3276,
  [SMALL_STATE(119)] = 3289,
  [SMALL_STATE(120)] = 3302,
  [SMALL_STATE(121)] = 3315,
  [SMALL_STATE(122)] = 3325,
  [SMALL_STATE(123)] = 3333,
  [SMALL_STATE(124)] = 3343,
  [SMALL_STATE(125)] = 3353,
  [SMALL_STATE(126)] = 3363,
  [SMALL_STATE(127)] = 3373,
  [SMALL_STATE(128)] = 3383,
  [SMALL_STATE(129)] = 3393,
  [SMALL_STATE(130)] = 3401,
  [SMALL_STATE(131)] = 3411,
  [SMALL_STATE(132)] = 3421,
  [SMALL_STATE(133)] = 3431,
  [SMALL_STATE(134)] = 3441,
  [SMALL_STATE(135)] = 3451,
  [SMALL_STATE(136)] = 3459,
  [SMALL_STATE(137)] = 3469,
  [SMALL_STATE(138)] = 3477,
  [SMALL_STATE(139)] = 3487,
  [SMALL_STATE(140)] = 3497,
  [SMALL_STATE(141)] = 3507,
  [SMALL_STATE(142)] = 3517,
  [SMALL_STATE(143)] = 3527,
  [SMALL_STATE(144)] = 3537,
  [SMALL_STATE(145)] = 3544,
  [SMALL_STATE(146)] = 3551,
  [SMALL_STATE(147)] = 3558,
  [SMALL_STATE(148)] = 3565,
  [SMALL_STATE(149)] = 3572,
  [SMALL_STATE(150)] = 3579,
  [SMALL_STATE(151)] = 3586,
  [SMALL_STATE(152)] = 3593,
  [SMALL_STATE(153)] = 3600,
  [SMALL_STATE(154)] = 3607,
  [SMALL_STATE(155)] = 3614,
  [SMALL_STATE(156)] = 3621,
  [SMALL_STATE(157)] = 3628,
  [SMALL_STATE(158)] = 3635,
  [SMALL_STATE(159)] = 3642,
  [SMALL_STATE(160)] = 3649,
  [SMALL_STATE(161)] = 3656,
  [SMALL_STATE(162)] = 3663,
  [SMALL_STATE(163)] = 3670,
  [SMALL_STATE(164)] = 3677,
  [SMALL_STATE(165)] = 3684,
  [SMALL_STATE(166)] = 3691,
  [SMALL_STATE(167)] = 3698,
  [SMALL_STATE(168)] = 3705,
  [SMALL_STATE(169)] = 3712,
  [SMALL_STATE(170)] = 3719,
  [SMALL_STATE(171)] = 3726,
  [SMALL_STATE(172)] = 3733,
  [SMALL_STATE(173)] = 3740,
  [SMALL_STATE(174)] = 3747,
  [SMALL_STATE(175)] = 3754,
  [SMALL_STATE(176)] = 3761,
  [SMALL_STATE(177)] = 3768,
  [SMALL_STATE(178)] = 3775,
  [SMALL_STATE(179)] = 3782,
  [SMALL_STATE(180)] = 3789,
  [SMALL_STATE(181)] = 3796,
  [SMALL_STATE(182)] = 3803,
  [SMALL_STATE(183)] = 3810,
  [SMALL_STATE(184)] = 3817,
  [SMALL_STATE(185)] = 3824,
  [SMALL_STATE(186)] = 3831,
  [SMALL_STATE(187)] = 3838,
  [SMALL_STATE(188)] = 3845,
  [SMALL_STATE(189)] = 3852,
  [SMALL_STATE(190)] = 3859,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_size_unit, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_size_unit, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_identifier, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_identifier, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_identifier, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_identifier, 2, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_set, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_set, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_set, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_set, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_set, 4, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_set, 4, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_length, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_length, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_offset, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_offset, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 8),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 8),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_literal, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entrypoint_literal, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 12),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 12),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_of_expression, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_of_expression, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_count, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_count, 2, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expression, 8, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expression, 8, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_offset, 5, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_offset, 5, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_length, 5, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_length, 5, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_of_expression, 10, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_of_expression, 10, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filesize_literal, 1, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filesize_literal, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_section, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_definition, 3, 0, 11),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_string, 3, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_modifiers_repeat1, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_modifiers_repeat1, 1, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_modifiers_repeat1, 2, 0, 0),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_modifiers, 1, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_modifiers, 1, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_modifiers_repeat1, 4, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_modifiers_repeat1, 4, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(166),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_string, 4, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_string, 4, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_string, 1, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_string, 1, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_string, 3, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_string, 3, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hex_string_repeat1, 2, 0, 0),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_string_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_string_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_string_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 6, 0, 4),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 7, 0, 7),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_strings_section_repeat1, 2, 0, 0),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_strings_section_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2, 0, 0),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_meta_section_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_section_repeat1, 2, 0, 0),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_meta_section_repeat1, 2, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 8, 0, 9),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strings_section, 3, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 7, 0, 6),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_section, 3, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_section, 3, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 6, 0, 5),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 5, 0, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 1, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_jump, 3, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_alt_sequence, 3, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_jump, 4, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_alt_sequence, 4, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_jump, 5, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_definition, 3, 0, 10),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_definition, 3, 0, 10),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_list_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_list_repeat1, 2, 0, 0), SHIFT_REPEAT(145),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_definition, 4, 0, 11),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_set_repeat1, 2, 0, 0),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_set_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_alt_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hex_alt_sequence_repeat1, 2, 0, 0),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 2, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_list_repeat1, 1, 0, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_list_repeat1, 1, 0, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_list_repeat1, 2, 0, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_list_repeat1, 2, 0, 3),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_list, 3, 0, 0),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 1, 0, 0),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 2, 0, 0),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 3, 0, 0),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5, 0, 0),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [540] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__string_content = 0,
  ts_external_token__pattern_content = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__string_content] = sym__string_content,
  [ts_external_token__pattern_content] = sym__pattern_content,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__string_content] = true,
    [ts_external_token__pattern_content] = true,
  },
  [2] = {
    [ts_external_token__string_content] = true,
  },
  [3] = {
    [ts_external_token__pattern_content] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_yara_external_scanner_create(void);
void tree_sitter_yara_external_scanner_destroy(void *);
bool tree_sitter_yara_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_yara_external_scanner_serialize(void *, char *);
void tree_sitter_yara_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_yara_external_scanner_create,
      tree_sitter_yara_external_scanner_destroy,
      tree_sitter_yara_external_scanner_scan,
      tree_sitter_yara_external_scanner_serialize,
      tree_sitter_yara_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
