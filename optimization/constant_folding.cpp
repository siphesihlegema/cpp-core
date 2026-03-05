/* Constant folding is an optimization technique where the
   compiler replaces expressions that have literal operands
   with the result of the expression
*/

#include <iostream>

int main()
{
	std::cout << 3 + 4 << '\n'; // this is just std::cout << 7 << '\n';

    // constent propagation
    int x {7};
    std::cout << x << "\n";

    /*
     * This optimization techiques the compiler relaces the varibales
     * with the value they are storing. this only happens if the variable 
     * is storing a constant value
    */


	return 0;
}
