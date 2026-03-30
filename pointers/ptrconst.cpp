// ============================================================
// CONST POINTERS — Quick Reference
// ============================================================
// 'const' position relative to '*' determines WHAT is const:
//
//   const int* ptr    — pointer-to-const:   value is read-only, pointer can move
//   int* const ptr    — const-pointer:      pointer is fixed, value can change
//   const int* const ptr — const-pointer-to-const: both are fixed
//
// Memory aid:
//   const LEFT  of * → the VALUE being pointed to is const
//   const RIGHT of * → the POINTER ITSELF is const
//
// Summary table:
//   int* ptr0             — change value? YES  change address? YES
//   const int* ptr1       — change value? NO   change address? YES
//   int* const ptr2       — change value? YES  change address? NO
//   const int* const ptr3 — change value? NO   change address? NO
//
// NOTE: A pointer-to-const can point to a NON-const object — it just promises
// not to modify the value through THAT pointer.
// ============================================================

int main()
{
    int x { 5 };
    int* ptr { &x };    // non-const pointer to non-const int — full flexibility

    int y { 6 };
    ptr = &y;           // change what ptr points to (ok)
    *ptr = 7;           // change the value at that address (ok)

    // Pointer-to-const: cannot modify the value through ptr2, but can reassign ptr2
    const int p {4};
    const int* ptr2 = &p;
    // *ptr2 = 5;       // compile error: value is read-only through ptr2
    ptr2 = &y;          // ok: ptr2 itself is not const, can point elsewhere

    // ptr2 can also point to a non-const object (just treats it as read-only)

    // Const pointer: ptr3 is fixed to &q, but *ptr3 is modifiable
    int q = 9;
    int* const ptr3 = &q;
    *ptr3 = 20;         // ok: value is modifiable
    // ptr3 = &x;       // compile error: ptr3 is const, cannot be reassigned

    // Const-pointer-to-const: neither the address nor the value can change
    int value = 48;
    const int* const ptr4 {&value};
    // *ptr4 = 10;      // compile error: value is read-only
    // ptr4 = &q;       // compile error: pointer is const

    // All four combinations side by side:
    {
        int v{ 5 };
        int* ptr0             { &v }; // change value: YES | change address: YES
        const int* ptr1       { &v }; // change value: NO  | change address: YES
        int* const ptr2       { &v }; // change value: YES | change address: NO
        const int* const ptr3 { &v }; // change value: NO  | change address: NO
    }

    return 0;
}
