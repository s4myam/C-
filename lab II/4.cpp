#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountHolder;
    int accountNumber;
    float balance;

public:
    void input()
    {
        cout << "Enter account holder name, account number and initial balance: ";
        cin >> accountHolder >> accountNumber >> balance;
    }
    void deposit(float amount)
    {
        balance += amount;
    }
    void withdraw(float amount)
    {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl;
    }
    void display()
    {
        cout << "Name: " << accountHolder << ", Account Number: " << accountNumber << ", Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b;
    b.input();
    b.deposit(500);
    b.withdraw(200);
    b.display();
    return 0;
}
