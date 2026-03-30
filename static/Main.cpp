// ============================================================
// 'extern' — Accessing a Global from Another File
// ============================================================
// 'extern' declares that a variable is DEFINED in another translation unit.
// It tells the compiler: "this exists somewhere — the linker will find it."
//
// Syntax:
//   extern int var;   // declaration — no memory allocated here
//
// Rules:
//   - extern declaration goes in the file that USES the variable
//   - The actual definition (without extern) goes in exactly ONE .cpp file
//   - Use extern in a shared header to make a global available everywhere
//
// Compile: g++ main.cpp Main.cpp -o program
//   (main.cpp defines var, Main.cpp uses it via extern)
//
// PREFER: passing values as function arguments over using global variables.
// ============================================================

#include <iostream>

extern int var; // var is defined in main.cpp; extern lets this file reference it

int main() {
    std::cout << var << "\n"; // prints 10 (value defined in main.cpp)
    std::cin.get();           // pause until Enter key
}
