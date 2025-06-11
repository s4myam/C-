#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    static int count;

public:
    Student()
    {
        count++;
    }
    void input()
    {
        cout << "Enter name and roll: ";
        cin >> name >> roll;
    }
    void display()
    {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
    static void showCount()
    {
        cout << "Total number of students: " << count << endl;
    }
};

int Student::count = 0;

int main()
{
    Student s1, s2, s3;
    s1.input();
    s2.input();
    s3.input();
    s1.display();
    s2.display();
    s3.display();
    Student::showCount();
    return 0;
}
