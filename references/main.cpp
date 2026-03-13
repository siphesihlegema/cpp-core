/* In C++, a reference is an alias for an existing object. Once a reference has been defined,
 * any operation on the reference is applied to the object being referenced.
 * This means we can use a reference to read or modify the object being referenced.
 */
 
// Modern C++ contains two types of references: lvalue references, and rvalue references. In this chapter, we’ll discuss lvalue references.

// regular referance types
//int        // a normal int type (not an reference)
//int&       // an lvalue reference to an int object
//double&    // an lvalue reference to a double object
//const int& // an lvalue reference to a const int object

#include <iostream>

int main()
{   // x is calles the referent
    int x { 5 };    // x is a normal integer variable

    // ref is now bound to x, thid process is called reference binding.
    int& ref { x }; // ref is an lvalue reference variable that can now be used as an alias for variable x

    std::cout << x << '\n';  // print the value of x (5)a
    std::cout << ref << '\n'; // print the value of x via ref (5)

    const int y { 5 };
    int& invalidRef { y };  // invalid: non-const lvalue reference can't bind to a non-modifiable lvalue
    int& invalidRef2 { 0 }; // invalid: non-const lvalue reference can't bind to an rvalue
    
    // a temporary object is created and initialized with the rvalue
    const int& god { 5 }; // okay: 5 is an rvalue
    
    int r {6};
    constexpr int& ref3 { r }; // compile error: can't bind to non-static object

    return 0;
}
