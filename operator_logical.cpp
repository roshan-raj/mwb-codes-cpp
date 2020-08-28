#include <iostream>
using namespace std;

int main()
{
    bool result;

    result = (3 != 5) && (3 < 5); // true
    cout << "(3 != 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 < 5); // false
    cout << "(3 == 5) && (3 < 5) is " << result << endl;

    result = (3 == 5) && (3 > 5); // false
    cout << "(3 == 5) && (3 > 5) is " << result << endl;

    result = (3 != 5) || (3 < 5); // true
    cout << "(3 != 5) || (3 < 5) is " << result << endl;

    result = (3 != 5) || (3 > 5); // true
    cout << "(3 != 5) || (3 > 5) is " << result << endl;

    result = (3 == 5) || (3 > 5); // false
    cout << "(3 == 5) || (3 > 5) is " << result << endl;

    result = !(5 == 2); // true
    cout << "!(5 == 2) is " << result << endl;

    result = !(5 == 5); // false
    cout << "!(5 == 5) is " << result << endl;

    return 0;
}

// Explanation of logical operator program

// (3 != 5) && (3 < 5) evaluates to 1 because both operands (3 != 5) and (3 < 5) are 1 (true).
// (3 == 5) && (3 < 5) evaluates to 0 because the operand (3 == 5) is 0 (false).
// (3 == 5) && (3 > 5) evaluates to 0 because both operands (3 == 5) and (3 > 5) are 0 (false).
// (3 != 5) || (3 < 5) evaluates to 1 because both operands (3 != 5) and (3 < 5) are 1 (true).
// (3 != 5) || (3 > 5) evaluates to 1 because the operand (3 != 5) is 1 (true).
// (3 == 5) || (3 > 5) evaluates to 0 because both operands (3 == 5) and (3 > 5) are 0 (false).
// !(5 == 2) evaluates to 1 because the operand (5 == 2) is 0 (false).
// !(5 == 5) evaluates to 0 because the operand (5 == 5) is 1 (true).