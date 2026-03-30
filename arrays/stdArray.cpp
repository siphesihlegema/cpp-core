// ============================================================
// std::array — C++ Quick Reference
// ============================================================
// std::array is a fixed-size container from the standard library.
// Unlike C-style arrays it does NOT decay to a pointer, and it
// knows its own size via .size().
//
// Syntax:  std::array<Type, N> name;        // declare, default-initialized
//          std::array<int, 5> arr{1,2,3};   // aggregate-initialize
//          arr.size()                        // returns std::size_t (number of elements)
//          arr.at(i)                         // bounds-checked access (throws std::out_of_range)
//          arr[i]                            // unchecked access (same as C array)
//
// Use std::array when:  size is known at compile time and you want safety.
// Use std::vector when: size can change at runtime.
// ============================================================

#include <iostream>
#include <array>
#define print(x) std::cout << x << " ";

int main() {
    std::array<int, 5> arr; // fixed-size array of 5 ints; elements are default-initialized

    print(arr.size()) // prints: 5  (always correct — no sizeof tricks needed)
}
