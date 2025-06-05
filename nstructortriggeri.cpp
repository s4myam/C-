#include <iostream>

using namespace std;

class Complex
{
    int real, imaginary;

public:
    void setdata(int rl, int im)
    {
        real = rl;
        imaginary = im;
    }
    void getdata()
    {
        cout << real << "+" << imaginary;
    }
    // Complex() {} // default constructor
    // Complex(int rl)
    // { // Parameterized Constructor
    //     real - rl;
    //     imaginary = 0;
    // }
    operator int()
    {
        return (real);
    }
};
int main()
{
    Complex c1; // creating object of class type
    int x = 5;
    x = c1;
    c1.getdata();
    return 0;
}
