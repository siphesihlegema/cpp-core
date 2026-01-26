#include <iostream>
#include <string>

int g; // global (namespace scope) variable

int main() {
    // Declaring
    int x;

    // Initialising
    x = 5; // copy initialisation
    int y(5); // direct iitialisation
    int z{5}; // brace initialization 

    // std::cout << x << std::endl;
    // std::cout << y << std::endl;
    // std::cout << z << std::endl;

    // Global and static variables are automatically zer-initialised
    static int s;

    // std::cout << g << std::endl;
    // std::cout << s << std::endl;

    // Common c++ variables
    int a = 10;
    long b = 123456L;
    long long c = 123456789LL;
    unsigned int u = 42;

    // Decimals, floating point
    float f = 3.14f;
    double d = 3.14;

    // characters
    char A = 'a';
    char B = 66;

    //std::cout << B << std::endl;

    // Booleans
    bool ok = true;

    // Strings (not primitive)
    // std::string name = "bob";

    {
        // Local variable
        int x = 3;
    }

    // const (cannot be modified)
    const int daysInWeek = 7;

    // constexpr (must be known at compile time)
    constexpr int maxStudents = 300;

    // auto (my kinda variable (:)
    auto dd = 10; // int
    auto p = 3.14; // double
    auto lt = true; // bool

    // type conversion
    double D = 5; // int -> double (ok) = 5.0
    int i = 5.9; // double -> int (take the floor)

    int aa = 5, bb = 2;
    double cc = aa / bb;  // c becomes 2.0, NOT 2.5 (integer division happened)
    double c2 = static_cast<double>(a) / b; // 2.5

    /* 
    char: 1 byte
    int: often 4 bytes
    double: often 8 bytes
    */

    // check size
    std::cout << sizeof(bool) << "\n";

    int AA = 10;
    int BB = AA;     // copy
    BB = 20;        // a is still 10

    int& RR = AA;    // reference (alias)
    RR = 30;        // a becomes 30



    return 0;
}