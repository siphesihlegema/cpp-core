// ============================================================
// PASS BY ADDRESS — Quick Reference
// ============================================================
// Passing a pointer to a function lets the function access (and optionally
// modify) the original object without making a copy.
//
// Syntax:  void f(T* ptr)       — nullable; call with &variable or nullptr
//          void f(const T* ptr) — pointer to const; read-only access, no copy
//
// Difference from pass-by-reference:
//   Reference (T&)  — always non-null; caller MUST provide a valid object
//   Pointer  (T*)   — can be null; caller can pass nullptr
//   → Use pointers when null is a valid input; use references otherwise.
//
// NULL SAFETY:
//   Always check for nullptr before dereferencing a pointer parameter.
//   Dereferencing nullptr is undefined behavior (usually a crash).
//   if (!ptr) return;   ← early return guard
// ============================================================

#include <iostream>
#include <string>

// const pointer parameter: read-only access, no copy of the string
void passbyaddress(const std::string* ptr)
{
    std::cout << *ptr << "\n"; // safe here — caller guaranteed non-null
}

// null-safe version: guard against nullptr before use
void safe(std::string* ptr) {
    if(!ptr)         // if ptr is null, do nothing
        return;
    std::cout << *ptr << "\n";
}

int main() {
    std::string str {"Hello"};
    std::string* strptr = &str;

    passbyaddress(strptr); // prints "Hello"

    strptr = nullptr;      // strptr is now null

    safe(strptr);          // null check prevents crash — prints nothing
    return 0;
}
