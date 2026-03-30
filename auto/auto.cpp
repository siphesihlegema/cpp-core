// ============================================================
// AUTO — Type Deduction Quick Reference
// ============================================================
// 'auto' tells the compiler to deduce the variable's type from its initializer.
//
// Rules:
//   - References are DROPPED:  auto b = ref;     → b is a copy (int), not a reference
//   - const is DROPPED:        auto c = c_val;   → c is a modifiable int
//   - To keep ref:  auto& b = ref;
//   - To keep const: const auto c = c_val;
//
// String literals:
//   auto s = "hello"    → const char*   (NOT std::string)
//   auto s = "hello"s   → std::string   (needs  using namespace std::literals)
//   auto s = "hello"sv  → std::string_view
//
// Use auto to avoid repeating long type names, but be explicit when the
// deduced type would be surprising to a reader.
// ============================================================

#include <iostream>

int main()
{
    auto d { 5.0 }; // double  (5.0 is a double literal)
    auto i { 1 + 2 }; // int  (1 + 2 yields int)
    auto x { i }; // int  (copies i's type)

    int val = 5;
    int& ref = val;
    const int c_val = 10;

    auto a = val;   // int   — straightforward copy
    auto b = ref;   // int   — reference stripped; b is an independent copy
    auto c = c_val; // int   — const stripped; c is mutable

    auto s { "Hello, world" }; // const char* — NOT std::string!

    using namespace std::literals; // enables 's' and 'sv' string literal suffixes

    auto s1 { "goo"s };  // std::string       — heap-allocated, owning copy
    auto s2 { "moo"sv }; // std::string_view  — read-only view, no copy (C++17+)

    return 0;
}
