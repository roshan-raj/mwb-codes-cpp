#include <iostream>

int main()
{
    int a = 12, b = 25;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a ^ b = " << (a ^ b) << endl;

    return 0;
}

// The bitwise XOR ^ operator returns 1 if and only if one of the operands is 1.
// However, if both the operands are 0, or if both are 1, then the result is 0.
// The following truth table demonstrates the working of the bitwise OR operator.
// Let a and b be two operands that can only take binary values i.e. 1 or 0.