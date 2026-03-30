// ============================================================
// PASS BY VALUE vs PASS BY REFERENCE — Quick Reference
// ============================================================
//
// PASS BY VALUE:   void f(std::string y)
//   - Creates a COPY of the argument → expensive for large types (strings, vectors)
//   - Modifying y inside f does NOT affect the caller's variable
//
// PASS BY REFERENCE:  void f(std::string& y)
//   - No copy — y is an alias for the caller's variable → cheap
//   - Modifying y DOES affect the caller's variable
//   - Only accepts modifiable lvalues (variables), NOT literals or rvalues
//
// PASS BY CONST REFERENCE:  void f(const std::string& y)
//   - No copy, but y cannot be modified inside f → best of both worlds
//   - Accepts modifiable lvalues, const variables, AND rvalue literals
//   - USE THIS as the default for read-only reference parameters
//
// lvalue  — has a memory address; can appear on left of assignment: int x = 5; (x is lvalue)
// rvalue  — temporary or literal; no persistent address:  5, 3.14, "hi" are rvalues
//
// &x inside a function — address-of operator; prints the memory address of x
// ============================================================

#include <iostream>
#include <string>

void print(std::string y) {          // pass by value — y is a copy, expensive for strings
    std::cout << y << "\n";
}

void printr(std::string& y) {        // pass by reference — y is an alias; modifies caller's var
    y = "bob";
    std::cout << y << "\n";
}

void address(int value, int& ref) {  // shows that value copy and ref have different addresses
    std::cout << &value << "\n";     // address of the LOCAL copy
    std::cout << &ref << "\n";       // address of the ORIGINAL variable (same as caller's)
}

void printRef(const int& y) {        // const ref — no copy, no modification, accepts anything
    std::cout << y << "\n";
}

int main() {
    std::string x {"Hello"};
    std::string p {"Hello_world"};

    print(x);          // x is copied into y — safe but slow for large strings
    std::cout << p << "\n";
    printr(p);         // p is passed by reference; p becomes "bob" after the call

    int z { 5 };
    std::cout << "Address of z: " << &z << '\n';
    address(z, z);     // first arg is a copy (different address), second is a reference (same address)

    // const int& binds to everything:
    int q { 5 };
    printRef(q);       // modifiable lvalue
    const int w { 5 };
    printRef(w);       // non-modifiable lvalue (const variable)
    printRef(5);       // rvalue literal — compiler creates a temporary int, ref binds to it
}
