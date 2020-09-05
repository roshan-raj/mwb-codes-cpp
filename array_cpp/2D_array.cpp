// C++ Program to display all elements
// of an initialised two dimensional array

#include <iostream>
using namespace std;

int main()
{
    int test[3][2] = {{2, -5},
                      {4, 0},
                      {9, 1}};

    // use of nested for loop
    // access rows of the array
    for (int i = 0; i < 3; ++i)
    {

        // access columns of the array
        for (int j = 0; j < 2; ++j)
        {
            cout << "test[" << i << "][" << j << "] = " << test[i][j] << endl;
        }
    }

    return 0;
}

// In the above example, we have initialized a two-dimensional int array named test that has 3 "rows" and 2 "columns".

// Here, we have used the nested for loop to display the array elements.

// the outer loop from i = 0 to i = 2 access the rows of the array
// the inner loop from j = 0 to j = 1 access the columns of the array
// Finally, we print the array elements in each iteration.