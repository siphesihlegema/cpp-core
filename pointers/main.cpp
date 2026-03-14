#include <iostream>

#define LOG(x) std::cout << x << std::endl
#include <cstddef> // for NULL

// A pointer is an object that holds a memory address (typically of another variable) as its value.
// This allows us to store the address of some other object to use later.

int main() {
    // so in pointers i introduce you to &(address-of operator) operator. it is used to get the memory address of it operand.

    int var = 2;
    int* ptre = &var;

    // so as you might have noticed an adress is not that usefull its just a number. we need to know whats in this addess, so
    // we use dereference operator(*)

    LOG(*ptre);

    // & and * work as opposit

    // so i guess an address isnt just a number it has its own type. Pointer type

    int x{ 5 };
    int* ptr{ &x }; // initialize ptr with address of variable x

    std::cout << x << '\n';    // print x's value
    std::cout << *ptr << '\n'; // print the value at the address that ptr is holding (x's address)

    *ptr = 6; // The object at the address held by ptr (x) assigned value 6 (note that ptr is dereferenced here)

    std::cout << x << '\n';
    std::cout << *ptr << '\n'; // print the value at the address that ptr is holding (x's address)
    
    // Null poiters

    int* Nullptr {}; // Nullptr is now a null pointer, and is not holding an address
    
    // nullptr keyword

    int* null {nullptr};

    // pointers convert to Boolean false if they are null, and Boolean true if they are non-null
    if (null) // implicit conversion to Boolean
        std::cout << "ptr is non-null\n";
    else
        std::cout << "ptr is null\n";

    double* pt3 { NULL }; // ptr3 is a null pointer

    double* ptr4; // ptr4 is uninitialized
    ptr4 = NULL; // ptr4 is now a null pointer

    // Favor references over pointers whenever possible

    /* Pointers and references both give us the ability to access some other object indirectly.
     *
     * Pointers have the additional abilities of being able to change what they are pointing at,
     * and to be pointed at null. However, these pointer abilities are also inherently dangerous:
     * A null pointer runs the risk of being dereferenced, and the ability to change what a pointer
     * is pointing at can make creating dangling pointers easier
     */

    
}
