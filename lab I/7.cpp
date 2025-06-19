#include <iostream>
using namespace std;

void modify(int *x)
{
    *x = *x + 10;
    cout << "Inside function: " << *x << endl;
}

int main()
{
    int a = 5;
    modify(&a);
    cout << "Outside function: " << a << endl;
    cout << "By Samyam Humagain" << endl;
    return 0;
}
