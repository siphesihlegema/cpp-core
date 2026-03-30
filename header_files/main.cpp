// ============================================================
// HEADER FILES — Usage Example
// ============================================================
// Use #include "file.h" (quotes) for your own headers — compiler searches
// the local directory first, then system paths.
// Use #include <file> (angle brackets) for standard library headers.
//
// Compile command (all files together):
//   g++ main.cpp math.cpp -o program
// ============================================================

#include <iostream>
#include "math.h" // brings in declarations for add, subtract, multiply, divide

int main() {
    // Each call is resolved at link time to the definition in math.cpp
    std::cout << add(4, 2)      << "\n"; // 6
    std::cout << subtract(4, 2) << "\n"; // 2
    std::cout << multiply(4, 2) << "\n"; // 8
    std::cout << divide(4, 2)   << "\n"; // 2
    return 0;
}
