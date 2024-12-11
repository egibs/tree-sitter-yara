#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 178
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 147
#define ALIAS_COUNT 1
#define TOKEN_COUNT 79
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_EQ = 2,
  anon_sym_COLON = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_DOLLAR = 10,
  anon_sym_POUND = 11,
  anon_sym_AT = 12,
  anon_sym_DOT_DOT = 13,
  anon_sym_PIPE = 14,
  anon_sym_COMMA = 15,
  anon_sym_BANG = 16,
  anon_sym_SLASH = 17,
  anon_sym_DQUOTE = 18,
  anon_sym_SQUOTE = 19,
  anon_sym_import = 20,
  anon_sym_include = 21,
  anon_sym_private = 22,
  anon_sym_global = 23,
  anon_sym_rule = 24,
  anon_sym_meta = 25,
  anon_sym_strings = 26,
  aux_sym_double_quoted_string_token1 = 27,
  aux_sym_single_quoted_string_token1 = 28,
  sym_escape_sequence = 29,
  sym_hex_byte = 30,
  sym_hex_wildcard = 31,
  aux_sym_regex_string_content_token1 = 32,
  anon_sym_nocase = 33,
  anon_sym_ascii = 34,
  anon_sym_wide = 35,
  anon_sym_fullword = 36,
  anon_sym_base64 = 37,
  anon_sym_base64wide = 38,
  anon_sym_xor = 39,
  anon_sym_condition = 40,
  anon_sym_STAR = 41,
  sym_filesize_keyword = 42,
  sym_entrypoint_keyword = 43,
  anon_sym_KB = 44,
  anon_sym_MB = 45,
  anon_sym_GB = 46,
  aux_sym_integer_literal_token1 = 47,
  anon_sym_for = 48,
  anon_sym_of = 49,
  anon_sym_in = 50,
  anon_sym_all = 51,
  anon_sym_any = 52,
  anon_sym_none = 53,
  anon_sym_them = 54,
  anon_sym_not = 55,
  anon_sym_DASH = 56,
  anon_sym_BSLASH = 57,
  anon_sym_PERCENT = 58,
  anon_sym_PLUS = 59,
  anon_sym_EQ_EQ = 60,
  anon_sym_BANG_EQ = 61,
  anon_sym_LT = 62,
  anon_sym_LT_EQ = 63,
  anon_sym_GT = 64,
  anon_sym_GT_EQ = 65,
  anon_sym_contains = 66,
  anon_sym_matches = 67,
  anon_sym_icontains = 68,
  anon_sym_imatches = 69,
  anon_sym_startswith = 70,
  anon_sym_istartswith = 71,
  anon_sym_endswith = 72,
  anon_sym_iendswith = 73,
  anon_sym_and = 74,
  anon_sym_or = 75,
  anon_sym_true = 76,
  anon_sym_false = 77,
  sym_comment = 78,
  sym_source_file = 79,
  sym__equal = 80,
  sym__colon = 81,
  sym__lbrace = 82,
  sym__rbrace = 83,
  sym__lbrack = 84,
  sym__rbrack = 85,
  sym__lparen = 86,
  sym__rparen = 87,
  sym__dollar = 88,
  sym__hash = 89,
  sym__at = 90,
  sym__range = 91,
  sym__pipe = 92,
  sym__comma = 93,
  sym__bang = 94,
  sym__slash = 95,
  sym__quote = 96,
  sym__squote = 97,
  sym_import_statement = 98,
  sym_include_statement = 99,
  sym_rule_definition = 100,
  sym_tag_list = 101,
  sym_rule_body = 102,
  sym_meta_section = 103,
  sym_meta_definition = 104,
  sym_strings_section = 105,
  sym_string_definition = 106,
  sym_string_identifier = 107,
  sym_text_string = 108,
  sym_double_quoted_string = 109,
  sym_single_quoted_string = 110,
  sym_hex_string = 111,
  sym_hex_jump = 112,
  sym_hex_alternative = 113,
  sym_regex_string = 114,
  sym_regex_string_content = 115,
  sym_string_modifiers = 116,
  sym_condition_section = 117,
  sym_string_reference = 118,
  sym__expression = 119,
  sym_size_unit = 120,
  sym_integer_literal = 121,
  sym_string_count = 122,
  sym_string_offset = 123,
  sym_string_length = 124,
  sym_for_expression = 125,
  sym_for_of_expression = 126,
  sym_of_expression = 127,
  sym_quantifier = 128,
  sym_string_set = 129,
  sym_range = 130,
  sym_unary_expression = 131,
  sym_binary_expression = 132,
  sym_parenthesized_expression = 133,
  sym_boolean_literal = 134,
  sym_string_literal = 135,
  aux_sym_source_file_repeat1 = 136,
  aux_sym_tag_list_repeat1 = 137,
  aux_sym_meta_section_repeat1 = 138,
  aux_sym_strings_section_repeat1 = 139,
  aux_sym_double_quoted_string_repeat1 = 140,
  aux_sym_single_quoted_string_repeat1 = 141,
  aux_sym_hex_string_repeat1 = 142,
  aux_sym_hex_alternative_repeat1 = 143,
  aux_sym_regex_string_content_repeat1 = 144,
  aux_sym_string_modifiers_repeat1 = 145,
  aux_sym_string_set_repeat1 = 146,
  alias_sym_tag = 147,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_POUND] = "#",
  [anon_sym_AT] = "@",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_PIPE] = "|",
  [anon_sym_COMMA] = ",",
  [anon_sym_BANG] = "!",
  [anon_sym_SLASH] = "/",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_import] = "import",
  [anon_sym_include] = "include",
  [anon_sym_private] = "private",
  [anon_sym_global] = "global",
  [anon_sym_rule] = "rule",
  [anon_sym_meta] = "meta",
  [anon_sym_strings] = "strings",
  [aux_sym_double_quoted_string_token1] = "double_quoted_string_token1",
  [aux_sym_single_quoted_string_token1] = "single_quoted_string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_hex_byte] = "hex_byte",
  [sym_hex_wildcard] = "hex_wildcard",
  [aux_sym_regex_string_content_token1] = "regex_string_content_token1",
  [anon_sym_nocase] = "nocase",
  [anon_sym_ascii] = "ascii",
  [anon_sym_wide] = "wide",
  [anon_sym_fullword] = "fullword",
  [anon_sym_base64] = "base64",
  [anon_sym_base64wide] = "base64wide",
  [anon_sym_xor] = "xor",
  [anon_sym_condition] = "condition",
  [anon_sym_STAR] = "*",
  [sym_filesize_keyword] = "filesize_keyword",
  [sym_entrypoint_keyword] = "entrypoint_keyword",
  [anon_sym_KB] = "KB",
  [anon_sym_MB] = "MB",
  [anon_sym_GB] = "GB",
  [aux_sym_integer_literal_token1] = "integer_literal_token1",
  [anon_sym_for] = "for",
  [anon_sym_of] = "of",
  [anon_sym_in] = "in",
  [anon_sym_all] = "all",
  [anon_sym_any] = "any",
  [anon_sym_none] = "none",
  [anon_sym_them] = "them",
  [anon_sym_not] = "not",
  [anon_sym_DASH] = "-",
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
  [sym__equal] = "_equal",
  [sym__colon] = "_colon",
  [sym__lbrace] = "_lbrace",
  [sym__rbrace] = "_rbrace",
  [sym__lbrack] = "_lbrack",
  [sym__rbrack] = "_rbrack",
  [sym__lparen] = "_lparen",
  [sym__rparen] = "_rparen",
  [sym__dollar] = "_dollar",
  [sym__hash] = "_hash",
  [sym__at] = "_at",
  [sym__range] = "_range",
  [sym__pipe] = "_pipe",
  [sym__comma] = "_comma",
  [sym__bang] = "_bang",
  [sym__slash] = "_slash",
  [sym__quote] = "_quote",
  [sym__squote] = "_squote",
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
  [sym_string_reference] = "string_reference",
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_private] = anon_sym_private,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_rule] = anon_sym_rule,
  [anon_sym_meta] = anon_sym_meta,
  [anon_sym_strings] = anon_sym_strings,
  [aux_sym_double_quoted_string_token1] = aux_sym_double_quoted_string_token1,
  [aux_sym_single_quoted_string_token1] = aux_sym_single_quoted_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_hex_byte] = sym_hex_byte,
  [sym_hex_wildcard] = sym_hex_wildcard,
  [aux_sym_regex_string_content_token1] = aux_sym_regex_string_content_token1,
  [anon_sym_nocase] = anon_sym_nocase,
  [anon_sym_ascii] = anon_sym_ascii,
  [anon_sym_wide] = anon_sym_wide,
  [anon_sym_fullword] = anon_sym_fullword,
  [anon_sym_base64] = anon_sym_base64,
  [anon_sym_base64wide] = anon_sym_base64wide,
  [anon_sym_xor] = anon_sym_xor,
  [anon_sym_condition] = anon_sym_condition,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_filesize_keyword] = sym_filesize_keyword,
  [sym_entrypoint_keyword] = sym_entrypoint_keyword,
  [anon_sym_KB] = anon_sym_KB,
  [anon_sym_MB] = anon_sym_MB,
  [anon_sym_GB] = anon_sym_GB,
  [aux_sym_integer_literal_token1] = aux_sym_integer_literal_token1,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_all] = anon_sym_all,
  [anon_sym_any] = anon_sym_any,
  [anon_sym_none] = anon_sym_none,
  [anon_sym_them] = anon_sym_them,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_DASH] = anon_sym_DASH,
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
  [sym__equal] = sym__equal,
  [sym__colon] = sym__colon,
  [sym__lbrace] = sym__lbrace,
  [sym__rbrace] = sym__rbrace,
  [sym__lbrack] = sym__lbrack,
  [sym__rbrack] = sym__rbrack,
  [sym__lparen] = sym__lparen,
  [sym__rparen] = sym__rparen,
  [sym__dollar] = sym__dollar,
  [sym__hash] = sym__hash,
  [sym__at] = sym__at,
  [sym__range] = sym__range,
  [sym__pipe] = sym__pipe,
  [sym__comma] = sym__comma,
  [sym__bang] = sym__bang,
  [sym__slash] = sym__slash,
  [sym__quote] = sym__quote,
  [sym__squote] = sym__squote,
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
  [sym_string_reference] = sym_string_reference,
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
  [anon_sym_EQ] = {
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
  [anon_sym_LBRACK] = {
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
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
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
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
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
  [anon_sym_meta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strings] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_double_quoted_string_token1] = {
    .visible = false,
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_filesize_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_entrypoint_keyword] = {
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
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [sym__equal] = {
    .visible = false,
    .named = true,
  },
  [sym__colon] = {
    .visible = false,
    .named = true,
  },
  [sym__lbrace] = {
    .visible = false,
    .named = true,
  },
  [sym__rbrace] = {
    .visible = false,
    .named = true,
  },
  [sym__lbrack] = {
    .visible = false,
    .named = true,
  },
  [sym__rbrack] = {
    .visible = false,
    .named = true,
  },
  [sym__lparen] = {
    .visible = false,
    .named = true,
  },
  [sym__rparen] = {
    .visible = false,
    .named = true,
  },
  [sym__dollar] = {
    .visible = false,
    .named = true,
  },
  [sym__hash] = {
    .visible = false,
    .named = true,
  },
  [sym__at] = {
    .visible = false,
    .named = true,
  },
  [sym__range] = {
    .visible = false,
    .named = true,
  },
  [sym__pipe] = {
    .visible = false,
    .named = true,
  },
  [sym__comma] = {
    .visible = false,
    .named = true,
  },
  [sym__bang] = {
    .visible = false,
    .named = true,
  },
  [sym__slash] = {
    .visible = false,
    .named = true,
  },
  [sym__quote] = {
    .visible = false,
    .named = true,
  },
  [sym__squote] = {
    .visible = false,
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
  [sym_string_reference] = {
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
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 55,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '\r') SKIP(0);
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(33);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '?') ADVANCE(63);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead == '}') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 1:
      if (lookahead == '\r') SKIP(1);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == ')') ADVANCE(33);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == ',') ADVANCE(39);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == '}') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 2:
      if (lookahead == '\r') SKIP(2);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '?') ADVANCE(63);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == '}') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(13);
      END_STATE();
    case 3:
      if (lookahead == '\r') ADVANCE(52);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(52);
      if (lookahead != 0) ADVANCE(56);
      END_STATE();
    case 4:
      if (lookahead == '\r') ADVANCE(46);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '/') ADVANCE(47);
      if (lookahead == '\\') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(46);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 5:
      if (lookahead == '\r') ADVANCE(64);
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(64);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(82);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 12:
      if (lookahead == 'U') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(17);
      if (lookahead == 'x') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(14);
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
      if (eof) ADVANCE(24);
      if (lookahead == '\r') SKIP(22);
      if (lookahead == '!') ADVANCE(40);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(35);
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '\'') ADVANCE(44);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '@') ADVANCE(36);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == '{') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '\r') SKIP(23);
      if (lookahead == '!') ADVANCE(10);
      if (lookahead == '$') ADVANCE(34);
      if (lookahead == '%') ADVANCE(71);
      if (lookahead == ')') ADVANCE(33);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '+') ADVANCE(72);
      if (lookahead == '-') ADVANCE(69);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '[') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == '}') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(82);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '\r') ADVANCE(46);
      if (lookahead == '/') ADVANCE(47);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead == '*') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_double_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '\r') ADVANCE(52);
      if (lookahead == '/') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '*') ADVANCE(55);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '/') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_single_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_hex_byte);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_hex_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_hex_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_hex_wildcard);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_regex_string_content_token1);
      if (lookahead == '\r') ADVANCE(64);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_regex_string_content_token1);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_integer_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_integer_literal_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DASH);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
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
      ACCEPT_TOKEN(sym_filesize_keyword);
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
      ACCEPT_TOKEN(sym_entrypoint_keyword);
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
  [1] = {.lex_state = 22},
  [2] = {.lex_state = 22},
  [3] = {.lex_state = 22},
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 23},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 23},
  [22] = {.lex_state = 1},
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
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 22},
  [50] = {.lex_state = 22},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 22},
  [53] = {.lex_state = 22},
  [54] = {.lex_state = 22},
  [55] = {.lex_state = 22},
  [56] = {.lex_state = 22},
  [57] = {.lex_state = 22},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 22},
  [60] = {.lex_state = 22},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 22},
  [63] = {.lex_state = 22},
  [64] = {.lex_state = 22},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 22},
  [69] = {.lex_state = 22},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 22},
  [72] = {.lex_state = 22},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 22},
  [75] = {.lex_state = 22},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 22},
  [78] = {.lex_state = 22},
  [79] = {.lex_state = 22},
  [80] = {.lex_state = 22},
  [81] = {.lex_state = 22},
  [82] = {.lex_state = 22},
  [83] = {.lex_state = 22},
  [84] = {.lex_state = 22},
  [85] = {.lex_state = 22},
  [86] = {.lex_state = 22},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 22},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 4},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 22},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 22},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 22},
  [108] = {.lex_state = 22},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 22},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 22},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 22},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 22},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 22},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 22},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 22},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 22},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 22},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 22},
  [137] = {.lex_state = 22},
  [138] = {.lex_state = 22},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 22},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 22},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 22},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 22},
  [153] = {.lex_state = 22},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 22},
  [159] = {.lex_state = 22},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 22},
  [164] = {.lex_state = 22},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 22},
  [168] = {.lex_state = 22},
  [169] = {.lex_state = 22},
  [170] = {.lex_state = 22},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 22},
  [173] = {.lex_state = 22},
  [174] = {.lex_state = 22},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 22},
  [177] = {.lex_state = 22},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_private] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_strings] = ACTIONS(1),
    [sym_hex_byte] = ACTIONS(1),
    [sym_hex_wildcard] = ACTIONS(1),
    [anon_sym_nocase] = ACTIONS(1),
    [anon_sym_ascii] = ACTIONS(1),
    [anon_sym_wide] = ACTIONS(1),
    [anon_sym_fullword] = ACTIONS(1),
    [anon_sym_base64] = ACTIONS(1),
    [anon_sym_base64wide] = ACTIONS(1),
    [anon_sym_xor] = ACTIONS(1),
    [anon_sym_condition] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_filesize_keyword] = ACTIONS(1),
    [sym_entrypoint_keyword] = ACTIONS(1),
    [anon_sym_KB] = ACTIONS(1),
    [anon_sym_MB] = ACTIONS(1),
    [anon_sym_GB] = ACTIONS(1),
    [aux_sym_integer_literal_token1] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_all] = ACTIONS(1),
    [anon_sym_any] = ACTIONS(1),
    [anon_sym_none] = ACTIONS(1),
    [anon_sym_them] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
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
    [sym_source_file] = STATE(166),
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
  [0] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(39), 1,
      anon_sym_not,
    ACTIONS(41), 1,
      anon_sym_DASH,
    STATE(4), 1,
      sym__lparen,
    STATE(20), 1,
      sym__dollar,
    STATE(29), 1,
      sym_integer_literal,
    STATE(92), 1,
      sym__quote,
    STATE(93), 1,
      sym__squote,
    STATE(117), 1,
      sym__bang,
    STATE(128), 1,
      sym__hash,
    STATE(130), 1,
      sym__at,
    STATE(163), 1,
      sym_quantifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(17), 3,
      sym_filesize_keyword,
      sym_entrypoint_keyword,
      sym_identifier,
    ACTIONS(37), 3,
      anon_sym_all,
      anon_sym_any,
      anon_sym_none,
    STATE(43), 14,
      sym_string_identifier,
      sym_string_reference,
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
  [98] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(39), 1,
      anon_sym_not,
    ACTIONS(41), 1,
      anon_sym_DASH,
    STATE(4), 1,
      sym__lparen,
    STATE(20), 1,
      sym__dollar,
    STATE(29), 1,
      sym_integer_literal,
    STATE(92), 1,
      sym__quote,
    STATE(93), 1,
      sym__squote,
    STATE(117), 1,
      sym__bang,
    STATE(128), 1,
      sym__hash,
    STATE(130), 1,
      sym__at,
    STATE(163), 1,
      sym_quantifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(37), 3,
      anon_sym_all,
      anon_sym_any,
      anon_sym_none,
    ACTIONS(45), 3,
      sym_filesize_keyword,
      sym_entrypoint_keyword,
      sym_identifier,
    STATE(47), 14,
      sym_string_identifier,
      sym_string_reference,
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
  [196] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(39), 1,
      anon_sym_not,
    ACTIONS(41), 1,
      anon_sym_DASH,
    STATE(4), 1,
      sym__lparen,
    STATE(20), 1,
      sym__dollar,
    STATE(29), 1,
      sym_integer_literal,
    STATE(92), 1,
      sym__quote,
    STATE(93), 1,
      sym__squote,
    STATE(117), 1,
      sym__bang,
    STATE(128), 1,
      sym__hash,
    STATE(130), 1,
      sym__at,
    STATE(163), 1,
      sym_quantifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(37), 3,
      anon_sym_all,
      anon_sym_any,
      anon_sym_none,
    ACTIONS(47), 3,
      sym_filesize_keyword,
      sym_entrypoint_keyword,
      sym_identifier,
    STATE(42), 14,
      sym_string_identifier,
      sym_string_reference,
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
  [294] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(39), 1,
      anon_sym_not,
    ACTIONS(41), 1,
      anon_sym_DASH,
    STATE(4), 1,
      sym__lparen,
    STATE(20), 1,
      sym__dollar,
    STATE(29), 1,
      sym_integer_literal,
    STATE(92), 1,
      sym__quote,
    STATE(93), 1,
      sym__squote,
    STATE(117), 1,
      sym__bang,
    STATE(128), 1,
      sym__hash,
    STATE(130), 1,
      sym__at,
    STATE(163), 1,
      sym_quantifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(37), 3,
      anon_sym_all,
      anon_sym_any,
      anon_sym_none,
    ACTIONS(49), 3,
      sym_filesize_keyword,
      sym_entrypoint_keyword,
      sym_identifier,
    STATE(40), 14,
      sym_string_identifier,
      sym_string_reference,
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
  [392] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(39), 1,
      anon_sym_not,
    ACTIONS(41), 1,
      anon_sym_DASH,
    STATE(4), 1,
      sym__lparen,
    STATE(20), 1,
      sym__dollar,
    STATE(29), 1,
      sym_integer_literal,
    STATE(92), 1,
      sym__quote,
    STATE(93), 1,
      sym__squote,
    STATE(117), 1,
      sym__bang,
    STATE(128), 1,
      sym__hash,
    STATE(130), 1,
      sym__at,
    STATE(163), 1,
      sym_quantifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(37), 3,
      anon_sym_all,
      anon_sym_any,
      anon_sym_none,
    ACTIONS(51), 3,
      sym_filesize_keyword,
      sym_entrypoint_keyword,
      sym_identifier,
    STATE(35), 14,
      sym_string_identifier,
      sym_string_reference,
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
  [490] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(39), 1,
      anon_sym_not,
    ACTIONS(41), 1,
      anon_sym_DASH,
    STATE(4), 1,
      sym__lparen,
    STATE(20), 1,
      sym__dollar,
    STATE(29), 1,
      sym_integer_literal,
    STATE(92), 1,
      sym__quote,
    STATE(93), 1,
      sym__squote,
    STATE(117), 1,
      sym__bang,
    STATE(128), 1,
      sym__hash,
    STATE(130), 1,
      sym__at,
    STATE(163), 1,
      sym_quantifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(37), 3,
      anon_sym_all,
      anon_sym_any,
      anon_sym_none,
    ACTIONS(53), 3,
      sym_filesize_keyword,
      sym_entrypoint_keyword,
      sym_identifier,
    STATE(36), 14,
      sym_string_identifier,
      sym_string_reference,
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
  [588] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(39), 1,
      anon_sym_not,
    ACTIONS(41), 1,
      anon_sym_DASH,
    STATE(4), 1,
      sym__lparen,
    STATE(20), 1,
      sym__dollar,
    STATE(29), 1,
      sym_integer_literal,
    STATE(92), 1,
      sym__quote,
    STATE(93), 1,
      sym__squote,
    STATE(117), 1,
      sym__bang,
    STATE(128), 1,
      sym__hash,
    STATE(130), 1,
      sym__at,
    STATE(163), 1,
      sym_quantifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(37), 3,
      anon_sym_all,
      anon_sym_any,
      anon_sym_none,
    ACTIONS(55), 3,
      sym_filesize_keyword,
      sym_entrypoint_keyword,
      sym_identifier,
    STATE(32), 14,
      sym_string_identifier,
      sym_string_reference,
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
  [686] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(39), 1,
      anon_sym_not,
    ACTIONS(41), 1,
      anon_sym_DASH,
    STATE(4), 1,
      sym__lparen,
    STATE(20), 1,
      sym__dollar,
    STATE(29), 1,
      sym_integer_literal,
    STATE(92), 1,
      sym__quote,
    STATE(93), 1,
      sym__squote,
    STATE(117), 1,
      sym__bang,
    STATE(128), 1,
      sym__hash,
    STATE(130), 1,
      sym__at,
    STATE(163), 1,
      sym_quantifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(37), 3,
      anon_sym_all,
      anon_sym_any,
      anon_sym_none,
    ACTIONS(57), 3,
      sym_filesize_keyword,
      sym_entrypoint_keyword,
      sym_identifier,
    STATE(34), 14,
      sym_string_identifier,
      sym_string_reference,
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
  [784] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(39), 1,
      anon_sym_not,
    ACTIONS(41), 1,
      anon_sym_DASH,
    STATE(4), 1,
      sym__lparen,
    STATE(20), 1,
      sym__dollar,
    STATE(29), 1,
      sym_integer_literal,
    STATE(92), 1,
      sym__quote,
    STATE(93), 1,
      sym__squote,
    STATE(117), 1,
      sym__bang,
    STATE(128), 1,
      sym__hash,
    STATE(130), 1,
      sym__at,
    STATE(163), 1,
      sym_quantifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(37), 3,
      anon_sym_all,
      anon_sym_any,
      anon_sym_none,
    ACTIONS(59), 3,
      sym_filesize_keyword,
      sym_entrypoint_keyword,
      sym_identifier,
    STATE(37), 14,
      sym_string_identifier,
      sym_string_reference,
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
  [882] = 26,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DOLLAR,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(39), 1,
      anon_sym_not,
    ACTIONS(41), 1,
      anon_sym_DASH,
    STATE(4), 1,
      sym__lparen,
    STATE(20), 1,
      sym__dollar,
    STATE(29), 1,
      sym_integer_literal,
    STATE(92), 1,
      sym__quote,
    STATE(93), 1,
      sym__squote,
    STATE(117), 1,
      sym__bang,
    STATE(128), 1,
      sym__hash,
    STATE(130), 1,
      sym__at,
    STATE(163), 1,
      sym_quantifier,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    ACTIONS(37), 3,
      anon_sym_all,
      anon_sym_any,
      anon_sym_none,
    ACTIONS(61), 3,
      sym_filesize_keyword,
      sym_entrypoint_keyword,
      sym_identifier,
    STATE(45), 14,
      sym_string_identifier,
      sym_string_reference,
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
  [980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 13,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(65), 27,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
      anon_sym_strings,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64,
      anon_sym_base64wide,
      anon_sym_xor,
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
  [1028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 13,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(69), 27,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
      anon_sym_strings,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64,
      anon_sym_base64wide,
      anon_sym_xor,
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
  [1076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 13,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(73), 27,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
      anon_sym_strings,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64,
      anon_sym_base64wide,
      anon_sym_xor,
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
  [1124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 13,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(77), 27,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
      anon_sym_strings,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64,
      anon_sym_base64wide,
      anon_sym_xor,
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
  [1172] = 5,
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
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_DASH,
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
  [1217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 12,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(87), 20,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
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
  [1257] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 13,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(89), 16,
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
  [1294] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 13,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
      anon_sym_STAR,
      anon_sym_DASH,
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
  [1331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(99), 13,
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
    ACTIONS(101), 13,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_DASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 11,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_DASH,
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
  [1402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 23,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_DASH,
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
  [1436] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_LBRACK,
    STATE(149), 1,
      sym__lbrack,
    ACTIONS(115), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(111), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_DASH,
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
  [1473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 23,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_in,
      anon_sym_DASH,
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
  [1506] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    STATE(152), 1,
      sym__lbrack,
    ACTIONS(125), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(121), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_DASH,
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
  [1543] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 23,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_in,
      anon_sym_DASH,
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
  [1576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 23,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_in,
      anon_sym_DASH,
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
  [1609] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_STAR,
    ACTIONS(137), 10,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(141), 12,
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
  [1645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_of,
    ACTIONS(147), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(143), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_DASH,
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
  [1679] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_DASH,
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
  [1710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(153), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_DASH,
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
  [1741] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_and,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_or,
    ACTIONS(159), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(163), 12,
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
  [1780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_DASH,
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
  [1811] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_DASH,
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
  [1842] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(157), 18,
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
  [1875] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(173), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(157), 16,
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
  [1910] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(157), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(163), 12,
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
  [1947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_DASH,
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
  [1978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_DASH,
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
  [2009] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_and,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(185), 1,
      anon_sym_or,
    STATE(44), 1,
      sym__rparen,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(163), 12,
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
  [2052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(187), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_DASH,
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
  [2083] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_and,
    ACTIONS(185), 1,
      anon_sym_or,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      sym__rparen,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(163), 12,
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
  [2126] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(193), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_DASH,
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
  [2157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_DASH,
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
  [2188] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_and,
    ACTIONS(185), 1,
      anon_sym_or,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      sym__rparen,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(163), 12,
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
  [2231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(203), 21,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_DASH,
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
  [2262] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_and,
    ACTIONS(185), 1,
      anon_sym_or,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    ACTIONS(161), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 3,
      anon_sym_STAR,
      anon_sym_BSLASH,
      anon_sym_PERCENT,
    ACTIONS(163), 12,
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
  [2302] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      anon_sym_LBRACE,
    ACTIONS(211), 1,
      anon_sym_SLASH,
    STATE(61), 1,
      sym__lbrace,
    STATE(92), 1,
      sym__quote,
    STATE(93), 1,
      sym__squote,
    STATE(104), 1,
      sym__slash,
    STATE(62), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(50), 3,
      sym_text_string,
      sym_hex_string,
      sym_regex_string,
  [2339] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    STATE(92), 1,
      sym__quote,
    STATE(93), 1,
      sym__squote,
    ACTIONS(213), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
    STATE(126), 3,
      sym_integer_literal,
      sym_boolean_literal,
      sym_string_literal,
  [2371] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_base64,
    ACTIONS(221), 1,
      anon_sym_base64wide,
    STATE(57), 1,
      aux_sym_string_modifiers_repeat1,
    STATE(136), 1,
      sym_string_modifiers,
    ACTIONS(215), 2,
      anon_sym_DOLLAR,
      anon_sym_condition,
    ACTIONS(217), 5,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_xor,
  [2398] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym__rbrace,
    STATE(113), 1,
      sym__lbrack,
    STATE(165), 1,
      sym__lparen,
    ACTIONS(229), 2,
      sym_hex_byte,
      sym_hex_wildcard,
    STATE(58), 3,
      sym_hex_jump,
      sym_hex_alternative,
      aux_sym_hex_string_repeat1,
  [2429] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_base64,
    ACTIONS(221), 1,
      anon_sym_base64wide,
    STATE(55), 1,
      aux_sym_string_modifiers_repeat1,
    STATE(60), 1,
      sym_string_modifiers,
    ACTIONS(231), 2,
      anon_sym_DOLLAR,
      anon_sym_condition,
    ACTIONS(233), 5,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_xor,
  [2456] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(239), 1,
      anon_sym_base64,
    STATE(66), 1,
      sym__lparen,
    ACTIONS(237), 8,
      anon_sym_DOLLAR,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
  [2479] = 8,
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
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    STATE(56), 4,
      sym_import_statement,
      sym_include_statement,
      sym_rule_definition,
      aux_sym_source_file_repeat1,
  [2507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_base64,
    STATE(59), 1,
      aux_sym_string_modifiers_repeat1,
    ACTIONS(243), 8,
      anon_sym_DOLLAR,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
  [2527] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    ACTIONS(249), 1,
      anon_sym_import,
    ACTIONS(252), 1,
      anon_sym_include,
    ACTIONS(255), 1,
      anon_sym_private,
    ACTIONS(258), 1,
      anon_sym_global,
    ACTIONS(261), 1,
      anon_sym_rule,
    STATE(56), 4,
      sym_import_statement,
      sym_include_statement,
      sym_rule_definition,
      aux_sym_source_file_repeat1,
  [2555] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_base64,
    ACTIONS(221), 1,
      anon_sym_base64wide,
    STATE(59), 1,
      aux_sym_string_modifiers_repeat1,
    ACTIONS(243), 2,
      anon_sym_DOLLAR,
      anon_sym_condition,
    ACTIONS(264), 5,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_xor,
  [2579] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    ACTIONS(268), 1,
      anon_sym_LBRACK,
    ACTIONS(271), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym__lbrack,
    STATE(165), 1,
      sym__lparen,
    ACTIONS(274), 2,
      sym_hex_byte,
      sym_hex_wildcard,
    STATE(58), 3,
      sym_hex_jump,
      sym_hex_alternative,
      aux_sym_hex_string_repeat1,
  [2607] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_base64,
    ACTIONS(285), 1,
      anon_sym_base64wide,
    STATE(59), 1,
      aux_sym_string_modifiers_repeat1,
    ACTIONS(277), 2,
      anon_sym_DOLLAR,
      anon_sym_condition,
    ACTIONS(279), 5,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_xor,
  [2631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_base64,
    ACTIONS(288), 8,
      anon_sym_DOLLAR,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
  [2648] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    STATE(113), 1,
      sym__lbrack,
    STATE(165), 1,
      sym__lparen,
    ACTIONS(292), 2,
      sym_hex_byte,
      sym_hex_wildcard,
    STATE(51), 3,
      sym_hex_jump,
      sym_hex_alternative,
      aux_sym_hex_string_repeat1,
  [2673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_base64,
    ACTIONS(294), 8,
      anon_sym_DOLLAR,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
  [2690] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_base64,
    ACTIONS(298), 8,
      anon_sym_DOLLAR,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
  [2707] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_base64,
    ACTIONS(302), 8,
      anon_sym_DOLLAR,
      anon_sym_nocase,
      anon_sym_ascii,
      anon_sym_wide,
      anon_sym_fullword,
      anon_sym_base64wide,
      anon_sym_xor,
      anon_sym_condition,
  [2724] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    STATE(68), 1,
      sym_string_literal,
    STATE(92), 1,
      sym__quote,
    STATE(93), 1,
      sym__squote,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2747] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    STATE(92), 1,
      sym__quote,
    STATE(93), 1,
      sym__squote,
    STATE(162), 1,
      sym_string_literal,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2770] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_SQUOTE,
    STATE(69), 1,
      sym_string_literal,
    STATE(92), 1,
      sym__quote,
    STATE(93), 1,
      sym__squote,
    STATE(17), 2,
      sym_double_quoted_string,
      sym_single_quoted_string,
  [2793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2817] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_COLON,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym__lbrace,
    STATE(75), 1,
      sym_rule_body,
    STATE(120), 1,
      sym_tag_list,
    STATE(172), 1,
      sym__colon,
  [2839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2851] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_DOLLAR,
    ACTIONS(319), 1,
      anon_sym_condition,
    STATE(20), 1,
      sym__dollar,
    STATE(138), 1,
      sym_string_identifier,
    STATE(72), 2,
      sym_string_definition,
      aux_sym_strings_section_repeat1,
  [2871] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_COLON,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym__lbrace,
    STATE(78), 1,
      sym_rule_body,
    STATE(127), 1,
      sym_tag_list,
    STATE(172), 1,
      sym__colon,
  [2893] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_meta,
    ACTIONS(323), 1,
      anon_sym_strings,
    ACTIONS(325), 1,
      anon_sym_condition,
    STATE(111), 1,
      sym_meta_section,
    STATE(133), 1,
      sym_strings_section,
    STATE(143), 1,
      sym_condition_section,
  [2915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2927] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_COLON,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym__lbrace,
    STATE(79), 1,
      sym_rule_body,
    STATE(118), 1,
      sym_tag_list,
    STATE(172), 1,
      sym__colon,
  [2949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [2997] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    STATE(164), 1,
      sym_integer_literal,
    STATE(176), 1,
      sym_quantifier,
    ACTIONS(337), 3,
      anon_sym_all,
      anon_sym_any,
      anon_sym_none,
  [3015] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_DOLLAR,
    ACTIONS(341), 1,
      anon_sym_condition,
    STATE(20), 1,
      sym__dollar,
    STATE(138), 1,
      sym_string_identifier,
    STATE(72), 2,
      sym_string_definition,
      aux_sym_strings_section_repeat1,
  [3035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [3047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [3059] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_include,
      anon_sym_private,
      anon_sym_global,
      anon_sym_rule,
  [3071] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym_identifier,
    ACTIONS(351), 2,
      anon_sym_strings,
      anon_sym_condition,
    STATE(90), 2,
      sym_meta_definition,
      aux_sym_meta_section_repeat1,
  [3086] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      sym__rparen,
    STATE(112), 1,
      aux_sym_string_set_repeat1,
    STATE(125), 1,
      sym__comma,
  [3105] = 5,
    ACTIONS(357), 1,
      anon_sym_SQUOTE,
    ACTIONS(361), 1,
      sym_comment,
    STATE(15), 1,
      sym__squote,
    STATE(114), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(359), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [3122] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      sym__rparen,
    STATE(87), 1,
      aux_sym_string_set_repeat1,
    STATE(125), 1,
      sym__comma,
  [3141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym_identifier,
    ACTIONS(368), 2,
      anon_sym_strings,
      anon_sym_condition,
    STATE(90), 2,
      sym_meta_definition,
      aux_sym_meta_section_repeat1,
  [3156] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    STATE(97), 1,
      sym__rparen,
    STATE(98), 1,
      aux_sym_hex_alternative_repeat1,
    STATE(171), 1,
      sym__pipe,
  [3175] = 5,
    ACTIONS(361), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym__quote,
    STATE(94), 1,
      aux_sym_double_quoted_string_repeat1,
    ACTIONS(376), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
  [3192] = 5,
    ACTIONS(361), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_SQUOTE,
    STATE(14), 1,
      sym__squote,
    STATE(88), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(380), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [3209] = 5,
    ACTIONS(361), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym__quote,
    STATE(110), 1,
      aux_sym_double_quoted_string_repeat1,
    ACTIONS(384), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
  [3226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_hex_byte,
      sym_hex_wildcard,
  [3237] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_DOLLAR,
    STATE(20), 1,
      sym__dollar,
    STATE(138), 1,
      sym_string_identifier,
    STATE(82), 2,
      sym_string_definition,
      aux_sym_strings_section_repeat1,
  [3254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_hex_byte,
      sym_hex_wildcard,
  [3265] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_PIPE,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(99), 1,
      sym__rparen,
    STATE(109), 1,
      aux_sym_hex_alternative_repeat1,
    STATE(171), 1,
      sym__pipe,
  [3284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_hex_byte,
      sym_hex_wildcard,
  [3295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_hex_byte,
      sym_hex_wildcard,
  [3306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 5,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      sym_hex_byte,
      sym_hex_wildcard,
  [3317] = 4,
    ACTIONS(361), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_SLASH,
    STATE(102), 1,
      aux_sym_regex_string_content_repeat1,
    ACTIONS(400), 2,
      sym_escape_sequence,
      aux_sym_regex_string_content_token1,
  [3331] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(403), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      sym__rbrack,
    STATE(140), 1,
      sym_integer_literal,
  [3347] = 4,
    ACTIONS(361), 1,
      sym_comment,
    STATE(106), 1,
      aux_sym_regex_string_content_repeat1,
    STATE(146), 1,
      sym_regex_string_content,
    ACTIONS(405), 2,
      sym_escape_sequence,
      aux_sym_regex_string_content_token1,
  [3361] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_them,
    STATE(38), 1,
      sym_string_set,
    STATE(116), 1,
      sym__lparen,
  [3377] = 4,
    ACTIONS(361), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_SLASH,
    STATE(102), 1,
      aux_sym_regex_string_content_repeat1,
    ACTIONS(413), 2,
      sym_escape_sequence,
      aux_sym_regex_string_content_token1,
  [3391] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(415), 1,
      anon_sym_RBRACK,
    STATE(100), 1,
      sym__rbrack,
    STATE(150), 1,
      sym_integer_literal,
  [3407] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
    ACTIONS(409), 1,
      anon_sym_them,
    STATE(116), 1,
      sym__lparen,
    STATE(119), 1,
      sym_string_set,
  [3423] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_RPAREN,
    ACTIONS(419), 1,
      anon_sym_PIPE,
    STATE(109), 1,
      aux_sym_hex_alternative_repeat1,
    STATE(171), 1,
      sym__pipe,
  [3439] = 4,
    ACTIONS(361), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_DQUOTE,
    STATE(110), 1,
      aux_sym_double_quoted_string_repeat1,
    ACTIONS(424), 2,
      aux_sym_double_quoted_string_token1,
      sym_escape_sequence,
  [3453] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_strings,
    ACTIONS(325), 1,
      anon_sym_condition,
    STATE(159), 1,
      sym_strings_section,
    STATE(160), 1,
      sym_condition_section,
  [3469] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_string_set_repeat1,
    STATE(125), 1,
      sym__comma,
  [3485] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    ACTIONS(432), 1,
      anon_sym_DOT_DOT,
    STATE(103), 1,
      sym__range,
    STATE(148), 1,
      sym_integer_literal,
  [3501] = 4,
    ACTIONS(361), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_SQUOTE,
    STATE(114), 1,
      aux_sym_single_quoted_string_repeat1,
    ACTIONS(436), 2,
      aux_sym_single_quoted_string_token1,
      sym_escape_sequence,
  [3515] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_identifier,
    ACTIONS(442), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      aux_sym_tag_list_repeat1,
  [3528] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_DOLLAR,
    STATE(20), 1,
      sym__dollar,
    STATE(89), 1,
      sym_string_identifier,
  [3541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_DOLLAR,
    STATE(20), 1,
      sym__dollar,
    STATE(25), 1,
      sym_string_identifier,
  [3554] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym__lbrace,
    STATE(85), 1,
      sym_rule_body,
  [3567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COLON,
    ACTIONS(446), 1,
      anon_sym_in,
    STATE(135), 1,
      sym__colon,
  [3580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym__lbrace,
    STATE(83), 1,
      sym_rule_body,
  [3593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_DOLLAR,
    STATE(20), 1,
      sym__dollar,
    STATE(31), 1,
      sym_string_identifier,
  [3606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_LPAREN,
    STATE(144), 1,
      sym__lparen,
    STATE(145), 1,
      sym_range,
  [3619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_DOLLAR,
    STATE(20), 1,
      sym__dollar,
    STATE(31), 1,
      sym_string_identifier,
  [3632] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      sym_identifier,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      aux_sym_tag_list_repeat1,
  [3645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_DOLLAR,
    STATE(20), 1,
      sym__dollar,
    STATE(147), 1,
      sym_string_identifier,
  [3658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 3,
      anon_sym_strings,
      anon_sym_condition,
      sym_identifier,
  [3667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym__lbrace,
    STATE(80), 1,
      sym_rule_body,
  [3680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_DOLLAR,
    STATE(20), 1,
      sym__dollar,
    STATE(30), 1,
      sym_string_identifier,
  [3693] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym_identifier,
    STATE(86), 2,
      sym_meta_definition,
      aux_sym_meta_section_repeat1,
  [3704] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_DOLLAR,
    STATE(20), 1,
      sym__dollar,
    STATE(23), 1,
      sym_string_identifier,
  [3717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      sym_identifier,
    ACTIONS(458), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      aux_sym_tag_list_repeat1,
  [3730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_COLON,
    STATE(129), 1,
      sym__colon,
  [3740] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_condition,
    STATE(160), 1,
      sym_condition_section,
  [3750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym__rbrace,
  [3760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    STATE(5), 1,
      sym__lparen,
  [3770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 2,
      anon_sym_DOLLAR,
      anon_sym_condition,
  [3778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 2,
      anon_sym_LBRACE,
      sym_identifier,
  [3786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_EQ,
    STATE(48), 1,
      sym__equal,
  [3796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      sym__rbrack,
  [3806] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_RBRACK,
    STATE(100), 1,
      sym__rbrack,
  [3816] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_global,
    ACTIONS(476), 1,
      anon_sym_rule,
  [3826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_RBRACK,
    STATE(39), 1,
      sym__rbrack,
  [3836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      sym__rbrace,
  [3846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    STATE(154), 1,
      sym_integer_literal,
  [3856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_COLON,
    STATE(155), 1,
      sym__colon,
  [3866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_SLASH,
    STATE(52), 1,
      sym__slash,
  [3876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_DOT_DOT,
    STATE(107), 1,
      sym__range,
  [3894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    STATE(139), 1,
      sym_integer_literal,
  [3904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
    STATE(101), 1,
      sym__rbrack,
  [3914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE,
  [3922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    STATE(142), 1,
      sym_integer_literal,
  [3932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_EQ,
    STATE(49), 1,
      sym__equal,
  [3942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_DOT_DOT,
    STATE(158), 1,
      sym__range,
  [3952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym__lparen,
  [3962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COLON,
    STATE(96), 1,
      sym__colon,
  [3972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_COLON,
    STATE(3), 1,
      sym__colon,
  [3982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      aux_sym_integer_literal_token1,
    STATE(161), 1,
      sym_integer_literal,
  [3992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_condition,
    STATE(134), 1,
      sym_condition_section,
  [4002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym__rbrace,
  [4012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      sym__rparen,
  [4022] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
    STATE(63), 1,
      sym__rparen,
  [4032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_of,
  [4039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_of,
  [4046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym_hex_byte,
  [4053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      ts_builtin_sym_end,
  [4060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_of,
  [4067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_of,
  [4074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_rule,
  [4081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_rule,
  [4088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      sym_hex_byte,
  [4095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      sym_identifier,
  [4102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym_identifier,
  [4109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym_identifier,
  [4116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_COLON,
  [4123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_of,
  [4130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 98,
  [SMALL_STATE(4)] = 196,
  [SMALL_STATE(5)] = 294,
  [SMALL_STATE(6)] = 392,
  [SMALL_STATE(7)] = 490,
  [SMALL_STATE(8)] = 588,
  [SMALL_STATE(9)] = 686,
  [SMALL_STATE(10)] = 784,
  [SMALL_STATE(11)] = 882,
  [SMALL_STATE(12)] = 980,
  [SMALL_STATE(13)] = 1028,
  [SMALL_STATE(14)] = 1076,
  [SMALL_STATE(15)] = 1124,
  [SMALL_STATE(16)] = 1172,
  [SMALL_STATE(17)] = 1217,
  [SMALL_STATE(18)] = 1257,
  [SMALL_STATE(19)] = 1294,
  [SMALL_STATE(20)] = 1331,
  [SMALL_STATE(21)] = 1368,
  [SMALL_STATE(22)] = 1402,
  [SMALL_STATE(23)] = 1436,
  [SMALL_STATE(24)] = 1473,
  [SMALL_STATE(25)] = 1506,
  [SMALL_STATE(26)] = 1543,
  [SMALL_STATE(27)] = 1576,
  [SMALL_STATE(28)] = 1609,
  [SMALL_STATE(29)] = 1645,
  [SMALL_STATE(30)] = 1679,
  [SMALL_STATE(31)] = 1710,
  [SMALL_STATE(32)] = 1741,
  [SMALL_STATE(33)] = 1780,
  [SMALL_STATE(34)] = 1811,
  [SMALL_STATE(35)] = 1842,
  [SMALL_STATE(36)] = 1875,
  [SMALL_STATE(37)] = 1910,
  [SMALL_STATE(38)] = 1947,
  [SMALL_STATE(39)] = 1978,
  [SMALL_STATE(40)] = 2009,
  [SMALL_STATE(41)] = 2052,
  [SMALL_STATE(42)] = 2083,
  [SMALL_STATE(43)] = 2126,
  [SMALL_STATE(44)] = 2157,
  [SMALL_STATE(45)] = 2188,
  [SMALL_STATE(46)] = 2231,
  [SMALL_STATE(47)] = 2262,
  [SMALL_STATE(48)] = 2302,
  [SMALL_STATE(49)] = 2339,
  [SMALL_STATE(50)] = 2371,
  [SMALL_STATE(51)] = 2398,
  [SMALL_STATE(52)] = 2429,
  [SMALL_STATE(53)] = 2456,
  [SMALL_STATE(54)] = 2479,
  [SMALL_STATE(55)] = 2507,
  [SMALL_STATE(56)] = 2527,
  [SMALL_STATE(57)] = 2555,
  [SMALL_STATE(58)] = 2579,
  [SMALL_STATE(59)] = 2607,
  [SMALL_STATE(60)] = 2631,
  [SMALL_STATE(61)] = 2648,
  [SMALL_STATE(62)] = 2673,
  [SMALL_STATE(63)] = 2690,
  [SMALL_STATE(64)] = 2707,
  [SMALL_STATE(65)] = 2724,
  [SMALL_STATE(66)] = 2747,
  [SMALL_STATE(67)] = 2770,
  [SMALL_STATE(68)] = 2793,
  [SMALL_STATE(69)] = 2805,
  [SMALL_STATE(70)] = 2817,
  [SMALL_STATE(71)] = 2839,
  [SMALL_STATE(72)] = 2851,
  [SMALL_STATE(73)] = 2871,
  [SMALL_STATE(74)] = 2893,
  [SMALL_STATE(75)] = 2915,
  [SMALL_STATE(76)] = 2927,
  [SMALL_STATE(77)] = 2949,
  [SMALL_STATE(78)] = 2961,
  [SMALL_STATE(79)] = 2973,
  [SMALL_STATE(80)] = 2985,
  [SMALL_STATE(81)] = 2997,
  [SMALL_STATE(82)] = 3015,
  [SMALL_STATE(83)] = 3035,
  [SMALL_STATE(84)] = 3047,
  [SMALL_STATE(85)] = 3059,
  [SMALL_STATE(86)] = 3071,
  [SMALL_STATE(87)] = 3086,
  [SMALL_STATE(88)] = 3105,
  [SMALL_STATE(89)] = 3122,
  [SMALL_STATE(90)] = 3141,
  [SMALL_STATE(91)] = 3156,
  [SMALL_STATE(92)] = 3175,
  [SMALL_STATE(93)] = 3192,
  [SMALL_STATE(94)] = 3209,
  [SMALL_STATE(95)] = 3226,
  [SMALL_STATE(96)] = 3237,
  [SMALL_STATE(97)] = 3254,
  [SMALL_STATE(98)] = 3265,
  [SMALL_STATE(99)] = 3284,
  [SMALL_STATE(100)] = 3295,
  [SMALL_STATE(101)] = 3306,
  [SMALL_STATE(102)] = 3317,
  [SMALL_STATE(103)] = 3331,
  [SMALL_STATE(104)] = 3347,
  [SMALL_STATE(105)] = 3361,
  [SMALL_STATE(106)] = 3377,
  [SMALL_STATE(107)] = 3391,
  [SMALL_STATE(108)] = 3407,
  [SMALL_STATE(109)] = 3423,
  [SMALL_STATE(110)] = 3439,
  [SMALL_STATE(111)] = 3453,
  [SMALL_STATE(112)] = 3469,
  [SMALL_STATE(113)] = 3485,
  [SMALL_STATE(114)] = 3501,
  [SMALL_STATE(115)] = 3515,
  [SMALL_STATE(116)] = 3528,
  [SMALL_STATE(117)] = 3541,
  [SMALL_STATE(118)] = 3554,
  [SMALL_STATE(119)] = 3567,
  [SMALL_STATE(120)] = 3580,
  [SMALL_STATE(121)] = 3593,
  [SMALL_STATE(122)] = 3606,
  [SMALL_STATE(123)] = 3619,
  [SMALL_STATE(124)] = 3632,
  [SMALL_STATE(125)] = 3645,
  [SMALL_STATE(126)] = 3658,
  [SMALL_STATE(127)] = 3667,
  [SMALL_STATE(128)] = 3680,
  [SMALL_STATE(129)] = 3693,
  [SMALL_STATE(130)] = 3704,
  [SMALL_STATE(131)] = 3717,
  [SMALL_STATE(132)] = 3730,
  [SMALL_STATE(133)] = 3740,
  [SMALL_STATE(134)] = 3750,
  [SMALL_STATE(135)] = 3760,
  [SMALL_STATE(136)] = 3770,
  [SMALL_STATE(137)] = 3778,
  [SMALL_STATE(138)] = 3786,
  [SMALL_STATE(139)] = 3796,
  [SMALL_STATE(140)] = 3806,
  [SMALL_STATE(141)] = 3816,
  [SMALL_STATE(142)] = 3826,
  [SMALL_STATE(143)] = 3836,
  [SMALL_STATE(144)] = 3846,
  [SMALL_STATE(145)] = 3856,
  [SMALL_STATE(146)] = 3866,
  [SMALL_STATE(147)] = 3876,
  [SMALL_STATE(148)] = 3884,
  [SMALL_STATE(149)] = 3894,
  [SMALL_STATE(150)] = 3904,
  [SMALL_STATE(151)] = 3914,
  [SMALL_STATE(152)] = 3922,
  [SMALL_STATE(153)] = 3932,
  [SMALL_STATE(154)] = 3942,
  [SMALL_STATE(155)] = 3952,
  [SMALL_STATE(156)] = 3962,
  [SMALL_STATE(157)] = 3972,
  [SMALL_STATE(158)] = 3982,
  [SMALL_STATE(159)] = 3992,
  [SMALL_STATE(160)] = 4002,
  [SMALL_STATE(161)] = 4012,
  [SMALL_STATE(162)] = 4022,
  [SMALL_STATE(163)] = 4032,
  [SMALL_STATE(164)] = 4039,
  [SMALL_STATE(165)] = 4046,
  [SMALL_STATE(166)] = 4053,
  [SMALL_STATE(167)] = 4060,
  [SMALL_STATE(168)] = 4067,
  [SMALL_STATE(169)] = 4074,
  [SMALL_STATE(170)] = 4081,
  [SMALL_STATE(171)] = 4088,
  [SMALL_STATE(172)] = 4095,
  [SMALL_STATE(173)] = 4102,
  [SMALL_STATE(174)] = 4109,
  [SMALL_STATE(175)] = 4116,
  [SMALL_STATE(176)] = 4123,
  [SMALL_STATE(177)] = 4130,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_double_quoted_string, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_double_quoted_string, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_quoted_string, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_single_quoted_string, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_size_unit, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_size_unit, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_literal, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_literal, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_identifier, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_identifier, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_identifier, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_identifier, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_offset, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_offset, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_set, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_set, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_length, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_length, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_set, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_set, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_set, 4, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_set, 4, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__dollar, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__dollar, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_count, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_count, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_reference, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_reference, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 11),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 11),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_of_expression, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_of_expression, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_length, 5, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_length, 5, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_offset, 5, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_offset, 5, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 8),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 8),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expression, 8, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expression, 8, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_of_expression, 10, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_of_expression, 10, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition_section, 3, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_definition, 3, 0, 10),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_string, 3, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_modifiers_repeat1, 1, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_modifiers_repeat1, 1, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_modifiers, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_modifiers, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(169),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hex_string_repeat1, 2, 0, 0),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_string_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_string_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_string_repeat1, 2, 0, 0), SHIFT_REPEAT(58),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_modifiers_repeat1, 2, 0, 0),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_modifiers_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_string, 4, 0, 0),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_string, 4, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text_string, 1, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_string, 1, 0, 0),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_modifiers_repeat1, 4, 0, 0),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_modifiers_repeat1, 4, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_string, 3, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex_string, 3, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 2, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 2, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 4, 0, 0),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_strings_section_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_strings_section_repeat1, 2, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 3, 0, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 5, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 4, 0, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 5, 0, 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 5, 0, 5),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strings_section, 3, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 4, 0, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_body, 3, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_definition, 6, 0, 7),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_section, 3, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_meta_section_repeat1, 2, 0, 0), SHIFT_REPEAT(153),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_meta_section_repeat1, 2, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_jump, 3, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_alternative, 3, 0, 0),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_alternative, 4, 0, 0),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_jump, 4, 0, 0),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex_jump, 5, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_string_content_repeat1, 2, 0, 0),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_regex_string_content_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_regex_string_content, 1, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hex_alternative_repeat1, 2, 0, 0),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hex_alternative_repeat1, 2, 0, 0), SHIFT_REPEAT(171),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_double_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_set_repeat1, 2, 0, 0),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_set_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_single_quoted_string_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_list_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_list_repeat1, 2, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_list, 3, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_definition, 3, 0, 9),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_list, 2, 0, 0),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_definition, 4, 0, 10),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_list_repeat1, 1, 0, 6),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [510] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 1, 0, 0),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 2, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 5, 0, 0),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
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
