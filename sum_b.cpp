#include <iostream>

int main() {
    double sum = 0.0;
    for (int num = 1, denom = 3; num <= 95; num += 2, denom += 2) {
        sum += static_cast<double>(num) / denom;
    }
    std::cout << "The sum of the series is: " << sum << "\n";
    return 0;
}
