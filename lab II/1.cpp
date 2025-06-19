#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    float marks;

public:
    void input()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter marks: ";
        cin >> marks;
    }
    void display()
    {
        cout << "Name: " << name << "\nRoll: " << roll << "\nMarks: " << marks << endl;
    }
};

int main()
{
    Student s;
    s.input();
    s.display();
    cout << "By Samyam Humagain" << endl;
    return 0;
}
