#include <iostream>
using namespace std;

class Distance
{
private:
    int feet, inches;

public:
    void input()
    {
        cout << "Enter feet and inches: ";
        cin >> feet >> inches;
    }
    Distance add(Distance d2)
    {
        Distance result;
        result.inches = inches + d2.inches;
        result.feet = feet + d2.feet + result.inches / 12;
        result.inches %= 12;
        return result;
    }
    void display()
    {
        cout << "Distance: " << feet << " feet " << inches << " inches" << endl;
    }
};

int main()
{
    Distance d1, d2, d3;
    d1.input();
    d2.input();
    d3 = d1.add(d2);
    d3.display();
    cout << "By Samyam Humagain" << endl;
    return 0;
}
