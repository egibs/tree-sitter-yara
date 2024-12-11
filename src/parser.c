#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 195
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 1
#define TOKEN_COUNT 80
#define EXTERNAL_TOKEN_COUNT 0
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
  aux_sym_double_quoted_string_token1 = 16,
  anon_sym_SQUOTE = 17,
  aux_sym_single_quoted_string_token1 = 18,
  sym_escape_sequence = 19,
  sym_hex_byte = 20,
  sym_hex_wildcard = 21,
  anon_sym_LBRACK = 22,
  anon_sym_DASH = 23,
  anon_sym_RBRACK = 24,
  anon_sym_LPAREN = 25,
  anon_sym_PIPE = 26,
  anon_sym_RPAREN = 27,
  anon_sym_SLASH = 28,
  aux_sym_regex_string_content_token1 = 29,
  anon_sym_nocase = 30,
  anon_sym_ascii = 31,
  anon_sym_wide = 32,
  anon_sym_fullword = 33,
  anon_sym_base64 = 34,
  anon_sym_base64wide = 35,
  anon_sym_xor = 36,
  anon_sym_condition = 37,
  anon_sym_filesize = 38,
  anon_sym_entrypoint = 39,
  anon_sym_KB = 40,
  anon_sym_MB = 41,
  anon_sym_GB = 42,
  aux_sym_integer_literal_token1 = 43,
  anon_sym_POUND = 44,
  anon_sym_AT = 45,
  anon_sym_BANG = 46,
  anon_sym_for = 47,
  anon_sym_of = 48,
  anon_sym_in = 49,
  anon_sym_all = 50,
  anon_sym_any = 51,
  anon_sym_none = 52,
  anon_sym_them = 53,
  anon_sym_COMMA = 54,
  anon_sym_DOT_DOT = 55,
  anon_sym_not = 56,
  anon_sym_STAR = 57,
  anon_sym_BSLASH = 58,
  anon_sym_PERCENT = 59,
  anon_sym_PLUS = 60,
  anon_sym_EQ_EQ = 61,
  anon_sym_BANG_EQ = 62,
  anon_sym_LT = 63,
  anon_sym_LT_EQ = 64,
  anon_sym_GT = 65,
  anon_sym_GT_EQ = 66,
  anon_sym_contains = 67,
  anon_sym_matches = 68,
  anon_sym_icontains = 69,
  anon_sym_imatches = 70,
  anon_sym_startswith = 71,
  anon_sym_istartswith = 72,
  anon_sym_endswith = 73,
  anon_sym_iendswith = 74,
  anon_sym_and = 75,
  anon_sym_or = 76,
  anon_sym_true = 77,
  anon_sym_false = 78,
  sym_comment = 79,
  sym_source_file = 80,
  sym_import_statement = 81,
  sym_include_statement = 82,
  sym_rule_definition = 83,
  sym_tag_list = 84,
  sym_rule_body = 85,
  sym_meta_section = 86,
  sym_meta_definition = 87,
  sym_strings_section = 88,
  sym_string_definition = 89,
  sym_string_identifier = 90,
  sym_text_string = 91,
  sym_double_quoted_string = 92,
  sym_single_quoted_string = 93,
  sym_hex_string = 94,
  sym_hex_jump = 95,
  sym_hex_alternative = 96,
  sym_regex_string = 97,
  sym_regex_string_content = 98,
  sym_string_modifiers = 99,
  sym_condition_section = 100,
  sym__expression = 101,
  sym_filesize_literal = 102,
  sym_entrypoint_literal = 103,
  sym_size_unit = 104,
  sym_integer_literal = 105,
  sym_string_count = 106,
  sym_string_offset = 107,
  sym_string_length = 108,
  sym_for_expression = 109,
  sym_for_of_expression = 110,
  sym_of_expression = 111,
  sym_quantifier = 112,
  sym_string_set = 113,
  sym_range = 114,
  sym_unary_expression = 115,
  sym_binary_expression = 116,
  sym_parenthesized_expression = 117,
  sym_boolean_literal = 118,
  sym_string_literal = 119,
  aux_sym_source_file_repeat1 = 120,
  aux_sym_tag_list_repeat1 = 121,
  aux_sym_meta_section_repeat1 = 122,
  aux_sym_strings_section_repeat1 = 123,
  aux_sym_double_quoted_string_repeat1 = 124,
  aux_sym_single_quoted_string_repeat1 = 125,
  aux_sym_hex_string_repeat1 = 126,
  aux_sym_hex_alternative_repeat1 = 127,
  aux_sym_regex_string_content_repeat1 = 128,
  aux_sym_string_modifiers_repeat1 = 129,
  aux_sym_string_set_repeat1 = 130,
  alias_sym_tag = 131,
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_tag_list_token1] = aux_sym_tag_list_token1,
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
  [53] = 50,
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
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 94,
  [105] = 17,
  [106] = 4,
  [107] = 5,
  [108] = 6,
  [109] = 7,
  [110] = 93,
  [111] = 100,
  [112] = 96,
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
  [125] = 125,
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
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(26);
      if (lookahead == '\r') SKIP(0);
      if (lookahead == '!') ADVANCE(69);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '?') ADVANCE(54);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '|') ADVANCE(59);
      if (lookahead == '}') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 1:
      if (lookahead == '\r') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(85);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 2:
      if (lookahead == '\r') SKIP(2);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '}') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 3:
      if (lookahead == '\r') SKIP(3);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '?') ADVANCE(54);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '}') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == '\r') ADVANCE(43);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(43);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 5:
      if (lookahead == '\r') ADVANCE(36);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(36);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 6:
      if (lookahead == '\r') ADVANCE(62);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(62);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 7:
      if (lookahead == '\r') ADVANCE(30);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(7);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(86);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(71);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 14:
      if (lookahead == 'U') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(19);
      if (lookahead == 'x') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 24:
      if (eof) ADVANCE(26);
      if (lookahead == '\r') SKIP(24);
      if (lookahead == '!') ADVANCE(68);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '\'') ADVANCE(41);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '@') ADVANCE(67);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '}') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 25:
      if (eof) ADVANCE(26);
      if (lookahead == '\r') SKIP(25);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '%') ADVANCE(74);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(80);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == '}') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_tag_list_token1);
      if (lookahead == '\r') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\r') ADVANCE(36);
      if (lookahead == '/') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\r') ADVANCE(43);
      if (lookahead == '/') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '*') ADVANCE(46);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_hex_byte);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_hex_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_hex_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_hex_wildcard);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(86);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_regex_string_content_token1);
      if (lookahead == '\r') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_regex_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_integer_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_integer_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\r') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(85);
      if (lookahead != 0) ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(86);
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
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 25},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 24},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 25},
  [18] = {.lex_state = 25},
  [19] = {.lex_state = 25},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 25},
  [23] = {.lex_state = 25},
  [24] = {.lex_state = 25},
  [25] = {.lex_state = 25},
  [26] = {.lex_state = 25},
  [27] = {.lex_state = 25},
  [28] = {.lex_state = 25},
  [29] = {.lex_state = 25},
  [30] = {.lex_state = 25},
  [31] = {.lex_state = 25},
  [32] = {.lex_state = 25},
  [33] = {.lex_state = 25},
  [34] = {.lex_state = 25},
  [35] = {.lex_state = 25},
  [36] = {.lex_state = 25},
  [37] = {.lex_state = 25},
  [38] = {.lex_state = 25},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 25},
  [41] = {.lex_state = 25},
  [42] = {.lex_state = 25},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 25},
  [45] = {.lex_state = 25},
  [46] = {.lex_state = 25},
  [47] = {.lex_state = 25},
  [48] = {.lex_state = 24},
  [49] = {.lex_state = 24},
  [50] = {.lex_state = 24},
  [51] = {.lex_state = 24},
  [52] = {.lex_state = 24},
  [53] = {.lex_state = 24},
  [54] = {.lex_state = 24},
  [55] = {.lex_state = 24},
  [56] = {.lex_state = 24},
  [57] = {.lex_state = 24},
  [58] = {.lex_state = 24},
  [59] = {.lex_state = 24},
  [60] = {.lex_state = 24},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 24},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 24},
  [67] = {.lex_state = 24},
  [68] = {.lex_state = 24},
  [69] = {.lex_state = 24},
  [70] = {.lex_state = 24},
  [71] = {.lex_state = 24},
  [72] = {.lex_state = 24},
  [73] = {.lex_state = 24},
  [74] = {.lex_state = 24},
  [75] = {.lex_state = 24},
  [76] = {.lex_state = 24},
  [77] = {.lex_state = 24},
  [78] = {.lex_state = 24},
  [79] = {.lex_state = 24},
  [80] = {.lex_state = 24},
  [81] = {.lex_state = 24},
  [82] = {.lex_state = 24},
  [83] = {.lex_state = 24},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 24},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 24},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 24},
  [106] = {.lex_state = 24},
  [107] = {.lex_state = 24},
  [108] = {.lex_state = 24},
  [109] = {.lex_state = 24},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 24},
  [114] = {.lex_state = 24},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 24},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 24},
  [120] = {.lex_state = 24},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 24},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 24},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 24},
  [128] = {.lex_state = 24},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 24},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 24},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 24},
  [143] = {.lex_state = 24},
  [144] = {.lex_state = 24},
  [145] = {.lex_state = 24},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 24},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 24},
  [152] = {.lex_state = 24},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 24},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 24},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 24},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 24},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 24},
  [173] = {.lex_state = 24},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 24},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 24},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 24},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 24},
  [185] = {.lex_state = 3},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 24},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
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
  },
  [1] = {
    [sym_source_file] = STATE(183),
    [sym_import_statement] = STATE(60),
    [sym_include_statement] = STATE(60),
    [sym_rule_definition] = STATE(60),
    [aux_sym_source_file_repeat1] = STATE(60),
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
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
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
    STATE(26), 1,
      sym_integer_literal,
    STATE(152), 1,
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
  [82] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    ACTIONS(25), 1,
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
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
    ACTIONS(49), 1,
      sym_identifier,
    STATE(26), 1,
      sym_integer_literal,
    STATE(152), 1,
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
  [164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 3,
      anon_sym_base64,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 35,
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
  [210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 3,
      anon_sym_base64,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(55), 35,
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
  [256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 3,
      anon_sym_base64,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 35,
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
  [302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 3,
      anon_sym_base64,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(63), 35,
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
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
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
    STATE(26), 1,
      sym_integer_literal,
    STATE(152), 1,
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
    STATE(39), 15,
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
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
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
    STATE(26), 1,
      sym_integer_literal,
    STATE(152), 1,
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
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
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
    STATE(26), 1,
      sym_integer_literal,
    STATE(152), 1,
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
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
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
    STATE(26), 1,
      sym_integer_literal,
    STATE(152), 1,
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
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
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
    STATE(26), 1,
      sym_integer_literal,
    STATE(152), 1,
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
    STATE(37), 15,
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
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
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
    STATE(26), 1,
      sym_integer_literal,
    STATE(152), 1,
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
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
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
    STATE(26), 1,
      sym_integer_literal,
    STATE(152), 1,
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
    STATE(38), 15,
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
      anon_sym_DASH,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
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
    STATE(26), 1,
      sym_integer_literal,
    STATE(152), 1,
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
  [1004] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(19), 1,
      sym_size_unit,
    ACTIONS(87), 3,
      anon_sym_KB,
      anon_sym_MB,
      anon_sym_GB,
    ACTIONS(85), 13,
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
  [1086] = 3,
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
  [1123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 13,
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
  [1231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 11,
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
    ACTIONS(111), 15,
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
  [1265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 23,
      anon_sym_RBRACE,
      anon_sym_COLON,
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
  [1298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 23,
      anon_sym_RBRACE,
      anon_sym_COLON,
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
  [1331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 23,
      anon_sym_RBRACE,
      anon_sym_COLON,
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
  [1364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_of,
    ACTIONS(131), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 21,
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
  [1432] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 21,
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
  [1466] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(145), 18,
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
  [1499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 21,
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
  [1530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 21,
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
  [1561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 21,
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
  [1592] = 3,
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
  [1623] = 3,
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
  [1654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 2,
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
  [1685] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(147), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(145), 16,
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
  [1720] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(175), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(145), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(173), 12,
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
  [1757] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_and,
    ACTIONS(171), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(175), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
    ACTIONS(147), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(173), 12,
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
  [1796] = 3,
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
  [1827] = 3,
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
  [1858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 21,
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
  [1889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(191), 21,
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
  [1920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(195), 21,
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
  [1951] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_and,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    ACTIONS(201), 1,
      anon_sym_or,
    ACTIONS(171), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(175), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(173), 12,
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
    ACTIONS(177), 1,
      anon_sym_and,
    ACTIONS(201), 1,
      anon_sym_or,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    ACTIONS(171), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(175), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(173), 12,
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
    ACTIONS(177), 1,
      anon_sym_and,
    ACTIONS(201), 1,
      anon_sym_or,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    ACTIONS(171), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(175), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(173), 12,
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
    ACTIONS(177), 1,
      anon_sym_and,
    ACTIONS(201), 1,
      anon_sym_or,
    ACTIONS(207), 1,
      anon_sym_RPAREN,
    ACTIONS(171), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(175), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(173), 12,
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
    STATE(53), 1,
      aux_sym_string_modifiers_repeat1,
    STATE(57), 1,
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
    STATE(50), 1,
      aux_sym_string_modifiers_repeat1,
    STATE(122), 1,
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
  [2167] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_base64,
    ACTIONS(215), 1,
      anon_sym_base64wide,
    STATE(51), 1,
      aux_sym_string_modifiers_repeat1,
    ACTIONS(221), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_condition,
    ACTIONS(223), 5,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_xor,
  [2192] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_base64,
    ACTIONS(233), 1,
      anon_sym_base64wide,
    STATE(51), 1,
      aux_sym_string_modifiers_repeat1,
    ACTIONS(225), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_condition,
    ACTIONS(227), 5,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_xor,
  [2217] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_LPAREN,
    ACTIONS(240), 1,
      anon_sym_base64,
    ACTIONS(236), 9,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
  [2238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_base64,
    STATE(51), 1,
      aux_sym_string_modifiers_repeat1,
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
  [2259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_base64,
    ACTIONS(244), 9,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
  [2277] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    ACTIONS(250), 1,
      anon_sym_import,
    ACTIONS(253), 1,
      anon_sym_include,
    ACTIONS(256), 1,
      anon_sym_private,
    ACTIONS(259), 1,
      anon_sym_global,
    ACTIONS(262), 1,
      anon_sym_rule,
    STATE(55), 4,
      sym_import_statement,
      sym_include_statement,
      sym_rule_definition,
      aux_sym_source_file_repeat1,
  [2305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_base64,
    ACTIONS(265), 9,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
  [2323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_base64,
    ACTIONS(269), 9,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
  [2341] = 3,
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
  [2359] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(277), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      anon_sym_SQUOTE,
    ACTIONS(281), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(105), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(102), 3,
      sym_integer_literal,
      sym_boolean_literal,
      sym_string_literal,
  [2385] = 8,
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
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    STATE(55), 4,
      sym_import_statement,
      sym_include_statement,
      sym_rule_definition,
      aux_sym_source_file_repeat1,
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
    STATE(58), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(49), 3,
      sym_text_string,
      sym_hex_string,
      sym_regex_string,
  [2438] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(291), 2,
      sym_hex_byte,
      sym_hex_wildcard,
    STATE(63), 3,
      sym_hex_jump,
      sym_hex_alternative,
      aux_sym_hex_string_repeat1,
  [2460] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
    ACTIONS(302), 1,
      anon_sym_LBRACK,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(299), 2,
      sym_hex_byte,
      sym_hex_wildcard,
    STATE(63), 3,
      sym_hex_jump,
      sym_hex_alternative,
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
    STATE(86), 1,
      sym_meta_section,
    STATE(117), 1,
      sym_strings_section,
    STATE(164), 1,
      sym_rule_body,
    STATE(178), 1,
      sym_condition_section,
  [2507] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LBRACK,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(314), 2,
      sym_hex_byte,
      sym_hex_wildcard,
    STATE(62), 3,
      sym_hex_jump,
      sym_hex_alternative,
      aux_sym_hex_string_repeat1,
  [2526] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_meta,
    ACTIONS(310), 1,
      anon_sym_strings,
    ACTIONS(312), 1,
      anon_sym_condition,
    STATE(86), 1,
      sym_meta_section,
    STATE(117), 1,
      sym_strings_section,
    STATE(178), 1,
      sym_condition_section,
    STATE(188), 1,
      sym_rule_body,
  [2551] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_meta,
    ACTIONS(310), 1,
      anon_sym_strings,
    ACTIONS(312), 1,
      anon_sym_condition,
    STATE(86), 1,
      sym_meta_section,
    STATE(117), 1,
      sym_strings_section,
    STATE(153), 1,
      sym_rule_body,
    STATE(178), 1,
      sym_condition_section,
  [2576] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_meta,
    ACTIONS(310), 1,
      anon_sym_strings,
    ACTIONS(312), 1,
      anon_sym_condition,
    STATE(86), 1,
      sym_meta_section,
    STATE(117), 1,
      sym_strings_section,
    STATE(167), 1,
      sym_rule_body,
    STATE(178), 1,
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
    STATE(86), 1,
      sym_meta_section,
    STATE(117), 1,
      sym_strings_section,
    STATE(159), 1,
      sym_rule_body,
    STATE(178), 1,
      sym_condition_section,
  [2626] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_meta,
    ACTIONS(310), 1,
      anon_sym_strings,
    ACTIONS(312), 1,
      anon_sym_condition,
    STATE(86), 1,
      sym_meta_section,
    STATE(117), 1,
      sym_strings_section,
    STATE(162), 1,
      sym_rule_body,
    STATE(178), 1,
      sym_condition_section,
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
  [2663] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    STATE(177), 1,
      sym_integer_literal,
    STATE(184), 1,
      sym_quantifier,
    ACTIONS(318), 3,
      anon_sym_all,
      anon_sym_any,
      anon_sym_none,
  [2681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2705] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_DOLLAR,
    STATE(173), 1,
      sym_string_identifier,
    ACTIONS(324), 2,
      anon_sym_RBRACE,
      anon_sym_condition,
    STATE(75), 2,
      sym_string_definition,
      aux_sym_strings_section_repeat1,
  [2723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2735] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_identifier,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    ACTIONS(336), 2,
      anon_sym_strings,
      anon_sym_condition,
    STATE(77), 2,
      sym_meta_definition,
      aux_sym_meta_section_repeat1,
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
  [2765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2789] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_identifier,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    ACTIONS(348), 2,
      anon_sym_strings,
      anon_sym_condition,
    STATE(77), 2,
      sym_meta_definition,
      aux_sym_meta_section_repeat1,
  [2807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2819] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    STATE(173), 1,
      sym_string_identifier,
    ACTIONS(352), 2,
      anon_sym_RBRACE,
      anon_sym_condition,
    STATE(75), 2,
      sym_string_definition,
      aux_sym_strings_section_repeat1,
  [2837] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(71), 1,
      sym_string_literal,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2854] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(79), 1,
      sym_string_literal,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2871] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_strings,
    ACTIONS(312), 1,
      anon_sym_condition,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    STATE(120), 1,
      sym_strings_section,
    STATE(191), 1,
      sym_condition_section,
  [2890] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_SQUOTE,
    STATE(160), 1,
      sym_string_literal,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 5,
      anon_sym_RBRACE,
      sym_hex_byte,
      sym_hex_wildcard,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [2918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 5,
      anon_sym_RBRACE,
      sym_hex_byte,
      sym_hex_wildcard,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [2929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 5,
      anon_sym_RBRACE,
      sym_hex_byte,
      sym_hex_wildcard,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [2940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 5,
      anon_sym_RBRACE,
      sym_hex_byte,
      sym_hex_wildcard,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [2951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 5,
      anon_sym_RBRACE,
      sym_hex_byte,
      sym_hex_wildcard,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
  [2962] = 4,
    ACTIONS(366), 1,
      anon_sym_SQUOTE,
    ACTIONS(370), 1,
      sym_comment,
    STATE(99), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(368), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [2976] = 4,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      aux_sym_double_quoted_string_repeat1,
    ACTIONS(374), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
  [2990] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    STATE(173), 1,
      sym_string_identifier,
    STATE(83), 2,
      sym_string_definition,
      aux_sym_strings_section_repeat1,
  [3004] = 4,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_SQUOTE,
    STATE(110), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(378), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [3018] = 4,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_SLASH,
    STATE(98), 1,
      aux_sym_regex_string_content_repeat1,
    ACTIONS(380), 2,
      sym_escape_sequence,
      aux_sym_regex_string_content_token1,
  [3032] = 4,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_SLASH,
    STATE(98), 1,
      aux_sym_regex_string_content_repeat1,
    ACTIONS(384), 2,
      sym_escape_sequence,
      aux_sym_regex_string_content_token1,
  [3046] = 4,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_SQUOTE,
    STATE(99), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(391), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [3060] = 4,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_DQUOTE,
    STATE(104), 1,
      aux_sym_double_quoted_string_repeat1,
    ACTIONS(396), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
  [3074] = 4,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      aux_sym_double_quoted_string_repeat1,
    ACTIONS(400), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
  [3088] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_RBRACE,
    ACTIONS(403), 3,
      anon_sym_strings,
      anon_sym_condition,
      sym_identifier,
  [3100] = 4,
    ACTIONS(370), 1,
      sym_comment,
    STATE(97), 1,
      aux_sym_regex_string_content_repeat1,
    STATE(187), 1,
      sym_regex_string_content,
    ACTIONS(407), 2,
      sym_escape_sequence,
      aux_sym_regex_string_content_token1,
  [3114] = 4,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      aux_sym_double_quoted_string_repeat1,
    ACTIONS(374), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
  [3128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 3,
      anon_sym_strings,
      anon_sym_condition,
      sym_identifier,
  [3140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(53), 3,
      anon_sym_strings,
      anon_sym_condition,
      sym_identifier,
  [3152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    ACTIONS(57), 3,
      anon_sym_strings,
      anon_sym_condition,
      sym_identifier,
  [3164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(61), 3,
      anon_sym_strings,
      anon_sym_condition,
      sym_identifier,
  [3176] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 3,
      anon_sym_strings,
      anon_sym_condition,
      sym_identifier,
  [3188] = 4,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_SQUOTE,
    STATE(99), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(368), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [3202] = 4,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      aux_sym_double_quoted_string_repeat1,
    ACTIONS(415), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
  [3216] = 4,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
    STATE(93), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(419), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [3230] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(421), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      sym_integer_literal,
  [3243] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_them,
    STATE(134), 1,
      sym_string_set,
  [3256] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
    ACTIONS(429), 1,
      anon_sym_COLON,
    STATE(158), 1,
      sym_tag_list,
  [3269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_PIPE,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_hex_alternative_repeat1,
  [3282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_condition,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    STATE(191), 1,
      sym_condition_section,
  [3295] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym_string_set_repeat1,
  [3308] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_LPAREN,
    ACTIONS(425), 1,
      anon_sym_them,
    STATE(40), 1,
      sym_string_set,
  [3321] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_condition,
    ACTIONS(440), 1,
      anon_sym_RBRACE,
    STATE(189), 1,
      sym_condition_section,
  [3334] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_PIPE,
    ACTIONS(445), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_hex_alternative_repeat1,
  [3347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 3,
      anon_sym_RBRACE,
      anon_sym_DOLLAR,
      anon_sym_condition,
  [3356] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      aux_sym_string_set_repeat1,
  [3369] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(453), 1,
      anon_sym_RBRACK,
    STATE(154), 1,
      sym_integer_literal,
  [3382] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_PIPE,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_hex_alternative_repeat1,
  [3395] = 4,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(457), 1,
      sym_identifier,
    ACTIONS(460), 1,
      aux_sym_tag_list_token1,
    STATE(126), 1,
      aux_sym_tag_list_repeat1,
  [3408] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(463), 1,
      anon_sym_DASH,
    STATE(171), 1,
      sym_integer_literal,
  [3421] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      sym_identifier,
    STATE(81), 2,
      sym_meta_definition,
      aux_sym_meta_section_repeat1,
  [3432] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COLON,
    ACTIONS(467), 1,
      anon_sym_LBRACE,
    STATE(169), 1,
      sym_tag_list,
  [3445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COLON,
    ACTIONS(469), 1,
      anon_sym_LBRACE,
    STATE(166), 1,
      sym_tag_list,
  [3458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_string_set_repeat1,
  [3471] = 4,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_identifier,
    ACTIONS(475), 1,
      aux_sym_tag_list_token1,
    STATE(133), 1,
      aux_sym_tag_list_repeat1,
  [3484] = 4,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_identifier,
    ACTIONS(477), 1,
      aux_sym_tag_list_token1,
    STATE(126), 1,
      aux_sym_tag_list_repeat1,
  [3497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_COLON,
    ACTIONS(481), 1,
      anon_sym_in,
  [3507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    STATE(28), 1,
      sym_string_identifier,
  [3517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    STATE(27), 1,
      sym_string_identifier,
  [3527] = 3,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_identifier,
    ACTIONS(485), 1,
      aux_sym_tag_list_token1,
  [3537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym_identifier,
    ACTIONS(489), 1,
      anon_sym_LBRACE,
  [3547] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(491), 1,
      anon_sym_LPAREN,
    STATE(163), 1,
      sym_range,
  [3557] = 3,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(493), 1,
      sym_identifier,
    ACTIONS(495), 1,
      aux_sym_tag_list_token1,
  [3567] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    STATE(146), 1,
      sym_string_identifier,
  [3577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_global,
    ACTIONS(499), 1,
      anon_sym_rule,
  [3587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    STATE(192), 1,
      sym_integer_literal,
  [3597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    STATE(193), 1,
      sym_integer_literal,
  [3607] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    STATE(174), 1,
      sym_integer_literal,
  [3617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 2,
      anon_sym_PIPE,
      anon_sym_RPAREN,
  [3633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    STATE(123), 1,
      sym_string_identifier,
  [3643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    STATE(180), 1,
      sym_integer_literal,
  [3653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_DOLLAR,
    STATE(31), 1,
      sym_string_identifier,
  [3663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_rule,
  [3670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_of,
  [3677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
  [3684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_RBRACK,
  [3691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_of,
  [3698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(509), 1,
      sym_hex_byte,
  [3705] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      sym_identifier,
  [3712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(511), 1,
      anon_sym_LBRACE,
  [3719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
  [3726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
  [3733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_EQ,
  [3740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_RBRACE,
  [3747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_COLON,
  [3754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_RBRACE,
  [3761] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_COLON,
  [3768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_LBRACE,
  [3775] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
  [3782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      anon_sym_RBRACK,
  [3789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
  [3796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(535), 1,
      sym_identifier,
  [3803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(537), 1,
      anon_sym_DASH,
  [3810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_rule,
  [3817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_EQ,
  [3824] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_DOT_DOT,
  [3831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
  [3838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_LPAREN,
  [3845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_of,
  [3852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
  [3859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      sym_identifier,
  [3866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
  [3873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 1,
      sym_identifier,
  [3880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_COLON,
  [3887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 1,
      ts_builtin_sym_end,
  [3894] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_of,
  [3901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      sym_hex_byte,
  [3908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_COLON,
  [3915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_SLASH,
  [3922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RBRACE,
  [3929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_RBRACE,
  [3936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_of,
  [3943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_RBRACE,
  [3950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_RBRACK,
  [3957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_RBRACK,
  [3964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(575), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 82,
  [SMALL_STATE(4)] = 164,
  [SMALL_STATE(5)] = 210,
  [SMALL_STATE(6)] = 256,
  [SMALL_STATE(7)] = 302,
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
  [SMALL_STATE(30)] = 1499,
  [SMALL_STATE(31)] = 1530,
  [SMALL_STATE(32)] = 1561,
  [SMALL_STATE(33)] = 1592,
  [SMALL_STATE(34)] = 1623,
  [SMALL_STATE(35)] = 1654,
  [SMALL_STATE(36)] = 1685,
  [SMALL_STATE(37)] = 1720,
  [SMALL_STATE(38)] = 1757,
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
  [SMALL_STATE(51)] = 2192,
  [SMALL_STATE(52)] = 2217,
  [SMALL_STATE(53)] = 2238,
  [SMALL_STATE(54)] = 2259,
  [SMALL_STATE(55)] = 2277,
  [SMALL_STATE(56)] = 2305,
  [SMALL_STATE(57)] = 2323,
  [SMALL_STATE(58)] = 2341,
  [SMALL_STATE(59)] = 2359,
  [SMALL_STATE(60)] = 2385,
  [SMALL_STATE(61)] = 2413,
  [SMALL_STATE(62)] = 2438,
  [SMALL_STATE(63)] = 2460,
  [SMALL_STATE(64)] = 2482,
  [SMALL_STATE(65)] = 2507,
  [SMALL_STATE(66)] = 2526,
  [SMALL_STATE(67)] = 2551,
  [SMALL_STATE(68)] = 2576,
  [SMALL_STATE(69)] = 2601,
  [SMALL_STATE(70)] = 2626,
  [SMALL_STATE(71)] = 2651,
  [SMALL_STATE(72)] = 2663,
  [SMALL_STATE(73)] = 2681,
  [SMALL_STATE(74)] = 2693,
  [SMALL_STATE(75)] = 2705,
  [SMALL_STATE(76)] = 2723,
  [SMALL_STATE(77)] = 2735,
  [SMALL_STATE(78)] = 2753,
  [SMALL_STATE(79)] = 2765,
  [SMALL_STATE(80)] = 2777,
  [SMALL_STATE(81)] = 2789,
  [SMALL_STATE(82)] = 2807,
  [SMALL_STATE(83)] = 2819,
  [SMALL_STATE(84)] = 2837,
  [SMALL_STATE(85)] = 2854,
  [SMALL_STATE(86)] = 2871,
  [SMALL_STATE(87)] = 2890,
  [SMALL_STATE(88)] = 2907,
  [SMALL_STATE(89)] = 2918,
  [SMALL_STATE(90)] = 2929,
  [SMALL_STATE(91)] = 2940,
  [SMALL_STATE(92)] = 2951,
  [SMALL_STATE(93)] = 2962,
  [SMALL_STATE(94)] = 2976,
  [SMALL_STATE(95)] = 2990,
  [SMALL_STATE(96)] = 3004,
  [SMALL_STATE(97)] = 3018,
  [SMALL_STATE(98)] = 3032,
  [SMALL_STATE(99)] = 3046,
  [SMALL_STATE(100)] = 3060,
  [SMALL_STATE(101)] = 3074,
  [SMALL_STATE(102)] = 3088,
  [SMALL_STATE(103)] = 3100,
  [SMALL_STATE(104)] = 3114,
  [SMALL_STATE(105)] = 3128,
  [SMALL_STATE(106)] = 3140,
  [SMALL_STATE(107)] = 3152,
  [SMALL_STATE(108)] = 3164,
  [SMALL_STATE(109)] = 3176,
  [SMALL_STATE(110)] = 3188,
  [SMALL_STATE(111)] = 3202,
  [SMALL_STATE(112)] = 3216,
  [SMALL_STATE(113)] = 3230,
  [SMALL_STATE(114)] = 3243,
  [SMALL_STATE(115)] = 3256,
  [SMALL_STATE(116)] = 3269,
  [SMALL_STATE(117)] = 3282,
  [SMALL_STATE(118)] = 3295,
  [SMALL_STATE(119)] = 3308,
  [SMALL_STATE(120)] = 3321,
  [SMALL_STATE(121)] = 3334,
  [SMALL_STATE(122)] = 3347,
  [SMALL_STATE(123)] = 3356,
  [SMALL_STATE(124)] = 3369,
  [SMALL_STATE(125)] = 3382,
  [SMALL_STATE(126)] = 3395,
  [SMALL_STATE(127)] = 3408,
  [SMALL_STATE(128)] = 3421,
  [SMALL_STATE(129)] = 3432,
  [SMALL_STATE(130)] = 3445,
  [SMALL_STATE(131)] = 3458,
  [SMALL_STATE(132)] = 3471,
  [SMALL_STATE(133)] = 3484,
  [SMALL_STATE(134)] = 3497,
  [SMALL_STATE(135)] = 3507,
  [SMALL_STATE(136)] = 3517,
  [SMALL_STATE(137)] = 3527,
  [SMALL_STATE(138)] = 3537,
  [SMALL_STATE(139)] = 3547,
  [SMALL_STATE(140)] = 3557,
  [SMALL_STATE(141)] = 3567,
  [SMALL_STATE(142)] = 3577,
  [SMALL_STATE(143)] = 3587,
  [SMALL_STATE(144)] = 3597,
  [SMALL_STATE(145)] = 3607,
  [SMALL_STATE(146)] = 3617,
  [SMALL_STATE(147)] = 3625,
  [SMALL_STATE(148)] = 3633,
  [SMALL_STATE(149)] = 3643,
  [SMALL_STATE(150)] = 3653,
  [SMALL_STATE(151)] = 3663,
  [SMALL_STATE(152)] = 3670,
  [SMALL_STATE(153)] = 3677,
  [SMALL_STATE(154)] = 3684,
  [SMALL_STATE(155)] = 3691,
  [SMALL_STATE(156)] = 3698,
  [SMALL_STATE(157)] = 3705,
  [SMALL_STATE(158)] = 3712,
  [SMALL_STATE(159)] = 3719,
  [SMALL_STATE(160)] = 3726,
  [SMALL_STATE(161)] = 3733,
  [SMALL_STATE(162)] = 3740,
  [SMALL_STATE(163)] = 3747,
  [SMALL_STATE(164)] = 3754,
  [SMALL_STATE(165)] = 3761,
  [SMALL_STATE(166)] = 3768,
  [SMALL_STATE(167)] = 3775,
  [SMALL_STATE(168)] = 3782,
  [SMALL_STATE(169)] = 3789,
  [SMALL_STATE(170)] = 3796,
  [SMALL_STATE(171)] = 3803,
  [SMALL_STATE(172)] = 3810,
  [SMALL_STATE(173)] = 3817,
  [SMALL_STATE(174)] = 3824,
  [SMALL_STATE(175)] = 3831,
  [SMALL_STATE(176)] = 3838,
  [SMALL_STATE(177)] = 3845,
  [SMALL_STATE(178)] = 3852,
  [SMALL_STATE(179)] = 3859,
  [SMALL_STATE(180)] = 3866,
  [SMALL_STATE(181)] = 3873,
  [SMALL_STATE(182)] = 3880,
  [SMALL_STATE(183)] = 3887,
  [SMALL_STATE(184)] = 3894,
  [SMALL_STATE(185)] = 3901,
  [SMALL_STATE(186)] = 3908,
  [SMALL_STATE(187)] = 3915,
  [SMALL_STATE(188)] = 3922,
  [SMALL_STATE(189)] = 3929,
  [SMALL_STATE(190)] = 3936,
  [SMALL_STATE(191)] = 3943,
  [SMALL_STATE(192)] = 3950,
  [SMALL_STATE(193)] = 3957,
  [SMALL_STATE(194)] = 3964,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_size_unit, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_size_unit, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_identifier, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_identifier, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_identifier, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_identifier, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_set, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_set, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_set, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_set, 1, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_set, 4, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_set, 4, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_offset, 2, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_offset, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_length, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_length, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 12),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 12),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_of_expression, 10, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_of_expression, 10, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_count, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_count, 2, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filesize_literal, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filesize_literal, 1, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entrypoint_literal, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_entrypoint_literal, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 8),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 8),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_of_expression, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_of_expression, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_offset, 5, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_offset, 5, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_length, 5, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_length, 5, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expression, 8, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expression, 8, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_section, 3, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_string, 3, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_definition, 3, 0, 11),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_modifiers, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_modifiers_repeat1, 2, 0, 0),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_modifiers_repeat1, 1, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_modifiers_repeat1, 1, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_modifiers, 1, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_string, 3, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_string, 3, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [253] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [256] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(142),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(172),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(179),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_modifiers_repeat1, 4, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_modifiers_repeat1, 4, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_string, 4, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_string, 4, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_string, 1, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_string, 1, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hex_string_repeat1, 2, 0, 0),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_string_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_string_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_string_repeat1, 2, 0, 0), SHIFT_REPEAT(185),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2, 0, 0),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 7, 0, 6),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 6, 0, 5),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_strings_section_repeat1, 2, 0, 0),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_strings_section_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 7, 0, 7),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_meta_section_repeat1, 2, 0, 0), SHIFT_REPEAT(161),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_meta_section_repeat1, 2, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_meta_section_repeat1, 2, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 8, 0, 9),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2, 0, 0),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 5, 0, 2),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_section, 3, 0, 0),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_section, 3, 0, 0),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 6, 0, 4),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strings_section, 3, 0, 0),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 1, 0, 0),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_jump, 3, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_alternative, 3, 0, 0),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_jump, 4, 0, 0),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_alternative, 4, 0, 0),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_jump, 5, 0, 0),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_string_content, 1, 0, 0),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_regex_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_string_content_repeat1, 2, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_definition, 3, 0, 10),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_definition, 3, 0, 10),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_set_repeat1, 2, 0, 0),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_set_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 2, 0, 0),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_alternative_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hex_alternative_repeat1, 2, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_definition, 4, 0, 11),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_list_repeat1, 2, 0, 0), SHIFT_REPEAT(140),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_list_repeat1, 2, 0, 0), SHIFT_REPEAT(157),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_list_repeat1, 2, 0, 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_list_repeat1, 2, 0, 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_list, 3, 0, 0),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_list_repeat1, 1, 0, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_list_repeat1, 1, 0, 1),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 1, 0, 0),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 3, 0, 0),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 2, 0, 0),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
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
