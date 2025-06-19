#include <iostream>

using namespace std;

class Mammal
{
public:
    Mammal()
    {
        cout << "I can give birth" << endl;
    }
};

class WingedAnimal
{
public:
    WingedAnimal()
    {
        cout << "I can fly!!" << endl;
    }
    void sleep()
    {
        cout << "I am a winged animal and i sleep";
    }
};
class Bat : public Mammal, public WingedAnimal
{
public:
    Bat()
    {
        cout << "I am a mammal and i am winged." << endl;
    }
};
int main()
{
    Bat b1;
    b1.WingedAnimal::sleep();
    // static_cast<WingedAnimal>(b1).sleep();
    return 0;
}