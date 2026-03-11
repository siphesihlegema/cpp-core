// C++ supports 5 different types of casts: static_cast, dynamic_cast, const_cast, reinterpret_cast,
// and C-style casts. The first four are sometimes referred to as named casts.

/*
 *static_cast	   Performs compile-time type conversions between related types.	                                        Yes
 *dynamic_cast	   Performs runtime type conversions on pointers or references in an polymorphic (inheritance) hierarchy	Yes
 *const_cast	   Adds or removes const.	                                                                                Only for adding const
 *reinterpret_cast Reinterprets the bit-level representation of one type as if it were another type	                        No
 *C-style casts	   Performs some combination of static_cast, const_cast, or reinterpret_cast.	                            No
 */

#include <iostream>

int main()
{
    int x { 10 };
    int y { 4 };

    // static cast x to a double so we get floating point division
    std::cout << static_cast<double>(x) / y << '\n'; // prints 2.5
    
    int i { 48 };
    // explicit conversion from int to char, so that a char is assigned to variable ch
    char ch { static_cast<char>(i) };

    return 0;
}
