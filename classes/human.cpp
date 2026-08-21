#include <iostream>

class Human {
public:
  std::string name;

  void eat() { std::cout << "eating" << "\n"; }
};

int main() {
  Human man;
  man.name = "bob";

  std::cout << man.name << "\n";
  man.eat();
}
