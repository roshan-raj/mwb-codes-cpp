// Example 3: Display Sum and Average of Array Elements Using for Loop

#include <iostream>
using namespace std;

int main()
{

    // initialize an array without specifying size
    double numbers[] = {7, 5, 6, 12, 35, 27};

    double sum = 0;
    double count = 0;
    double average;

    cout << "The numbers are: ";

    //  print array elements
    // use of range-based for loop
    for (const double &n : numbers)
    {
        cout << n << "  ";

        //  calculate the sum
        sum += n;

        // count the no. of array elements
        ++count;
    }

    // print the sum
    cout << "\nTheir Sum = " << sum << endl;

    // find the average
    average = sum / count;
    cout << "Their Average = " << average << endl;

    return 0;
}

// We have initialized a double array named numbers but without specifying its size. 
// We also declared three double variables sum, count, and average.  Here, sum =0 and count = 0.

// Then we used a range based for loop to print the array elements. 
// In each iteration of the loop, we add the current array element to sum.

// We also increase the value of count by 1 in each iteration, 
// so that we can get the size of the array by the end of the for loop.

// After printing all the elements, we print the sum and the average of all the numbers. 
// The average of the numbers is given by average = sum / count;