#include <iostream>
using namespace std;

int main()
{
    // declare variables
    int a = 12, b = 25;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a & b = " << (a & b) << endl;

    return 0;
}

// The bitwise AND & operator returns 1 if and only if both the operands are 1. Otherwise, it returns 0.
// The following table demonstrates the working of the bitwise AND operator. 
// Let a and b be two operands that can only take binary values i.e. 1 and 0.