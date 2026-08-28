#include <iostream>

union test {
  int a;
  char b;
};

int main() {
  test test;

  test.a = 65;

  std::cout << test.a << " ... " << test.b << "\n";

  test.b = 'Z'; // ASCII 'Z' is 90 (01011010), written into byte 0x1000
  std::cout << test.b << '\n'; // Prints: 'Z'

  // 4. 'a' has now been modified because its lowest byte was overwritten
  std::cout << test.a << '\n';
}
