// C++ program to demonstrate function overriding

#include <iostream>
using namespace std;

class Base
{
public:
    void print()
    {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base
{
public:
    void print()
    {
        cout << "Derived Function" << endl;
    }
};

int main()
{
    Derived derived1;
    derived1.print();
    return 0;
}

/*
Here, the same function print() is defined in both Base and Derived classes.

So, when we call print() from the Derived object derived1, 
the print() from Derived is executed by overriding the function in Base.
*/