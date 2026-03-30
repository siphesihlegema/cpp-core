// ============================================================
// USER-DEFINED NAMESPACES — Usage Example
// ============================================================
// Demonstrates calling a function from namespace Foo using the
// scope resolution operator (::).
//
// Foo and Goo both define 'somthing' — the namespace disambiguates which one to call.
// Compile: g++ Main.cpp foo.cpp -o program   (goo.cpp not needed here)
// ============================================================

#include <iostream>
#include "foo.cpp" // includes Foo namespace definition (normally you'd include a header instead)

int somthing(int, int); // forward declaration (not used — Foo::somthing is called directly)

int main() {
    std::cout << Foo::somthing(4, 3) << "\n"; // calls Foo's version: 4 + 3 = 7

    return 0;
}
