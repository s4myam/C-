#include <iostream>
using namespace std;

class Instrument
{
public:
    virtual void makeSound()
    {
        cout << "Instrument Playing!!....";
    }
};
class Piano : public Instrument
{
public:
    void makeSound()
    {
        cout << "Piano Playing...";
    }
};
int main()
{
    Instrument *ptr = new Piano; // Accessing functions using the pointer to the base class
    ptr->makeSound();
    return 0;
}