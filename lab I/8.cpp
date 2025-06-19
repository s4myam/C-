#include <iostream>
using namespace std;

int main()
{
    int num, reversed = 0, digit;
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0)
    {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    cout << "Reversed Number: " << reversed << endl;
    cout << "By Samyam Humagain" << endl; 
    return 0;
}
