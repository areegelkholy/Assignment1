#include <iostream>
#include "calculator.h"

int main() {
    int a = 10, b = 5;

    std::cout << "Addition: " << add(a, b) << std::endl;
    std::cout << "Subtraction: " << subtract(a, b) << std::endl;
    std::cout << "Multiplication: " << multiply(a, b) << std::endl;

    double divResult = divide(a, b);
    if (divResult == -1.0)
        std::cout << "Division error: Cannot divide by zero." << std::endl;
    else
        std::cout << "Division: " << divResult << std::endl;

    int fact = factorial(5);
    if (fact == -1)
        std::cout << "Factorial error: Negative input." << std::endl;
    else
        std::cout << "Factorial of 5: " << fact << std::endl;

    std::cout << "GCD of 48 and 18: " << gcd(48, 18) << std::endl;
    std::cout << "LCM of 4 and 6: " << lcm(4, 6) << std::endl;

    int randNum = generateRandom(1, 100);
    if (randNum == -1)
        std::cout << "Random number error: Invalid range." << std::endl;
    else
        std::cout << "Random number between 1 and 100: " << randNum << std::endl;

    return 0;
}

