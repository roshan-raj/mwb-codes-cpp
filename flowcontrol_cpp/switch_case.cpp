// Program to build a simple calculator using switch Statement
#include <iostream>
using namespace std;

int main()
{
    char oper;
    float num1, num2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> oper;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    switch (oper)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
    default:
        // operator is doesn't match any case constant (+, -, *, /)
        cout << "Error! The operator is not correct";
        break;
    }

    return 0;
}

/*
Notice that the break statement is used inside each case block. This terminates the switch statement.
If the break statement is not used, all cases after the correct case are executed.

We first prompt the user to enter the desired operator. 
This input is then stored in the char variable named oper.
We then prompt the user to enter two numbers, which are stored in the float variables num1 and num2.
The switch statement is then used to check the operator entered by the user:
If the user enters +, addition is performed on the numbers.
If the user enters -, subtraction is performed on the numbers.
If the user enters *, multiplication is performed on the numbers.
If the user enters /, division is performed on the numbers.
If the user enters any other character, the default code is printed.
*/