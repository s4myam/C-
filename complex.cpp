#include <iostream>
using namespace std;

class Complex
{
private:
    int i, r;

public:
    Complex() {};
    Complex(int i_, int r_)
    {
        r = r_;
        i = i_;
    }

    Complex add(Complex c1, Complex c2)
    {
        Complex temp;
        temp.r = c1.r + c2.r;
        temp.i = c1.i + c2.i;
        return temp;
    }
    void getData()
    {
        cout << r << "+" << i << "j";
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.r = this->r + c.r;
        temp.i = this->i + c.i;
        return temp;
        //  this->r+=10;
        //  this->i+=10;
        //  return *this;
    }
    Complex operator-(Complex c)
    {
        Complex temp;
        temp.r = this->r - c.r;
        temp.i = this->i - c.i;
        return temp;
    }
    Complex operator++(int)
    {
        this->r += 1;
        this->i += 1;
        return *this;
    }
    Complex operator--()
    {
        this->r -= 1;
        this->i -= 1;
        return *this;
    }
};
int main()
{
    Complex c1(2, 2),
        c2(3, 3), c3, c4;
    c3 = c1 + c2;
    // c4 = c1 - c2;
    // ++c1;
    // --c1;
    (++c1).getData();
    c1++;
    //--c1;
}