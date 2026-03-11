#include <iostream>

int main()
{
    auto d { 5.0 }; // 5.0 is a double literal, so d will be deduced as a double
    auto i { 1 + 2 }; // 1 + 2 evaluates to an int, so i will be deduced as an int
    auto x { i }; // i is an int, so x will be deduced as an int
    
    int val = 5;
    int& ref = val;
    const int c_val = 10;

    auto a = val;   // a is an int
    auto b = ref;   // b is an int (reference is dropped, b is a copy of val)
    auto c = c_val; // c is an int (const is dropped, c is a copy of c_val)
    
    auto s { "Hello, world" }; // s will be type const char*, not std::string
    // if you want the type deduce to be std::string or std::string_view,
    // you need to use s or sv literal suffixes.
    
    using namespace std::literals; // easiest way to access the s and sv suffixes

    auto s1 { "goo"s };  // "goo"s is a std::string literal, so s1 will be deduced as a std::string
    auto s2 { "moo"sv }; // "moo"sv is a std::string_view literal, so s2 will be deduced as a std::string_view

    return 0;
}
