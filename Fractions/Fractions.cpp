#include <iostream>
#include "Fraction.h"

using namespace mathlib;

int main()
{
    Fraction<int> fraction1{ 18, 5 };
    std::cout << "Fraction 1: " << fraction1 << std::endl;

    Fraction<int> fraction2{ 15, 6 };
    std::cout << "Fraction 2: " << fraction2 << std::endl;

    std::cout << "Simplify Fraction 2: " << fraction2.Simplify() << std::endl;

    std::cout << fraction1 << " == " << fraction2 << " result: " << (fraction1 == fraction2) << std::endl;
    std::cout << fraction1 << " > " << fraction2 << " result: " << (fraction1 > fraction2) << std::endl;

    std::cout << fraction1 << " + " << fraction2 << " result: " << (fraction1 + fraction2) << std::endl;
    std::cout << fraction1 << " * " << fraction2 << " result: " << (fraction1 * fraction2) << std::endl;

    Fraction<int> fraction3;
    std::cout << "Input fraction (numerator then denominator): ";
    std::cin >> fraction3;
    std::cout << "You entered: " << fraction3 << std::endl;
    std::cout << "As float: " << fraction3.ToFloat() << std::endl;

    // Template test
    Fraction<long> fractionLong{ 123456789, 987654321 };
    std::cout << "Long fraction: " << fractionLong.Simplify() << std::endl;

    return 0;
}
