#include <iostream>

using namespace std;
class Student
{
public:
    int rollno;
    static string cname;
    static void printroll()
    {
        cout << cname;
    }
    void printname()
    {
        cout << rollno << cname;
    }
};

string Student::cname = "ABCD";
int main()
{
    Student s1, s2;
    s1.rollno = 100;
    s2.rollno = 200;
    cout << s1.rollno << "\t" << s1.cname << endl;
    cout << s2.rollno << "\t" << s2.cname << endl;

    Student::cname = "XYZ";

    Student::printroll();
    s1.printname();

    return 0;
}
