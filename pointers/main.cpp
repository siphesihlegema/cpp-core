#include <iostream>

#define LOG(x) std::cout << x << std::endl

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

}
