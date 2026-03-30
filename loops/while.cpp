// ============================================================
// WHILE LOOP — Quick Reference
// ============================================================
// Syntax:
//   while (<condition>) { <body> }
//
//   condition — evaluated BEFORE each iteration
//   If condition is false on the first check, the body never executes.
//
// Compare:
//   while    — check first, then execute (0 or more iterations)
//   do-while — execute first, then check (1 or more iterations)
//
// Common pattern: increment the loop variable INSIDE the body.
// Forgetting the increment → infinite loop.
// ============================================================

#include <iostream>

int main() {
    int i {};

    while (i <= 100) {
        std::cout << i << "\n"; // prints 0, 1, 2, ... 100
        i++;                    // must increment or loop runs forever
    }
    return 0;
}
