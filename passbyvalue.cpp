#include <iostream>

using namespace std;
void swap(int, int);
int main()
{
    int x = 5, y = 20;
    swap(x, y);
    cout << "calling function" << endl;
    cout << "x=" << x << endl
         << "y=" << y;
    return 0;
}
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "called function" << endl;
    cout << "x=" << x << endl
         << "y=" << y << endl;
}