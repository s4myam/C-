#include <iostream>

using namespace std;

class Complex
{
    int real, imag;

public:
    Complex(int i, int r)
    {
        real = r;
        imag = i;
    }
    Complex operator+(Complex c)
    {
        return Complex(real + c.real, imag + c.imag);
    }
};