#include <iostream>

bool is_leap_year(unsigned int Y) {
    // A year is a leap year if it is divisible by 4, except for years that are divisible by 100 but not by 400
    return (Y % 4 == 0) && (Y % 100 != 0 || Y % 400 == 0);
}

int main() {
    unsigned int Y; 
    
    std::cout << "Enter a year: ";
    std::cin >> Y;

    if (is_leap_year(Y)) {
        std::cout << "True. \n";
    } else {
        std::cout << "False. \n";
    }

    return 0;
}
