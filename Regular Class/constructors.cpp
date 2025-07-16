// Constructors: Constructors are the special type of member functions which is intialized automatically after an object is created. A constructor needs to have the same name as the class and should have no return type.
// Another rule for a constructor is that it should always be declared in a public sectin and it can take default arguments.

// There are three type of Constructors:
//  1)Default Constructor: A constuctor with no arguments is called a default constructor.
//  2)Parametrized Constructor: A constructor which takes arguments is called a parametrized constructor.
//  3)Copy Constructor: A constructor which makes another copy of an object is called a copy constructor.

#include <iostream>

using namespace std;

class Rectangle
{
public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
};
Rectangle r1(10, 20);
