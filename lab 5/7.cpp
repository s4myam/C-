#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void calculateSalary()
    {
        cout << "Base Employee Salary" << endl;
    }
};

class FullTimeEmployee : public Employee
{
public:
    void calculateSalary() override
    {
        cout << "Full Time Employee Salary: 50000" << endl;
    }
};

class PartTimeEmployee : public Employee
{
public:
    void calculateSalary() override
    {
        cout << "Part Time Employee Salary: 20000" << endl;
    }
};

int main()
{
    Employee *e1 = new FullTimeEmployee();
    Employee *e2 = new PartTimeEmployee();

    e1->calculateSalary();
    e2->calculateSalary();

    delete e1;
    delete e2;

    return 0;
}
