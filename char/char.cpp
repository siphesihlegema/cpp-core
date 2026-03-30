// ============================================================
// char + std::cin — Quick Reference
// ============================================================
// std::cin >> automatically skips leading whitespace (spaces, tabs, newlines)
// before extracting a value. It stops at the next whitespace character.
//
// Input stream behavior:
//   User types "a b\n"
//   First  cin >> ch  → extracts 'a',  leaves " b\n" in stream
//   Second cin >> ch  → skips ' ', extracts 'b', leaves "\n" in stream
//
// GOTCHA: mixing cin >> and getline() — the leftover '\n' from cin >> will
//         immediately terminate the next getline() call. Fix: use
//         std::cin >> std::ws  before getline, or cin.ignore().
// ============================================================

#include <iostream>

int main()
{
    std::cout << "Input a keyboard character: "; // assume user enters "a b"

    char ch{};
    std::cin >> ch; // extracts 'a', leaves " b\n" in stream
    std::cout << "You entered: " << ch << '\n';

    std::cin >> ch; // skips leading ' ', extracts 'b', leaves "\n" in stream
    std::cout << "You entered: " << ch << '\n';

    return 0;
}
