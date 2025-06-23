#include <iostream>

using namespace std;

class Car
{

protected:
    int speed;

public:
    Car()
    {
        speed = 0;
    }
    void accelerate()
    {
        speed += 5;
    }
    void brake()
    {
        speed -= 5;
    }
    void showSpeed()
    {
        cout << "Speed:" << speed << "km/h";
    }
    void running()
    {
        cout << "The car is running" << endl;
    }
};

int main()
{
    Car c1;
    bool isRunning = true;
    if (isRunning)
    {
        c1.running();
        c1.accelerate();
        c1.showSpeed();
    }
    return 0;
}
