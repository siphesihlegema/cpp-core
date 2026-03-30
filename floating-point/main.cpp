// ============================================================
// FLOATING-POINT — IEC 559 / IEEE 754 Compliance Check
// ============================================================
// IEC 559 (identical to IEEE 754) is the international standard for
// floating-point arithmetic. When is_iec559 == true, you can rely on:
//   - Exact representation of certain values (e.g. 0.5, 0.25)
//   - Special values: NaN, +Inf, -Inf
//   - Defined rounding behavior
//   - Predictable behavior for edge cases
//
// Typical sizes (IEC 559 compliant):
//   float       — 32-bit  (7 significant decimal digits)
//   double      — 64-bit  (15-16 significant decimal digits)
//   long double — 80-bit or 128-bit depending on platform
//
// std::numeric_limits<T>::is_iec559 — compile-time check for IEC 559 compliance
// std::boolalpha                    — print bool as "true"/"false" instead of 1/0
// ============================================================

#include <iostream>
#include <limits>

int main()
{
    std::cout << std::boolalpha; // print booleans as words, not numbers

    std::cout << "float: "       << std::numeric_limits<float>::is_iec559       << '\n';
    std::cout << "double: "      << std::numeric_limits<double>::is_iec559      << '\n';
    std::cout << "long double: " << std::numeric_limits<long double>::is_iec559 << '\n';
}
