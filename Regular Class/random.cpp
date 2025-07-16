// EXAMPLE OF CLASS AND OBJECTS
//  ANYTHING WITH AN ATTRIBUTE AND A BEHAVIOR IS AN OBJECT
//  A BLUEPRINT OR A COLLECTION OF OBJECTS IS CALLED A CLASS.
#include <iostream>
using namespace std;

class Student
{
public:
    int rollno;
    string name;
    float gpa;
};
int main()
{
    Student s1, s2, s3; // Objects called

    s1.name = "Samyam";
    s1.gpa = 4.0;
    s1.rollno = 1431;

    s2.name = "Aryan";
    s2.rollno = 1401;
    s2.gpa = 4.0;

    s3.name = "Hardik";
    s3.rollno = 1441;
    s3.gpa = 4.0;

    cout << s1.name << endl;
    cout << s1.gpa << endl;
    cout << s1.rollno << endl;
}