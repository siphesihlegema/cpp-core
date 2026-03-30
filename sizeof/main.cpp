// ============================================================
// TYPE SIZES — Quick Reference
// ============================================================
// sizeof(T) returns the size of type T in bytes (compile-time constant).
// Sizes can vary by platform; these are typical for a 64-bit system:
//
//   bool:        1 byte
//   char:        1 byte
//   short:       2 bytes
//   int:         4 bytes
//   long:        4 or 8 bytes (platform-dependent)
//   long long:   8 bytes
//   float:       4 bytes
//   double:      8 bytes
//   long double: 8, 12, or 16 bytes (platform-dependent)
//
// CHAR_BIT — number of bits per byte (almost always 8, from <climits>)
//
// std::setw(n)  — sets the minimum width of the next output field (from <iomanip>)
// std::left     — left-justify output (from <iomanip>)
// ============================================================

#include <iomanip>  // std::setw, std::left
#include <iostream>
#include <climits>  // CHAR_BIT

int main()
{
    std::cout << "A byte is " << CHAR_BIT << " bits\n\n";

    std::cout << std::left; // left-justify all subsequent output

    std::cout << std::setw(16) << "bool:"        << sizeof(bool)        << " bytes\n";
    std::cout << std::setw(16) << "char:"        << sizeof(char)        << " bytes\n";
    std::cout << std::setw(16) << "short:"       << sizeof(short)       << " bytes\n";
    std::cout << std::setw(16) << "int:"         << sizeof(int)         << " bytes\n";
    std::cout << std::setw(16) << "long:"        << sizeof(long)        << " bytes\n";
    std::cout << std::setw(16) << "long long:"   << sizeof(long long)   << " bytes\n";
    std::cout << std::setw(16) << "float:"       << sizeof(float)       << " bytes\n";
    std::cout << std::setw(16) << "double:"      << sizeof(double)      << " bytes\n";
    std::cout << std::setw(16) << "long double:" << sizeof(long double) << " bytes\n";

    return 0;
}
