// ============================================================
// REFERENCES — Quick Reference
// ============================================================
// A reference is an alias — another name for an existing object.
// All operations on the reference directly affect the original object.
//
// Syntax:
//   int&        ref { x };   // lvalue reference to int
//   double&     ref { d };   // lvalue reference to double
//   const int&  ref { x };   // lvalue reference to const int (read-only alias)
//
// RULES:
//   - A reference MUST be initialized when declared (cannot be "null")
//   - A reference CANNOT be rebound to a different object after init
//   - Non-const reference (int&) can only bind to a MODIFIABLE lvalue (a variable)
//   - const reference (const int&) can bind to: modifiable lvalues, const lvalues, rvalues
//
// Binding errors:
//   int& ref { y };    // ERROR if y is const — non-const ref can't bind to const var
//   int& ref { 0 };    // ERROR — 0 is an rvalue, non-const ref can't bind to rvalue
//   const int& ref { 5 }; // OK — const ref can bind to rvalue (temporary is created)
//
// constexpr reference limitation:
//   constexpr int& ref { x }; // compile error if x is a local (non-static) variable
//                             // constexpr refs can only bind to static/global objects
//
// The object being referenced is called the "referent".
// ============================================================

#include <iostream>

int main()
{
    int x { 5 };      // x is the referent
    int& ref { x };   // ref is bound to x (reference binding)

    std::cout << x   << '\n'; // 5 — direct access
    std::cout << ref << '\n'; // 5 — access through alias (same value)

    // Binding rule violations (shown commented out):
    const int y { 5 };
    // int& invalidRef { y };   // ERROR: non-const ref can't bind to const variable
    // int& invalidRef2 { 0 };  // ERROR: non-const ref can't bind to rvalue

    const int& god { 5 }; // OK: const ref binds to rvalue (compiler creates a temporary)

    // constexpr ref requires a static/global object:
    // int r {6};
    // constexpr int& ref3 { r }; // compile error: r is a non-static local

    return 0;
}
