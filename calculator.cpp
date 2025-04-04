#include "calculator.h"
#include <cstdlib>
#include <ctime>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    if (b == 0)
        return -1.0; 
    return static_cast<double>(a) / b;
}

int factorial(int n) {
    if (n < 0)
        return -1;
    int result = 1;
    for (int i = 2; i <= n; ++i)
        result *= i;
    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    if (a == 0 || b == 0)
        return 0;
    return (a * b) / gcd(a, b);
}

int generateRandom(int lower, int upper) {
    if (lower > upper)
        return -1;
    std::srand(std::time(0));
    return lower + std::rand() % (upper - lower + 1);
}

