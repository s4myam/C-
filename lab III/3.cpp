// 3. Overload == for Point
#include <iostream>
using namespace std;

class Point
{
public:
    int x, y;
    Point(int x = 0, int y = 0) : x(x), y(y) {}
    bool operator==(const Point &p)
    {
        return x == p.x && y == p.y;
    }
};

int main()
{
    Point p1(3, 4), p2(3, 4);
    cout << (p1 == p2 ? "Equal" : "Not Equal") << endl;
    return 0;
}