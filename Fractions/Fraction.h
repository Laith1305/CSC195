#pragma once
#include <functional>
#include <iostream>
#include "Fraction.cpp"


namespace mathlib {

    class Fraction {

            Fraction Simplify(int numerator, int denominator); :
                    //# Find the greatest common divisor(GCD)
                    gcd = findGCD(abs(numerator), abs(denominator))


                    //# Divide both numerator and denominator by the GCD
                    simplifiedNumerator = numerator / gcd
                    simplifiedDenominator = denominator / gcd

                    //# Handle sign(keep sign in numerator)
                    if denominator < 0:
                simplifiedNumerator = -simplifiedNumerator
                simplifiedDenominator = -simplifiedDenominator

                return Fraction(simplifiedNumerator, simplifiedDenominator)
                
                function findGCD(a, b) :
                    //# Euclidean algorithm to find GCD
                    while b != 0:
                temp = b
                b = a % b
                a = temp
                return a
    };

}
