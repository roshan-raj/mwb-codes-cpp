// Example 3 : C++ string using string data type
#include <iostream>
using namespace std;

int main()
{
    // Declaring a string object
    string str; // String Object
    // char str[]; // C String 
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "You entered: " << str << endl;
    return 0;
}

// In this program, a string str is declared. Then the string is asked from the user.

// Instead of using cin>> or cin.get() function, you can get the entered line of text using getline().

// getline() function takes the input stream as the first parameter which is cin and str as the location of the line to be stored.