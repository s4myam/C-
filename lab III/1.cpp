// 1. Overload + for Distance
#include <iostream>
using namespace std;

class Distance
{
public:
    int feet, inches;
    Distance(int f = 0, int i = 0) : feet(f), inches(i) {}
    Distance operator+(const Distance &d)
    {
        int total_inches = inches + d.inches;
        int total_feet = feet + d.feet + total_inches / 12;
        total_inches %= 12;
        return Distance(total_feet, total_inches);
    }
    void display() { cout << feet << " feet " << inches << " inches" << endl; }
};

int main()
{
    Distance d1(5, 8), d2(3, 11);
    Distance d3 = d1 + d2;
    d3.display();
    cout << "By Samyam Humagain" << endl;
    return 0;
}