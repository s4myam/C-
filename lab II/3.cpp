#include <iostream>
using namespace std;

class Time
{
public:
    int hours, minutes;

    void input()
    {
        cout << "Enter hours and minutes: ";
        cin >> hours >> minutes;
    }

    Time add(Time t2)
    {
        Time temp;
        temp.minutes = minutes + t2.minutes;
        temp.hours = hours + t2.hours + temp.minutes / 60;
        temp.minutes %= 60;
        return temp;
    }

    void display()
    {
        cout << "Time: " << hours << " hrs " << minutes << " mins" << endl;
    }
};

int main()
{
    Time t1, t2, sum;
    t1.input();
    t2.input();
    sum = t1.add(t2);
    sum.display();
    cout << "By Samyam Humagain" << endl;
    return 0;
}
