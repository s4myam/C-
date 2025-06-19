#include <iostream>
using namespace std;

int main()
{
    float balance, withdraw, deposit;
    cout << "Enter your account balance: ";
    cin >> balance;

    cout << "Enter amount to withdraw: ";
    cin >> withdraw;

    if (withdraw > balance)
    {
        cout << "Insufficient balance!\n";
    }
    else
    {
        balance -= withdraw;
        cout << "Withdrawal successful.\n";
    }

    cout << "Enter amount to deposit: ";
    cin >> deposit;
    balance += deposit;

    cout << "Updated Balance: " << balance << endl;
    cout << "By Samyam Humagain" << endl;
    return 0;
}
