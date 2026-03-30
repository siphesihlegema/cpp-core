// ============================================================
// DYNAMIC MEMORY ALLOCATION — Quick Reference
// ============================================================
// Stack memory — automatically managed, limited in size.
// Heap memory — manually allocated with 'new', manually freed with 'delete'.
//
// Syntax:
//   T* ptr = new T;           // allocate single object on heap
//   T* ptr = new T[n];        // allocate array of n objects on heap
//   delete ptr;               // free single object
//   delete[] ptr;             // free array (use [] if allocated with new[])
//
// RULES:
//   - Always delete[] what you allocated with new[]  (mismatch → undefined behavior)
//   - After delete, the pointer is dangling — set it to nullptr immediately
//   - Forgetting delete → memory leak
//
// memset(ptr, value, bytes) — fills a block of memory with a byte value.
//   memset(buffer, 0, 8) → zeros out 8 bytes starting at buffer
//
// Pointer-to-pointer (double pointer):
//   char** ptr2ptr = &ptr;    // ptr2ptr holds the address of ptr itself
//   Used for: arrays of strings, output parameters, pointer reassignment through a function
//
// In modern C++, prefer:
//   std::unique_ptr<T>   — single owner, auto-deleted when out of scope
//   std::vector<T>       — dynamic array with automatic memory management
// ============================================================

#include <cstring>

int main() {
    char* buffer = new char[8]; // allocate 8 bytes on the heap
    memset(buffer, 0, 8);       // zero-initialize all 8 bytes

    delete[] buffer;            // free heap memory (must use [] for array allocation)

    char** ptr = &buffer;       // pointer-to-pointer: ptr holds the address of the pointer 'buffer'
}
