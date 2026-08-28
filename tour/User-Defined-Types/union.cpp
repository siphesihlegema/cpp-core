#include <iostream>

struct StructData {
  int i;    // 4 bytes (+ 4 bytes padding)
  double d; // 8 bytes
  char *s;  // 8 bytes
};

union UnionData {
  int i;    // 4 bytes
  double d; // 8 bytes
  char *s;  // 8 bytes
};

int main() {
  // sizeof(StructData) = 24 bytes (4 + 4 padding + 8 + 8)
  std::cout << "Struct size: " << sizeof(StructData) << '\n';

  // sizeof(UnionData) = 8 bytes (max(4, 8, 8))
  std::cout << "Union size:  " << sizeof(UnionData) << '\n';
}
