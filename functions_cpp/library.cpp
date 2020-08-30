#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double number, squareRoot;

    number = 25.0;

    // sqrt() is a library function to calculate the square root
    squareRoot = sqrt(number);

    cout << "Square root of " << number << " = " << squareRoot << endl;

    return 0;
}

/*
In this program, the sqrt() library function is used to calculate the square root of a number.
The function declaration of sqrt() is defined in the cmath header file. 
That's why we need to use the code #include <cmath> to use the sqrt() function.
*/