// ============================================================
// DEFAULT PARAMETERS — Quick Reference
// ============================================================
// Default parameter values are specified in the DECLARATION (or first definition).
// Callers can omit trailing arguments; the default is used instead.
//
// Syntax:  int add(int x = 0, int y = 0);
//
// Rules:
//   - Defaults must be at the RIGHTMOST parameters (no gaps)
//   - Specify defaults in the header/declaration, NOT in both declaration and definition
//   - Caller can override by providing an argument
//
// Example calls:
//   add()     → x=0, y=0 → returns 0
//   add(3)    → x=3, y=0 → returns 3
//   add(2, 3) → x=2, y=3 → returns 5
// ============================================================

#include <iostream>

int add(int x = 0, int y = 0) {
    return x + y;
}
