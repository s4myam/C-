#include <iostream>
using namespace std;
class student
{                // start of hte class definition
public:          // access specifier
    string name; // reperesenting attributes of the object using variables
    int rollno;

public: // access specifier
    // reperesnting behavior of the object using methods

    void setdata(string studentname, int studentroll)
    { // setter-->to set the data members
        name = studentname;
        rollno = studentroll;
    }
    void getdata()
    {
        cout << "the name of the student is:" << name << endl;
        cout << "the roll number of the student is:" << rollno;
    }
}; // end of the class definition

int main()
{ // start of the main function
    student s1, s2;
    s1.name = "samyam";
    s1.rollno = 100;
    s1.getdata();
    return 0;
}
