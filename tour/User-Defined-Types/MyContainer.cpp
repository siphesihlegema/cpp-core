#include <iostream>
#include <vector>

class Vector {
private:
  std::vector<int> elements;

public:
  Vector() : elements(10) {
    for (int i{}; i < 10; ++i) {
      elements[i] = i;
    }
  }

  Vector(const Vector &other) : elements(other.elements) {
    std::cout << " Copy constructor called\n";
  }

  void printElements() const {
    for (int elem : elements) {
      std::cout << elem << " ";
    }
  }
};

int main() {
  Vector vector1;
  vector1.printElements();

  Vector vector2 = vector1;
  vector2.printElements();
}
