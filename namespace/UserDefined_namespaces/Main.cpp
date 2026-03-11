#include <iostream>
#include "foo.cpp"

int somthing(int, int);

int main() {
    
    std::cout << Foo::somthing(4, 3) << "\n";

    return 0;
}
