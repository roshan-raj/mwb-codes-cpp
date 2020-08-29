// program to find the sum of positive numbers
// if the user enters a negative number, the loop ends
// the negative number entered is not added to the sum

#include <iostream>
using namespace std;

int main()
{
    int number;
    int sum = 0;

    // take input from the user
    cout << "Enter a number: ";
    cin >> number;

    while (number >= 0)
    {
        // add all positive numbers
        sum += number;

        // take input again if the number is positive
        cout << "Enter a number: ";
        cin >> number;
    }

    // display the sum
    cout << "\nThe sum is " << sum << endl;

    return 0;
}

/*
In this program, the user is prompted to enter a number, which is stored in the variable number.
In order to store the sum of the numbers, we declare a variable sum and initialize it to the value of 0.
The while loop continues until the user enters a negative number. 
During each iteration, the number entered by the user is added to the sum variable.
When the user enters a negative number, the loop terminates. Finally, the total sum is displayed.
*/