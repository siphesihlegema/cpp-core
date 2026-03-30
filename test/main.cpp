// ============================================================
// FUNCTIONS — Basic Return Value Example
// ============================================================
// Demonstrates a function that reads user input and returns a value,
// which is then used in main.
//
// Pattern:
//   - Functions should do one thing (single responsibility)
//   - Return values propagate data from function back to caller
//   - The return value can be stored in a variable or used directly
// ============================================================

#include <iostream>

// Reads one integer from the user and returns it
int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    return input; // value is returned to the caller
}

int main()
{
    int num { getValueFromUser() }; // stores the returned value

    std::cout << num << " doubled is: " << num * 2 << '\n';

    return 0;
}
