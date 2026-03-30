// ============================================================
// ARRAYS + POINTER ARITHMETIC — C++ Quick Reference
// ============================================================
// A C-style array decays to a pointer to its first element.
// Syntax:  int arr[N];          // declares array of N ints
//          int* ptr = arr;      // ptr points to arr[0]
//          *(ptr + i)           // dereferences element at index i (same as arr[i])
//
// Array size at compile time:
//   sizeof(arr) / sizeof(arr[0])  — only works for stack arrays, NOT pointers
//
// PREFER std::array or std::vector over raw C arrays in modern C++.
// ============================================================

#include <iostream>
#define print(x) std::cout << x << " ";

int main() {
    int arr[5];       // stack-allocated array of 5 ints (uninitialized)
    int* ptr = arr;   // arr decays to &arr[0]; ptr now holds that address

    int count = (sizeof(arr) / sizeof(int)); // count == 5 (works because arr is a real array, not a pointer)

    // Write via pointer arithmetic: *(ptr + i) is identical to arr[i]
    for(int i = 0; i < count; i++) {
        *(ptr + i) = i; // arr[0]=0, arr[1]=1, ...
    }

    // Read via normal index syntax
    for(int i = 0; i < count; i++) {
        print(arr[i]); // prints: 0 1 2 3 4
    }
}
