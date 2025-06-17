// 2. Overload - for Time
#include <iostream>
using namespace std;

class Time
{
public:
    int hours, minutes;
    Time(int h = 0, int m = 0) : hours(h), minutes(m) {}
    Time operator-(const Time &t)
    {
        int total_min1 = hours * 60 + minutes;
        int total_min2 = t.hours * 60 + t.minutes;
        int diff = total_min1 - total_min2;
        return Time(diff / 60, diff % 60);
    }
    void display() { cout << hours << " hrs " << minutes << " mins" << endl; }
};

int main()
{
    Time t1(4, 30), t2(2, 45);
    Time t3 = t1 - t2;
    t3.display();
    return 0;
}