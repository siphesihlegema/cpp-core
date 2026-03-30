// ============================================================
// C++ CASTS — Quick Reference
// ============================================================
// Always prefer named casts over C-style casts — they are explicit about intent
// and some are checked by the compiler or runtime.
//
//  CAST              WHEN TO USE                                          SAFE?
//  static_cast       Compile-time conversions between related types        Yes
//  dynamic_cast      Runtime downcast in polymorphic inheritance hierarchy Yes (returns nullptr on failure for pointers)
//  const_cast        Add or remove const (use sparingly!)                  Only when adding const
//  reinterpret_cast  Reinterpret raw bits as a different type              No — very unsafe
//  C-style (T)x      Combination of the above; unclear intent              No — avoid
//
// MOST COMMON: static_cast
//   - int  → double: static_cast<double>(x)
//   - int  → char:   static_cast<char>(i)
//   - enum → int:    static_cast<int>(myEnum)
// ============================================================

#include <iostream>

int main()
{
    int x { 10 };
    int y { 4 };

    // Without cast: integer division → 2
    // With cast: one operand becomes double → floating-point division → 2.5
    std::cout << static_cast<double>(x) / y << '\n'; // prints 2.5

    int i { 48 };
    // Explicit int → char conversion; 48 == '0' in ASCII
    char ch { static_cast<char>(i) }; // ch == '0'

    return 0;
}
