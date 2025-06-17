#include <iostream>
using namespace std;

int main()
{
    float temp, converted;
    int choice;
    cout << "Temperature Converter\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter choice (1 or 2): ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        converted = (temp * 9 / 5) + 32;
        cout << "Temperature in Fahrenheit: " << converted << endl;
    }
    else if (choice == 2)
    {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        converted = (temp - 32) * 5 / 9;
        cout << "Temperature in Celsius: " << converted << endl;
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
