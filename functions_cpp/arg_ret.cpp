// Example 4: Arguments passed and a return value.
#include <iostream>
using namespace std;

int prime(int n);

int main()
{
    int num, flag = 0;
    cout << "Enter positive integer to check: ";
    cin >> num;

    // Argument num is passed to check() function
    flag = prime(num);

    if (flag == 1)
        cout << num << " is not a prime number.";
    else
        cout << num << " is a prime number.";
    return 0;
}

/* This function returns integer value.  */
int prime(int n)
{
    int i;
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
            return 1;
    }

    return 0;
}

// In the above program, a positive integer is asked from the user and stored in the variable num.
// Then, num is passed to the function prime() where, whether the number is prime or not is checked.
// Since, the return type of prime() is an int, 1 or 0 is returned to the main() calling function. If the number is a prime number, 1 is returned. If not, 0 is returned.
// Back in the main() function, the returned 1 or 0 is stored in the variable flag, and the corresponding text is printed onto the screen
