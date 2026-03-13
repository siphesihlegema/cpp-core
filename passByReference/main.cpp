#include <iostream>
#include <string>

void print(std::string y) {
    std::cout << y << "\n";
}// y goes out of scope here

void printr(std::string& y) {
    y = "bob";
    std::cout << y << "\n";
}// y still goes out of scope here but...

// proof
void address(int value, int& ref) {
    std::cout << &value << "\n";
    std::cout << &ref << "\n";
}

void printRef(const int& y) {
    std::cout << y << "\n";
}


int main() {

    std::string x {"Hello"};
    std::string p {"Hello_world"};

    print(x); // x is passed by value or copied into parameter y, which is expesive
    std::cout << p << "\n";
    printr(p); // x is now passed by reference into parameter y, which means im not creating a copy of x, im directly modifying x.
    
    int z { 5 };
    std::cout << "The address of x is: " << &z << '\n';
    address(z, z);

    /* Pass by reference can only accept modifiable lvalue arguments
     * 
     * Because a reference to a non-const value can only bind to a modifiable lvalue,
     * this means that pass by reference only works with arguments that are modifiable lvalues.
     * In practical terms, this significantly limits the usefulness of pass by reference to non-const,
     * as it means we can not pass const variables or literals.
     * */

    // but wait you can still get all the goodies of pass by ref 
    
    int q { 5 };
    printRef(q);   // ok: x is a modifiable lvalue, y binds to x

    const int w { 5 };
    printRef(w);   // ok: z is a non-modifiable lvalue, y binds to z

    printRef(5);   // ok: 5 is rvalue literal, y binds to temporary int object
}
