// 10. Overload += for Money
#include <iostream>
using namespace std;

class Money
{
public:
    int rupees, paise;
    Money(int r = 0, int p = 0) : rupees(r), paise(p) {}
    Money operator+=(const Money &m)
    {
        paise += m.paise;
        rupees += m.rupees + paise / 100;
        paise %= 100;
        return *this;
    }
    void display() { cout << rupees << " rupees " << paise << " paise" << endl; }
};

int main()
{
    Money m1(10, 75), m2(5, 50);
    m1 += m2;
    m1.display();
    cout << "By Samyam Humagain" << endl;
    return 0;
}
