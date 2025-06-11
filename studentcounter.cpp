#include <iostream>

using namespace std;

class Counter
{
protected:
    int count;

public:
    Counter()
    {
        count = 0;
    }
    Counter(int c)
    {
        count = c;
    }
    void getCount()
    {
        cout << "Total no of students is: " << count;
    }
    Counter operator++()
    {
        this->count += 1;
        return *this;
    }
};
class CountDr : public Counter
{
public:
    CountDr operator--()
    {
        this->count -= 1;
        return *this;
    }
};
int main()
{
    Counter c1;
    ++c1;
    ++c1;
    c1.getCount();
}