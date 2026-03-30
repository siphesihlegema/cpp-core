// ============================================================
// MULTIPLE SOURCE FILES — Quick Reference
// ============================================================
// Functions can be defined in separate .cpp files.
// To use them here, forward-declare them so the compiler knows their signature.
// The linker resolves the actual definition at link time.
//
// Compile:  g++ main.cpp add.cpp -o program
//
// See also: add.cpp (definition), linker/main.cpp (compilation flags)
// ============================================================

#include <iostream>

int add(int, int); // forward declaration — defined in add.cpp

int main() {
    std::cout << add(2, 3) << "\n"; // linker connects this call to add.cpp's definition
    return 0;
}
