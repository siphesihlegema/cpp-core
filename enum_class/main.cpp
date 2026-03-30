// ============================================================
// UNSCOPED ENUMS — Type Safety Pitfall
// ============================================================
// Unscoped enums (plain 'enum') implicitly convert to int.
// This means enumerators from DIFFERENT enums can be accidentally compared.
//
// PROBLEM demonstrated below:
//   Color::red  == 0
//   Fruit::banana == 0
//   → (red == banana) is true even though they are unrelated types!
//
// SOLUTION: Use 'enum class' (scoped enum, C++11+):
//   enum class Color { red, blue };
//   enum class Fruit { banana, apple };
//   Color::red == Fruit::banana  → compile error (different types, no implicit conversion)
//
// Prefer 'enum class' over plain 'enum' to prevent accidental cross-type comparisons.
// ============================================================

#include <iostream>

int main()
{
    enum Color
    {
        red,   // implicitly == 0
        blue,  // implicitly == 1
    };

    enum Fruit
    {
        banana, // implicitly == 0
        apple,  // implicitly == 1
    };

    Fruit color { apple };  // value: 1
    Fruit fruit { banana }; // value: 0

    // Both are implicitly cast to int for comparison — no type safety!
    if (color == fruit) // 1 == 0 → false
        std::cout << "color and fruit are equal\n";
    else
        std::cout << "color and fruit are not equal\n"; // this branch runs

    return 0;
}
