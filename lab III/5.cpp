// 5. Overload << for Student
#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    Student(string n = "", int r = 0) : name(n), roll(r) {}
    friend ostream &operator<<(ostream &out, const Student &s)
    {
        out << "Name: " << s.name << ", Roll: " << s.roll;
        return out;
    }
};

int main()
{
    Student s("Samyam", 25);
    cout << s << endl;
    cout << "By Samyam Humagain" << endl;
    return 0;
}
