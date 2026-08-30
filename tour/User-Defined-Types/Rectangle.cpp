#include <cmath>

#include <iostream>

class Rectangle {
public:
  int width, height;

  Rectangle() : width{}, height{} {}

  Rectangle(int w, int h) : width(w), height(h) {}

  // Copy constructor
  Rectangle(const Rectangle &other) : width(other.width), height(other.height) {
    std::cout << "copy constructor called\n";
  }

  // Copy assignment operator
  Rectangle &operator=(const Rectangle &other) {
    if (this == &other) {
      return *this;
    }
    width = other.width;
    height = other.height;
    std::cout << "Copy assignment operator called.\n";
    return *this;
  }
};
