#include <iostream>
using namespace std;

int main()
{
    int num;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
        cout << "Factorial of negative number doesn't exist.";
    else
    {
        for (int i = 1; i <= num; ++i)
        {
            factorial *= i;
        }
        cout << "Factorial of " << num << " = " << factorial << endl;
    }
    cout << "By Samyam Humagain" << endl;
    return 0;
}
