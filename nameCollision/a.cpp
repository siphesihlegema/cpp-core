// ============================================================
// NAME COLLISION — Conflicting definition (see main.cpp for context)
// ============================================================
// This file defines myFcn with the same signature as main.cpp.
// If both files are compiled and linked together, the linker will
// report a "multiple definition" error for myFcn.
//
// Fix: wrap in a namespace, or add 'static' to restrict linkage to this file.
// ============================================================

#include <iostream>

void myFcn(int x)
{
    std::cout << x; // different behavior from main.cpp's version
}
