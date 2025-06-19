#include <iostream>
using namespace std;

int main()
{
    int a, b, choice;
    char cont;

    do
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;

        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
        cout << "Choose operation: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Sum: " << a + b << endl;
            break;
        case 2:
            cout << "Difference: " << a - b << endl;
            break;
        case 3:
            cout << "Product: " << a * b << endl;
            break;
        case 4:
            if (b != 0)
                cout << "Quotient: " << (float)a / b << endl;
            else
                cout << "Division by zero not allowed.\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }

        if (a > b)
            cout << a << " is greater.\n";
        else if (b > a)
            cout << b << " is greater.\n";
        else
            cout << "Both are equal.\n";

        cout << "Do you want to continue? (y/n): ";
        cin >> cont;

    } while (cont == 'y' || cont == 'Y');
    cout << "By Samyam Humagain" << endl;
    return 0;
}
