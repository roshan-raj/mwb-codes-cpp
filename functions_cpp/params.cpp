// program to print a text
#include <iostream>
using namespace std;

// display a number
void displayNum(int n1, float n2)
{
    cout << "The int number is " << n1;
    cout << "The double number is " << n2;
}

int main()
{

    int num1 = 5;
    double num2 = 5.5;

    // calling the function
    displayNum(num1, num2);

    return 0;
}

/*
In the above program, we have used a function that has one int parameter and one double parameter.
We then pass num1 and num2 as arguments. 
These values are stored by the function parameters n1 and n2 respectively.
*/