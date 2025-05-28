#include <iostream>

using namespace std;

int main()
{
    int result, value,valchange;
    float f, c;
    f=(c*9.0/5)+32;
    c=(f-32)*(5.0/9);
    cout << "Enter the value of temperature \n" << endl;
    cin >> value;
    cout << "Enter the type of conversion we want to perform to the given temperature"
         << "1)Celsius to Fahrenheit \n"
         << "2)Fahrenheit to Celsius"
         << endl;
         switch(valchange){
            case '1':
            cout<<"The conversion of temperature from celsius to fahrenheit"<<f<<endl;
            break;

            case '2':
            cout<<"The conversion of temperature from fahrenheit to celsius"<<c<<endl;
            break;
            default:
            cout<<"Invalid Option"<<endl;
         }
cout<<"By Samyam Humagain"<<endl;
}