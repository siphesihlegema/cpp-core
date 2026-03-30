// ============================================================
// TYPE ALIASES — Quick Reference
// ============================================================
// A type alias creates a new name for an existing type.
// The alias and the original are completely interchangeable.
//
// Syntax (C++11 — preferred):
//   using NewName = ExistingType;
//
// Legacy syntax (C-style):
//   typedef ExistingType NewName;
//
// Common uses:
//   using integer = int;              // rename for clarity
//   using StringVec = std::vector<std::string>;  // shorten long type names
//   using Callback  = void(*)(int);   // readable name for function pointer types
//
// Type aliases do NOT create new types — they are just alternate names.
// The compiler treats 'integer' and 'int' as identical.
// ============================================================

#include <iostream>

using integer = int; // 'integer' is now an alias for 'int'

int main() {
    integer x = {65}; // same as: int x = {65};
    std::cout << x << "\n"; // prints: 65
}
