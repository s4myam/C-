#include <iostream>

using namespace std;
class Student
{
    string name;

public:
    void setdata()
    {
        cout << "enter name:";
        cin >> name;
    }
    void getdata()
    {
        cout << name;
    }
};
int main()
{
    Student *st = new Student;
    st->setdata();
    st->getdata();
    delete st;
    return 0;
}