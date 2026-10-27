#include <iostream>
#include <string>

int GetValue() { return 10; } // This function returns a rvalue

void SetValue(const int &value) {}

// rvalue references can only take rvalues
void PrintName(std::string &&name) { std::cout << "rvalue " << name << "\n"; }

// lvalue references can only take lvalues unless they are const references
void PrintName(const std::string &name) {
  std::cout << "lvalue " << name << "\n";
}

int main() {
  int i = GetValue(); // Now we assigning i(lvalue) to GetValue(rvalue)
                      // lvalues have a location in memory but rvalue just
                      // return value.

  // SetValue() takes a const lvalue reference, this allows it to accept both
  // lvalues and even rvalue
  int j = 10;
  SetValue(i);  // i is a lvalue
  SetValue(10); // 10 is a rvlaue

  // the variable names are lvalue
  std::string firstName = "Sphere";
  std::string lastName = "Gema";

  std::string fullName =
      firstName +
      lastName; // the names being added hear creat an temporary
                // variable which will be assigned
                //   to fullName, thus the right hand side is rvalue.

  PrintName(fullName);
  PrintName(firstName + lastName);
}
