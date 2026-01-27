#include <iostream>
#include <random>

int main() {
    std::cout << "Welcome to the number guesser game!\n";

    int minimum, maximum, guess;

    std::cout << "Enter minimum range: ";
    std::cin >> minimum;
    
    std::cout << "Enter maximum range: ";
    std::cin >> maximum;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(minimum, maximum);
    int randomNumber = distr(gen);

    std::cout << "What is your guess: ";
    std::cin >> guess;

    while (guess != randomNumber) {
        if (guess < randomNumber) {
            std::cout << "Higher! ";
        } else {
            std::cout << "Lower! ";
        }

        std::cout << "Guess again: ";
        std::cin >> guess;
    }

    std::cout << "You won! The number was " << randomNumber << ".\n";

    return 0;
}