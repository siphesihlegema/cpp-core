#include <iterator>
#include <ostream>
#include <print>
#include <iostream>

struct Point { double x {}; double y = {}; double z = {};};

std::ostream& operator<<(std::ostream& out, const Point& e) {
    out << e.x << " " << e.y << " " << e.z;
    return out;
}

int main() {

    Point p {1, 2, 3};
    Point pt;

    std::cout << p.z << "\n";
    std::cout << pt.z << "\n";

    std::cout << p << "\n";

    return 0;
}
