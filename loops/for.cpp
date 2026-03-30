// ============================================================
// FOR LOOP — Quick Reference
// ============================================================
// Syntax:
//   for (<init>; <condition>; <update>) { <body> }
//
//   init      — runs once before the loop starts; declares the loop variable
//   condition — checked before each iteration; loop stops when false
//   update    — runs after each iteration (typically increment/decrement)
//
// All three parts are optional:
//   for (;;) { }  — infinite loop (equivalent to while(true))
//
// Range-based for (C++11+):
//   for (auto& elem : container) { }  — iterates over every element
//
// Use for-loop when the number of iterations is known in advance.
// Use while-loop when the termination condition is data-driven.
// ============================================================

#include <iostream>

int main() {
    for(int i {}; i <= 100; i++) { // i starts at 0, increments by 1 each iteration
        std::cout << i << "\n";    // prints 0, 1, 2, ... 100
    }
    return 0;
}
