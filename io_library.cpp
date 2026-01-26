#include <iostream> // input/output stream

int main() {

    // <<(insertion operator)
    //std::cout << "Hello world" << "\n";

    // we can use the insertion operator tp print more than one thing in the same line
    //std::cout << "Pleas " << "give the repo a " << "star" << "\n";

    // >> (Extraction operator)
    // std::cin stand for character in

    int x;
    int y;
    std::cout << "Enter a numbers: ";

    std::cin >> x >> y;
    
    std::cout << x << " " << y << '\n';

    return 0;
}