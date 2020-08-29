// program to print the value of i

#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        // break condition
        if (i == 3)
        {
            break;
        }
        cout << i << endl;
    }

    return 0;
}

/*
In the above program, the for loop is used to print the value of i in each iteration. Here, notice the code:

if (i == 3) {
    break;
}
This means, when i is equal to 3, the break statement terminates the loop. 
Hence, the output doesn't include values greater than or equal to 3.
*/