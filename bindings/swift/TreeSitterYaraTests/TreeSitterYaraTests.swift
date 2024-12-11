import XCTest
import SwiftTreeSitter
import TreeSitterYara

final class TreeSitterYaraTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_yara())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Yara grammar")
    }
}
