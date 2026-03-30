// ============================================================
// LITERALS — Quick Reference
// ============================================================
// A literal (literal constant) is a fixed value written directly in source code.
// The compiler knows its type from its form:
//
//   42          → int
//   42L         → long
//   42LL        → long long
//   42U         → unsigned int
//   3.14        → double
//   3.14f       → float
//   3.14L       → long double
//   'a'         → char
//   "hello"     → const char* (C-style string)
//   "hello"s    → std::string      (needs  using namespace std::literals)
//   "hello"sv   → std::string_view (needs  using namespace std::literals)
//   true/false  → bool
//
// Scientific notation for floating-point:
//   2e2   = 2 × 10² = 200.0   (double)
//   1.5e3 = 1500.0
//   4e-2  = 0.04
// ============================================================

#include <iostream>

int main() {
    std::cout << "this string is a literal" << '\n'; // const char* literal
    std::cout << 5 << '\n';    // int literal — value inserted directly into output

    // Scientific notation
    std::cout << 2e2 << "\n";  // 200 (2 × 10²)

    return 0;
}
