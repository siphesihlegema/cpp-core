int main()
{
    int x { 5 };
    int* ptr { &x }; // ptr is a normal (non-const) pointer

    int y { 6 };
    ptr = &y; // we can point at another value

    *ptr = 7; // we can change the value at the address being held

    const int z { 5 }; // x is now const
    //int* ptr { &z };   // compile error: cannot convert from const int* to int*

    // to solve this we use pointer to const

    const int p {4};
    const int* ptr2 = &p;

    // because out const pinter is pointing to a read only variable
    // we can not change the value it pointing to, but 
    // we can change our pointer to point to a differnt object
    
    *ptr2++; // not allower

    // const pointers can also point to non const objects

    // we can not change y via ptr2 pointer because its a const pointer
    ptr2 = &y;

    // Const pointers
    // we can also make the a pointer itself const. 
    // A const pointer is a pointer whose address can not be changed after initialization.
    
    // to declare a const pointer we place the keyword const after the astrerisk in it declaration.
    int q = 9;
    int* const ptr3 = &q;

    // const pointer to const value
    
    // A const pointer to a const value can not have its address changed, 
    // nor can the value it is pointing to be changed through the pointer
    int value = 48;
    const int* const ptr4 {&value};

{
    int v{ 5 };

    int* ptr0 { &v };             // points to an "int" but is not const itself.  We can modify the value or the address.
    const int* ptr1 { &v };       // points to a "const int" but is not const itself.  We can only modify the address.
    int* const ptr2 { &v };       // points to an "int" and is const itself.   We can only modify the value.
    const int* const ptr3 { &v }; // points to a "const int" and is const itself.  We can't modify the value nor the address.

    // if the const is on the left side of the *, the const belongs to the value
    // if the const is on the right side of the *, the const belongs to the pointer

}



    return 0;
}
