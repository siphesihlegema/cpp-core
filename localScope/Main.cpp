#include <iostream>

/*
In the function above x, y, and z are all local variables
they only exist inside the add function
*/

int add(int x, int y){
    int z{x + y};
    return z;
} // outside the function the variables are deleted

int main() {
    int x{};
    int y{};

    std::cin >> x;
    std::cin >> y;

    std::cout << add(x, y) << "\n";

    /*
    when we call a fucnction we recive a copy of the value returend
    by the function, becauce variables in a funtion go out of scope when outside the function.
    So when we call a funtio its return value is stored in somthing we call
    a *temprary object*, this object is then inserted into std::cout.
    */

    return 0;
}

/*In modern C++ (especially since C++17), the compiler has many tricks to avoid generating temporaries where previously it would have needed to. For 
example, when we use a return value to initialize a variable, this would normally
result in the creation of a temporary holding the return value, and then using the temporary to initialize the variable. However, in modern C++, the compiler will often 
skip creating the temporary and just initialize the variable directly with the return value.
*/