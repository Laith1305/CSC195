#pragma once
#include <iostream>
#include <numeric>
#include <stdexcept>

namespace mathlib {

    template<typename T>
    class Fraction {
    private:
        T numerator;
        T denominator;

        static T findGCD(T a, T b) {
            while (b != 0) {
                T temp = b;
                b = a % b;
                a = temp;
            }
            return a;
        }

    public:
        Fraction(T num = 0, T den = 1) {
            if (den == 0)
                throw std::invalid_argument("Denominator cannot be zero.");
            if (den < 0) { // Normalize sign
                num = -num;
                den = -den;
            }
            numerator = num;
            denominator = den;
        }

        Fraction<T> Simplify() const {
            T gcd = findGCD(std::abs(numerator), std::abs(denominator));
            T simpNum = numerator / gcd;
            T simpDen = denominator / gcd;
            if (simpDen < 0) {
                simpNum = -simpNum;
                simpDen = -simpDen;
            }
            return Fraction<T>(simpNum, simpDen);
        }

        double ToFloat() const {
            return static_cast<double>(numerator) / denominator;
        }

        // Arithmetic operators
        Fraction<T> operator+(const Fraction<T>& rhs) const {
            return Fraction<T>(numerator * rhs.denominator + rhs.numerator * denominator,
                denominator * rhs.denominator).Simplify();
        }

        Fraction<T> operator-(const Fraction<T>& rhs) const {
            return Fraction<T>(numerator * rhs.denominator - rhs.numerator * denominator,
                denominator * rhs.denominator).Simplify();
        }

        Fraction<T> operator*(const Fraction<T>& rhs) const {
            return Fraction<T>(numerator * rhs.numerator,
                denominator * rhs.denominator).Simplify();
        }

        Fraction<T> operator/(const Fraction<T>& rhs) const {
            if (rhs.numerator == 0)
                throw std::invalid_argument("Division by zero fraction.");
            return Fraction<T>(numerator * rhs.denominator,
                denominator * rhs.numerator).Simplify();
        }

        // Comparison operators
        bool operator==(const Fraction<T>& rhs) const {
            Fraction<T> a = this->Simplify();
            Fraction<T> b = rhs.Simplify();
            return a.numerator == b.numerator && a.denominator == b.denominator;
        }

        bool operator!=(const Fraction<T>& rhs) const { return !(*this == rhs); }

        bool operator<(const Fraction<T>& rhs) const {
            return numerator * rhs.denominator < rhs.numerator * denominator;
        }

        bool operator>(const Fraction<T>& rhs) const {
            return numerator * rhs.denominator > rhs.numerator * denominator;
        }

        bool operator<=(const Fraction<T>& rhs) const {
            return !(*this > rhs);
        }

        bool operator>=(const Fraction<T>& rhs) const {
            return !(*this < rhs);
        }

        // Friend functions for stream operators
        friend std::ostream& operator<<(std::ostream& os, const Fraction<T>& f) {
            os << f.numerator << "/" << f.denominator;
            return os;
        }

        friend std::istream& operator>>(std::istream& is, Fraction<T>& f) {
            T num, den;
            is >> num >> den;
            if (den == 0) {
                throw std::invalid_argument("Denominator cannot be zero.");
            }
            f = Fraction<T>(num, den);
            return is;
        }
    };

} // namespace mathlib
