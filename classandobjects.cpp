#include <iostream>

using namespace std;

class cars
{
public:
    string brand;
    string model;
    int year;
};

int main()
{
    cout << "Different Cars with their info" << endl;
    cars carObj1;
    carObj1.brand = "Keoniggaseg";
    carObj1.model = "CXR";
    carObj1.year = 1982;

    cars carObj2;
    carObj2.brand = "BMW";
    carObj2.model = "ZXR";
    carObj2.year = 1990;

    cout << carObj1.brand << "\n"
         << carObj1.model << "\n"
         << carObj1.year << endl;
    cout << carObj2.brand << "\n"
         << carObj2.model << "\n"
         << carObj2.year << endl;
    return 0;
}