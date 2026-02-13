#include <iostream>

int two(int x);

int main(){
    std::cout << two(3);
    return 0;
}

int two(int x){
    x=2;
    return x;
}