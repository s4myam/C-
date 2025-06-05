#include <iostream>

using namespace std;
class EquilateralTriangle
{
private:
    float a, circumference, area;

public:
    void setA(float length)
    {
        a = length;
        circumference = a * 3;
        area(1.73 * a * a) / 4;
    }
    friend void printResult(EquilateralTriangle);
};
void printResult(EquilateralTriangle et)
{
    cout << "circumference is: " << et.circumference << endl;
    cout << "area is:" << et.area;
}
int main(){
    
}

