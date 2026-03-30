// ============================================================
// POINTERS — Quick Reference
// ============================================================
// A pointer holds the MEMORY ADDRESS of another object.
//
// Syntax:
//   int* ptr;           // declare a pointer to int (uninitialized — dangerous!)
//   int* ptr { &x };    // initialize with address of x
//   *ptr                // dereference: access/modify the value AT the address
//   &x                  // address-of operator: get the address of x
//
// Key operators:
//   &  (address-of)  — get the address of a variable
//   *  (dereference) — follow the pointer to the object it points to
//   &  and  *  are inverses: *(&x) == x
//
// Null pointers:
//   int* ptr {};        // value-initialized → null pointer (safest way)
//   int* ptr {nullptr}; // explicit null using nullptr keyword (C++11+)
//   Never dereference a null pointer → undefined behavior (crash)
//
// Null check:
//   if (ptr)    → true if ptr is non-null
//   if (!ptr)   → true if ptr is null
//
// Prefer nullptr over NULL (NULL is just 0, nullptr is type-safe)
// Prefer references over pointers when you don't need to:
//   - reassign the pointer to a different object, or
//   - allow null as a valid state
// ============================================================

#include <iostream>
#define LOG(x) std::cout << x << std::endl
#include <cstddef> // for NULL (prefer nullptr instead)

int main() {
    // --- BASIC POINTER USAGE ---
    int var = 2;
    int* ptre = &var;  // ptre holds the address of var

    LOG(*ptre);        // dereference: prints the value at that address (2)

    int x{ 5 };
    int* ptr{ &x };    // ptr points to x

    std::cout << x    << '\n'; // 5  — accessing x directly
    std::cout << *ptr << '\n'; // 5  — accessing x through pointer

    *ptr = 6;                  // modifies x through the pointer
    std::cout << x    << '\n'; // 6
    std::cout << *ptr << '\n'; // 6

    // --- NULL POINTERS ---
    int* Nullptr {};           // null pointer via value-initialization (preferred)
    int* null {nullptr};       // null pointer via nullptr keyword

    // Null pointers convert to false in boolean context
    if (null)
        std::cout << "ptr is non-null\n";
    else
        std::cout << "ptr is null\n"; // this branch runs

    // Legacy null pointer styles (avoid — prefer nullptr)
    double* pt3 { NULL };  // NULL == 0, not type-safe
    double* ptr4;
    ptr4 = NULL;

    // --- POINTERS vs REFERENCES ---
    // Pointers: can be null, can be reassigned to point elsewhere
    // References: cannot be null, cannot be rebound after init
    // → Prefer references when nullability and reassignment aren't needed
}
