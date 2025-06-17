// 6. Overload >> for Rectangle
#include <iostream>
using namespace std;

class Rectangle
{
public:
    int length, breadth;
    friend istream &operator>>(istream &in, Rectangle &r)
    {
        in >> r.length >> r.breadth;
        return in;
    }
    void display() { cout << "Length: " << length << ", Breadth: " << breadth << endl; }
};

int main()
{
    Rectangle r;
    cout << "Enter length and breadth: ";
    cin >> r;
    r.display();
    return 0;
}