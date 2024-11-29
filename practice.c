#include <iostream>

int main() {
    int number;

    // Ask the user for a number
    std::cout << "Enter a number: ";
    std::cin >> number;

    // If-else statement to check if the number is positive, negative, or zero
    if (number > 0) {
        std::cout << "The number is positive.\n";
    } else if (number < 0) {
        std::cout << "The number is negative.\n";
    }
    else {
        std::cout << "The number is zero.\n";
    }
       return 0;
}
