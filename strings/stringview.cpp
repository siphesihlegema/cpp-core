/* Ok so basicaly when you instanciate a std::sring you create a copy of the string
 * into the variable.
 * this is ok with fundamental types but with string its too slow because it think
 * its because you can never be sure of the size of a string its memory is allocated
 * at run time.
 * */

#include <iostream>
#include <string>
#include <string>
#include <string_view>

void strr(std::string_view enter)
{
    std::cout << enter << "\n";
}

int main() {
    std::string str{"Hello world"}; // this is a C-style string that creates a copy.
    
    // Now to solve this we introduce std::string_veiw, wich was introduced in c++17.
    
    /*string_veiw solve this problem y only providing read-only access to an existing
     * string, without making a copy. 
     * Read only means we can access and use the value, but we can not modify it.
     */
    std::string_view s{"hola"};
    strr(s);
    
    /* When we initialize std::string_view s with C-style string literal "hola",
     * s provides read-only access to “hola” without making a copy of the string.
     * When we pass s to strr(), parameter enter is initialized from s.
     * This allows us to access “hola” through s, again without making a copy of the string.
     *
     * std::string_view can be initialized with many different types of strings.
     * */

    return 0;
    }
