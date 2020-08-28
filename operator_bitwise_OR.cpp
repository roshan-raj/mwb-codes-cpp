#include <iostream>

int main()
{
    int a = 12, b = 25;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a | b = " << (a | b) << endl;

    return 0;
}

// The bitwise OR | operator returns 1 if at least one of the operands is 1. Otherwise, it returns 0.
// The following truth table demonstrates the working of the bitwise OR operator. 
// Let a and b be two operands that can only take binary values i.e. 1 or 0.