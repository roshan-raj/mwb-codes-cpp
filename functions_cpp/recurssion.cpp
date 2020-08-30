// Factorial of n = 1*2*3*...*n

#include <iostream>
using namespace std;

int factorial(int);

int main()
{
    int n, result;

    cout << "Enter a non-negative number: ";
    cin >> n;

    result = factorial(n);
    cout << "Factorial of " << n << " = " << result;
    return 0;
}

int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}

// As we can see, the factorial() function is calling itself. 
// However, during each call, we have decreased the value of n by 1. 
// When n is less than 1, the factorial() function ultimately returns the output.