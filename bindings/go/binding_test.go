package tree_sitter_yara_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_yara "github.com/egibs/tree-sitter-yara/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_yara.Language())
	if language == nil {
		t.Errorf("Error loading Yara grammar")
	}
}
