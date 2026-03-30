// ============================================================
// HEADER FILES — Quick Reference
// ============================================================
// A header file (.h) contains declarations — it tells other files what
// functions/classes exist without providing their implementation.
//
// #pragma once — include guard; prevents the header from being processed
//                more than once per translation unit. Modern alternative
//                to the classic #ifndef / #define / #endif guard.
//
// Pattern:
//   math.h   → declares function signatures (what exists)
//   math.cpp → defines function bodies (how they work)
//   main.cpp → includes math.h and calls the functions
//
// The linker connects calls in main.cpp to definitions in math.cpp.
// ============================================================

#pragma once // prevent duplicate inclusion

// Function declarations (no bodies — just signatures)
int add(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);
