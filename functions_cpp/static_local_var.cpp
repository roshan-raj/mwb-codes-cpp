#include <iostream>
using namespace std;

void test()
{
    // var is a static variable
    static int var = 0;
    ++var;
    cout << var << endl;
}

int main()
{
    test();
    test();
    return 0;
}

// In the above program, test() function is invoked 2 times.

// During the first call, variable var is declared as static variable and initialized to 0.
// Then 1 is added to var which is displayed in the screen.

// When the function test() returns, variable var still exists because it is a static variable.

// During second function call, no new variable var is created.
// The same var is increased by 1 and then displayed to the screen.