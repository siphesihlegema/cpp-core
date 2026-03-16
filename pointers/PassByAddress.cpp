#include <iostream>
#include <string>

void passbyaddress(const std::string* ptr) 
{
    std::cout << *ptr << "\n";    
}

void safe(std::string* ptr) {
    if(!ptr)
        return;
    std::cout << *ptr << "\n";
}

int main() {
    
    std::string str {"Hello"};
    std::string* strptr = &str;
    passbyaddress(strptr);

    strptr = nullptr;

    safe(strptr);



    return 0;

}
