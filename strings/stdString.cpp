// ============================================================
// std::string — Quick Reference
// ============================================================
// std::string is a heap-allocated, owning, mutable string type.
//
// Common member functions:
//   s.length()  / s.size()  — number of characters (same result)
//   s.max_size()            — theoretical maximum size (platform limit)
//   s.empty()               — true if length == 0
//   s.substr(pos, len)      — returns a substring copy
//   s.find("sub")           — returns index of first match, or std::string::npos if not found
//   s.append("more")        — appends text (same as s += "more")
//   s.c_str()               — returns const char* (null-terminated, for C APIs)
//   s += "text"             — concatenate
//
// Member function call syntax:
//   object.method()   — std::string uses member functions
//   (contrast: normal free functions are called as function(object))
//
// Include: #include <string>
// ============================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Bob";

    cout << name.max_size() << "\n"; // maximum possible length (huge number, e.g. 2^63 - 1)
    std::cout << name.length() << "\n"; // 3 — number of characters in "Bob"
}
