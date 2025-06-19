#include <iostream>
using namespace std;
class Myclass
{
public:
    int num;
    string name;
};

int main()
{
    Myclass myObj;

    myObj.num = 10;
    myObj.name = "Samyam";

    cout << myObj.num << "\n";
    cout << myObj.name << "\n";
    return 0;
}