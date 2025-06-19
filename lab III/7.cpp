// 7. Overload * for Complex
#include <iostream>
using namespace std;

class Complex
{
public:
    int real, imag;
    Complex(int r = 0, int i = 0) : real(r), imag(i) {}
    Complex operator*(const Complex &c)
    {
        return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
    }
    void display() { cout << real << "+" << imag << "i" << endl; }
};

int main()
{
    Complex c1(3, 2), c2(1, 7);
    Complex c3 = c1 * c2;
    c3.display();
    cout << "By Samyam Humagain" << endl;
    return 0;
}