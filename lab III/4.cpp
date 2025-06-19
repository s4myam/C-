// 4. Overload prefix ++ for Counter
#include <iostream>
using namespace std;

class Counter
{
public:
    int count;
    Counter(int c = 0) : count(c) {}
    Counter operator++()
    {
        return Counter(++count);
    }
    void display() { cout << "Count: " << count << endl; }
};

int main()
{
    Counter c(5);
    ++c;
    c.display();
    cout << "By Samyam Humagain" << endl;
    return 0;
}