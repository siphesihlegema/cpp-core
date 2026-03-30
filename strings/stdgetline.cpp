// ============================================================
// std::getline — Quick Reference
// ============================================================
// std::getline reads an entire line (including spaces) until '\n'.
// std::cin >> stops at the first whitespace — NOT suitable for multi-word input.
//
// Syntax:
//   std::getline(std::cin, str);               // reads until '\n' (consumes the '\n')
//   std::getline(std::cin >> std::ws, str);    // PREFERRED: skips leading whitespace first
//
// WHY std::ws matters:
//   If std::cin >> was used before getline, a '\n' is left in the buffer.
//   Without std::ws, getline immediately reads that '\n' and returns an empty string.
//   std::cin >> std::ws  discards any leading whitespace/newlines before reading.
//
// Signature: std::getline(istream&, string&) → returns the stream (for chaining/error checks)
// ============================================================

#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name); // skip whitespace, then read full line

    std::cout << "Enter your favorite color: ";
    std::string color{};
    std::getline(std::cin >> std::ws, color);

    std::cout << "Your name is " << name << " and your favorite color is " << color << '\n';

    return 0;
}
