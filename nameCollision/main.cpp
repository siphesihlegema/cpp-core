// ============================================================
// NAME COLLISION — Quick Reference
// ============================================================
// A name collision (ODR violation) occurs when two translation units
// define the same name with external linkage.
//
// Problem:
//   main.cpp defines  void myFcn(int x) { cout << 2*x; }
//   a.cpp    defines  void myFcn(int x) { cout << x; }
//   → linker sees two definitions for the same symbol → error
//
// Solutions:
//   1. Use namespaces:  namespace MyApp { void myFcn(...) {} }
//      → accessed as MyApp::myFcn(...)
//   2. Use 'static' on either definition to give it internal linkage
//      → static void myFcn(...) {}  — only visible in its own file
//   3. Rename one of them
//
// See: namespace/ directory for namespace examples
// ============================================================

#include <iostream>

// This myFcn has external linkage by default — conflicts with a.cpp if both are linked
void myFcn(int x)
{
    std::cout << 2 * x;
}

int main()
{
    return 0;
}
