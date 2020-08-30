#include <iostream>
using namespace std;

// defining the default arguments
void display(char = '*', int = 3);

int main()
{
    int count = 5;

    cout << "No argument passed: ";
    // *, 3 will be parameters
    display();

    cout << "First argument passed: ";
    // #, 3 will be parameters
    display('#');

    cout << "Both arguments passed: ";
    // $, 5 will be parameters
    display('$', count);

    return 0;
}

void display(char c, int count)
{
    for (int i = 1; i <= count; ++i)
    {
        cout << c;
    }
    cout << endl;
}

// display() is called without passing any arguments. 
//  In this case, display() uses both the default parameters c = '*' and n = 1.
// display('#') is called with only one argument. 
//  In this case, the first becomes '#'. The second default parameter n = 1 is retained.
// display('#', count) is called with both arguments. In this case, default arguments are not used.