#include <iostream>
#include "Fraction.h"
#include "Fraction.cpp"

    


int main() {

    Fraction fraction1{ 18, 5 };
    std::cout << fraction1 << std::endl;

    Fraction fraction2{ 15, 6 };
    std::cout << fraction2 << std::endl;
    std::cout << "simplify: " << fraction2.Simplify() << std::endl;

    std::cout << fraction1 << " == " << fraction2 << " result: " << (fraction1 == fraction2) << std::endl;
    std::cout << fraction1 << " > " << fraction2 << " result: " << (fraction1 > fraction2) << std::endl;

    std::cout << fraction1 << " + " << fraction2 << " result: " << (fraction1 + fraction2) << std::endl;
    std::cout << fraction1 << " * " << fraction2 << " result: " << (fraction1 * fraction2) << std::endl;

    Fraction fraction3;
    std::cout << "input fraction (numerator - denominator): \n";
    std::cin >> fraction3;
    std::cout << fraction3 << std::endl;
    std::cout << fraction3.ToFloat() << std::endl;

}