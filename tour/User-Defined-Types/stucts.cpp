#include <iostream>

struct Vector {
  int size;
  double *elem; // matched with v.elem
};

void vector_init(Vector &v, int s) {
  v.elem = new double[s];
  v.size = s;
}

double read_and_sum(int s) {
  Vector v;
  vector_init(v, s);

  for (int i = 0; i != s; ++i) {
    std::cin >> v.elem[i];
  }

  double sum = 0;
  for (int i = 0; i != s; ++i) {
    sum += v.elem[i];
  }

  delete[] v.elem; // Prevent the memory leak
  return sum;
}

int main() { std::cout << "Sum: " << read_and_sum(3) << '\n'; }
