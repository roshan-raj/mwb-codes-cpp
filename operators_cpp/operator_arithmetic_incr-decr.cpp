// Working of increment and decrement operators

#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 100, result_a, result_b;

    // incrementing a by 1 and storing the result in result_a
    result_a = a++; // ++a 
    // value of a is assigned to result_a
    // after that a is incremented.
    cout << "result_a = " << result_a << endl;

    // decrementing b by 1 and storing the result in result_b
    result_b = b--; // --b
    cout << "result_b = " << result_b << endl;

    return 0;
}

// In the above program, we used ++ and -- operator as prefixes. 
// We can also use these operators as postfix.
