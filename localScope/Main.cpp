// ============================================================
// LOCAL SCOPE & TEMPORARY OBJECTS — Quick Reference
// ============================================================
// Local variables:
//   - Declared inside a function or block {}
//   - Created when execution enters the scope, destroyed when it exits
//   - Exist only for the lifetime of the enclosing block
//
// Temporary objects:
//   - Created to hold an expression's result (e.g. a function return value)
//   - Normally destroyed at the end of the full expression they appear in
//   - Modern C++ (C++17+) uses RVO/NRVO to eliminate temporaries where possible:
//       RVO  (Return Value Optimization) — constructs return value directly in caller's storage
//       NRVO (Named RVO)                — same, but for named local variables being returned
//
// Parameter scope:
//   - Function parameters are local to the function body
//   - They are destroyed when the function returns
// ============================================================

#include <iostream>

// x, y, z are local to 'add' — they cease to exist when add() returns
int add(int x, int y){
    int z{x + y}; // z is a local variable, lives only inside this call
    return z;     // z's VALUE is returned (copied into a temporary or optimized away)
}

int main() {
    int x{};
    int y{};

    std::cin >> x;
    std::cin >> y;

    // add(x, y) returns a value into a temporary object; that temporary is then
    // passed to std::cout. In C++17+, the compiler often eliminates the temporary
    // entirely (RVO), constructing the result directly where it is needed.
    std::cout << add(x, y) << "\n";

    return 0;
}
