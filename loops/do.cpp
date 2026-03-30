// ============================================================
// DO-WHILE LOOP — Quick Reference
// ============================================================
// Syntax:
//   do {
//       <body>
//   } while (<condition>);
//
// Key difference from while:
//   - Body executes AT LEAST ONCE — condition is checked AFTER the body runs.
//   - Use do-while when you always need one iteration before checking (e.g. menu loops).
//
// GOTCHA in this example:
//   i is never incremented inside the body → infinite loop!
//   Fix: add i++ inside the do block.
// ============================================================

#include <iostream>

int main() {
    int i {};

    do {
        std::cout << i; // runs at least once; i stays 0 → infinite loop (missing i++)
    } while (i < 5);

    return 0;
}
