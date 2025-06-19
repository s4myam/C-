#include <iostream>
using namespace std;

class Box
{
private:
    int length, breadth, height;

public:
    Box()
    {
        length = breadth = height = 1;
    }
    Box(int side)
    {
        length = breadth = height = side;
    }
    Box(int l, int b, int h)
    {
        length = l;
        breadth = b;
        height = h;
    }
    int volume()
    {
        return length * breadth * height;
    }
};

int main()
{
    Box b1, b2(4), b3(2, 3, 5);
    cout << "Default box volume: " << b1.volume() << endl;
    cout << "Cube volume: " << b2.volume() << endl;
    cout << "Cuboid volume: " << b3.volume() << endl;
    cout << "By Samyam Humagain" << endl;
    return 0;
}
