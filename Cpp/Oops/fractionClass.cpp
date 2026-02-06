#include<iostream>
using namespace std;

class Fraction
{
public:
    int num;
    int den;

    Fraction(int num, int den)
    {
        this->num = num;
        this->den = den;
    }

    // GCD using Euclidean algorithm
    int gcd(int a, int b)
    {
        if (b == 0) return a;
        return gcd(b, a % b);
    }

    Fraction simplify(Fraction f)
    {
        int g = gcd(f.num, f.den);
        return Fraction(f.num / g, f.den / g);
    }

    Fraction add(Fraction f)
    {
        int newNum = this->num * f.den + f.num * this->den;
        int newDen = this->den * f.den;
        return simplify(Fraction(newNum, newDen));
    }

    Fraction operator + (Fraction f)
    {
        return add(f);
    }

    Fraction operator - (Fraction f)
    {
        int newNum = this->num * f.den - f.num * this->den;
        int newDen = this->den * f.den;
        return simplify(Fraction(newNum, newDen));
    }

    Fraction operator * (Fraction f)
    {
        int newNum = this->num * f.num;
        int newDen = this->den * f.den;
        return simplify(Fraction(newNum, newDen));
    }

    Fraction operator / (Fraction f)
    {
        int newNum = this->num * f.den;
        int newDen = this->den * f.num;
        return simplify(Fraction(newNum, newDen));
    }

    void display()
    {
        cout << num << " / " << den << endl;
    }
};

int main()
{
    Fraction f1(3, 4);
    Fraction f2(4, 5);
    f1.display();
    f2.display();

    Fraction f3 = f1.add(f2);
    Fraction f4 = f1 + f2;
    f3.display();
    f4.display();

    Fraction f5 = f1 - f2;
    f5.display();

    Fraction f6 = f1 * f2;
    f6.display();

    Fraction f7 = f1 / f2;
    f7.display();
}
