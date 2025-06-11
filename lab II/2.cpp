#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int id;
    float salary;

public:
    void input()
    {
        cout << "Enter name, id and salary: ";
        cin >> name >> id >> salary;
    }
    void display()
    {
        cout << "Name: " << name << ", ID: " << id << ", Salary: " << salary << endl;
    }
};

int main()
{
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    Employee e[n];
    for (int i = 0; i < n; i++)
    {
        e[i].input();
    }
    for (int i = 0; i < n; i++)
    {
        e[i].display();
    }
    return 0;
}
