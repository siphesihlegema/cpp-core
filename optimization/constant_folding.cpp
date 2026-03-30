// ============================================================
// COMPILER OPTIMIZATIONS — Quick Reference
// ============================================================
// These are automatic — the compiler does them without you asking.
//
// CONSTANT FOLDING:
//   The compiler evaluates constant expressions at compile time.
//   std::cout << 3 + 4;  →  compiled as if you wrote  std::cout << 7;
//   No addition happens at runtime — it's baked into the binary.
//
// CONSTANT PROPAGATION:
//   The compiler substitutes a variable's known constant value wherever it's used.
//   int x {7};
//   std::cout << x;  →  compiled as if you wrote  std::cout << 7;
//   Only works when the value is provably constant (e.g. not modified, not from input).
//   Use 'constexpr' to make propagation guaranteed.
//
// These optimizations reduce runtime work and shrink binary size.
// They are part of why using named constants is as efficient as using raw literals.
// ============================================================

#include <iostream>

int main()
{
    std::cout << 3 + 4 << '\n'; // constant folding: compiled as << 7

    int x {7}; // compiler may propagate this value (constant propagation)
    std::cout << x << "\n"; // may be compiled as << 7

    return 0;
}
