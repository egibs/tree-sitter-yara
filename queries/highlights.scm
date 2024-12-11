; Comments
(comment) @comment

; Keywords
[
  "rule"
  "global"
  "private"
  "import"
  "meta"
  "strings"
  "condition"
] @keyword

; Operators
[
  "matches"
  "contains"
  "icontains"
  "imatches"
  "startswith"
  "istartswith"
  "endswith"
  "iendswith"
  "and"
  "or"
  "not"
  "=="
  "!="
  "<"
  ">"
  ">="
  "<="
  "of"
  "for"
  "all"
  "any"
  "none"
  "in"
] @keyword.operator

; String modifiers
[
  "wide"
  "ascii"
  "nocase"
  "fullword"
  "xor"
  "base64"
  "base64wide"
] @keyword.modifier

; Numbers and sizes
(integer_literal) @constant.numeric
(size_unit) @constant.numeric

; Strings
(double_quoted_string) @string
(single_quoted_string) @string
(escape_sequence) @string.escape

; Hex strings
(hex_string) @string.special
(hex_byte) @constant.numeric
(hex_wildcard) @constant.builtin
(hex_jump) @constant.numeric

; Regular expressions
(regex_string) @string.regexp
(pattern) @string.regexp

; Boolean literals
[
  "true"
  "false"
] @constant.boolean

; String identifiers
(string_identifier) @variable

; Built-ins
[
  (filesize_keyword)
  (entrypoint_keyword)
] @constant.builtin

; Tags
(tag_list
  [(identifier) (tag)] @tag)

; Punctuation and delimiters
_equal @punctuation.delimiter
_colon @punctuation.delimiter
_lbrace @punctuation.delimiter
_rbrace @punctuation.delimiter
_lbrack @punctuation.delimiter
_rbrack @punctuation.delimiter
_lparen @punctuation.delimiter
_rparen @punctuation.delimiter
_dollar @punctuation.delimiter
_hash @punctuation.delimiter
_at @punctuation.delimiter
_range @punctuation.delimiter
_question @punctuation.delimiter
_pipe @punctuation.delimiter
_comma @punctuation.delimiter
_bang @punctuation.delimiter
_slash @punctuation.delimiter
_quote @punctuation.delimiter
_squote @punctuation.delimiter

; Rule names
(rule_definition
  name: (identifier) @function)

; Meta definitions
(meta_definition
  key: (identifier) @property)
