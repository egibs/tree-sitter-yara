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

; Comparison and logical operators
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

; Meta fields
(meta_definition
  key: (identifier) @property)

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
(escape) @string.escape

; Hex strings
(hex_string) @string.special
(hex_byte) @constant.numeric
(hex_wildcard) @constant.builtin
(hex_jump) @constant.numeric

; Regular expressions
(regex_string) @string.regexp
(pattern) @string.regexp

; Boolean values
(boolean_literal) @constant.boolean

; String identifiers
(string_identifier) @variable

; Built-ins
[
  "true"
  "false"
  "filesize"
  "entrypoint"
] @constant.builtin

; Tags
(tag_list
  [(identifier) (tag)] @tag)

; Punctuation
["{" "}" "[" "]" "(" ")" "$" "#" "@" "=" ":" "," ".." "?" "|"] @punctuation.delimiter

; Rule name
(rule_definition
  name: (identifier) @function)
