#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 5; ++i)
    {
        cout << i << " ";
    }
    return 0;
}

/*
Here is how this program works

Iteration	Variable	i <= 5	Action
1st	        i = 1	    true	1 is printed. i is increased to 2.
2nd	        i = 2	    true	2 is printed. i is increased to 3.
3rd	        i = 3	    true	3 is printed. i is increased to 4.
4th	        i = 4	    true	4 is printed. i is increased to 5.
5th	        i = 5	    true	5 is printed. i is increased to 6.
6th	        i = 6	    false	The loop is terminated
*/