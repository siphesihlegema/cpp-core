// ============================================================
// iostream — Input / Output Quick Reference
// ============================================================
// #include <iostream> provides:
//   std::cout  — standard output stream (character out)
//   std::cin   — standard input stream  (character in)
//   std::cerr  — standard error stream (unbuffered)
//   std::clog  — standard log stream (buffered)
//
// Operators:
//   << (insertion)   — sends data INTO an output stream
//                      std::cout << value;
//                      Chain: std::cout << a << b << '\n';
//
//   >> (extraction)  — reads data FROM an input stream into a variable
//                      std::cin >> x;
//                      Chain: std::cin >> x >> y;  (reads two values separated by whitespace)
//
// '\n' vs std::endl:
//   '\n'        — outputs a newline character (fast)
//   std::endl   — outputs '\n' AND flushes the buffer (slower; avoid in loops)
// ============================================================

#include <iostream>

int main() {
    int x;
    int y;
    std::cout << "Enter two numbers: ";

    std::cin >> x >> y; // reads two whitespace-separated integers

    std::cout << x << " " << y << '\n';

    return 0;
}
