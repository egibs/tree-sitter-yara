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

; Keywords and special identifiers
[
  "them"
  "all"
  "any"
  "none"
] @keyword.operator


; String identifiers
(string_identifier) @variable.special
(string_reference
  [(identifier) (string_identifier)] @variable.special)

; Built-ins
[
  (filesize_keyword)
  (entrypoint_keyword)
] @constant.builtin

; Tags
(tag_list
  [(identifier) (tag)] @tag)

; Punctuation and delimiters
[
  "="
  ":"
  "{"
  "}"
  "["
  "]"
  "("
  ")"
  "$"
  "#"
  "@"
  ".."
  "|"
  ","
  "!"
  "/"
  "\""
  "'"
] @punctuation.delimiter

; Rule names
(rule_definition
  name: (identifier) @function)

; Meta definitions
(meta_definition
  key: (identifier) @property)
