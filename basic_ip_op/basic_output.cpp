#include <iostream>
using namespace std;

int main()
{
    // prints the string enclosed in double quotes
    cout << "This is C++ Programming \n";
    return 0;
}

// How does this program work?

// We first include the iostream header file that allows us to display output.
// The cout object is defined inside the std namespace. 
// To use the std namespace, we used the using namespace std; statement.
// Every C++ program starts with the main() function. The code execution begins from the start of the main() function.
// cout is an object that prints the string inside quotation marks " ". It is followed by the << operator.
// return 0; is the "exit status" of the main() function. The program ends with this statement, however, this statement is not mandatory.