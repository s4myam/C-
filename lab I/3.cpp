#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 > num2)
        cout << num1 << " is larger.\n";
    else if (num2 > num1)
        cout << num2 << " is larger.\n";
    else
        cout << "Both numbers are equal.\n";

    cout << num1 << " is " << (num1 % 2 == 0 ? "even\n" : "odd\n");
    cout << num2 << " is " << (num2 % 2 == 0 ? "even\n" : "odd\n");
    cout << "By Samyam Humagain" << endl;
    return 0;
}
