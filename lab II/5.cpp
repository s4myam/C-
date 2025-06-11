#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    void input()
    {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }
    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
        if (age >= 18)
            cout << "Eligible to vote." << endl;
        else
            cout << "Not eligible to vote." << endl;
    }
};

int main()
{
    Person p;
    p.input();
    p.display();
    return 0;
}
