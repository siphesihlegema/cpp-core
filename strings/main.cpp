// ============================================================
// C-STYLE STRINGS — Quick Reference
// ============================================================
// A C-style string is a null-terminated array of chars: const char*
// String literals like "Gema" are stored in read-only memory.
//
//   const char* name = "Gema";   // pointer to a string literal (read-only)
//   char name[] = "Gema";        // mutable copy on the stack
//
// PREFER std::string or std::string_view over const char* in modern C++:
//   - const char* has no length, no bounds checking, manual memory management
//   - std::string_view for read-only access without copying (see stringview.cpp)
//   - std::string for owned, modifiable strings
// ============================================================

#include <iostream>

int main() {
    const char* name = "Gema"; // points to a string literal in read-only memory
    std::cout << name << "\n"; // std::cout knows how to print const char* as a string
}
