#include <string>
#include <iostream>
// Define a new unscoped enumeration named Color

// An enumeration (also called an enumerated type or an enum) is a compound data type whose values
// are restricted to a set of named symbolic constants (called enumerators).

enum Color
{
    // Here are the enumerators
    // These symbolic constants define all the possible values this type can hold
    // Each enumerator is separated by a comma, not a semicolon
    red,
    green,
    blue, // trailing comma optional but recommended
}; // the enum definition must end with a semicolon


// Unscoped enumerations are named such because they put their enumerator names into
// the same scope as the enumeration definition itself (as opposed to creating a new scope region like a namespace does).



int main()
{
    // Define a few variables of enumerated type Color
    Color apple { red };   // my apple is red
    Color shirt { green }; // my shirt is green
    Color cup { blue };    // my cup is blue

    //Color socks { white }; // error: white is not an enumerator of Color
    //Color hat { 2 };       // error: 2 is not an enumerator of Color

    std::cout << sizeof(apple) << " " << sizeof(shirt) << " " << sizeof(std::string) << "\n";

    return 0;
}
