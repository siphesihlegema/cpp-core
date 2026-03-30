// ============================================================
// std::string_view — Quick Reference (C++17+)
// ============================================================
// std::string_view is a lightweight, READ-ONLY, non-owning view of a string.
// It avoids the cost of copying a string when you only need to read it.
//
// Syntax:
//   std::string_view sv { "hello" };    // view of a string literal (no copy)
//   std::string_view sv { myString };   // view of an existing std::string
//
// Key properties:
//   - No heap allocation — just stores a pointer + length
//   - Cannot modify the string through the view
//   - Can be initialized from: string literals, std::string, char*, other views
//
// GOTCHA — Dangling view:
//   std::string_view sv { std::string{"temp"} };  // DANGEROUS
//   The temporary string is destroyed immediately; sv now points to freed memory.
//   Rule: the original string must outlive the view.
//
// Use std::string_view for:
//   - Function parameters that only need to read a string (faster than const std::string&)
//   - Viewing slices of existing strings without copying
//
// Use std::string for:
//   - Owned, modifiable strings
//   - Strings that need to outlive their source
//
// See: strings/diff.md for a full comparison
// ============================================================

#include <iostream>
#include <string>
#include <string_view>

void strr(std::string_view enter) // accepts string literals, std::string, or string_view — no copy
{
    std::cout << enter << "\n";
}

int main() {
    std::string str{"Hello world"}; // std::string: heap-allocated owning copy

    // std::string_view: read-only view of the literal "hola" — no allocation
    std::string_view s{"hola"};
    strr(s); // passes the view — still no copy at any stage

    return 0;
}
