// ============================================================
// FUNCTION DECLARATION & FORWARD DECLARATION — Quick Reference
// ============================================================
// Declaration (prototype) — tells the compiler a function exists; no body required.
//   Syntax: <returnType> functionName(<paramTypes>);
//   Must appear BEFORE the first call to that function.
//
// Definition — the actual implementation with a body.
//   Can appear after main() as long as a declaration (forward declaration) precedes the call.
//
// Why use forward declarations?
//   - Allows splitting code into multiple files (declare in .h, define in .cpp)
//   - Lets functions call each other regardless of definition order
// ============================================================

#include <iostream>

int two(int x); // forward declaration — compiler knows 'two' exists with this signature

int main(){
    std::cout << two(3); // call is valid because of the forward declaration above
    return 0;
}

// Definition can safely appear after main() thanks to the forward declaration
int two(int x){
    x = 2;    // ignores the argument, always returns 2
    return x;
}
