#include <iostream>

using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base constructor \n";
    }
    virtual ~Base()
    {

        cout << "Base deconstructor \n";
    }
};

class Derived : public Base
{
public:
    Derived() : Base()
    {
        cout << "derived constructor \n";
    }
    ~Derived()
    {
        cout << "derived destructor \n";
    }
};
int main()
{
    Base *ptr = new Derived;
    delete ptr;
    return 0;
}