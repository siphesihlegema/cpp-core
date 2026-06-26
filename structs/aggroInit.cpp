// ============================================================
// AGGREGATE INITIALIZATION + OPERATOR<< OVERLOADING — Quick Reference
// ============================================================
// AGGREGATE INITIALIZATION:
//   A struct/class with no user-declared constructors, no private data members,
//   and no virtual functions can be initialized with a brace-list:
//
//   Point p {1, 2, 3};   // initializes x=1, y=2, z=3 in declaration order
//   Point pt;             // members are value-initialized (zero for arithmetic
//   types)
//                         // because of the '= {}' in-class member initializers
//
//   In-class member initializers:
//     double x {};        // default = 0.0
//     double y = {};      // same as above
//     double z = {};      // same
//
// OPERATOR<< OVERLOADING:
//   Allows custom types to be printed with std::cout << obj.
//
//   Signature: std::ostream& operator<<(std::ostream& out, const MyType& obj)
//     - Returns std::ostream& so calls can be chained: cout << a << b
//     - Takes the stream by non-const reference (must modify it)
//     - Takes the object by const reference (read-only, no copy)
//     - Must return 'out' at the end
//
//   Typically defined as a free function (not a member), so it can be used with
//   std::cout.
// ============================================================

#include <print>

#include <iostream>
#include <iterator>
#include <ostream>

struct Point {
  double x{}; // default-initialized to 0.0
  double y = {};
  double z = {};
};

// Free function: overloads << so Point objects can be streamed to any ostream
std::ostream &operator<<(std::ostream &out, const Point &e) {
  out << e.x << " " << e.y << " " << e.z;
  return out; // must return out for chaining
}

int main() {
  Point p{1, 2, 3}; // aggregate init: x=1, y=2, z=3
  Point pt;         // all members = 0.0 (from in-class initializers)

  std::cout << p.z << "\n";  // 3
  std::cout << pt.z << "\n"; // 0

  std::cout << p << "\n"; // uses overloaded << → prints "1 2 3"

  return 0;
}
