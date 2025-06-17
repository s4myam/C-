#include <iostream>
using namespace std;

int area(int side)
{
    return side * side;
}

int area(int length, int breadth)
{
    return length * breadth;
}

int main()
{
    cout << "Area of square (5): " << area(5) << endl;
    cout << "Area of rectangle (5x10): " << area(5, 10) << endl;
    return 0;
}
