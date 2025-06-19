#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    float d = 45.6, f = 78.9;
    cout << "enter values of a & b:" << endl;
    cin >> a >> b;
    c = pow(a, b);
    cout << b << "Power of" << a << ":" << c << endl;
}