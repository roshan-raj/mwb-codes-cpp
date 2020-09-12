// Overload ++ when used as prefix

#include <iostream>
using namespace std;

class Count
{
private:
    int value;

public:
    // Constructor to initialize count to 5
    Count() : value(5) {}

    // Overload ++ when used as prefix
    void operator++()
    {
        ++value;
    }

    void display()
    {
        cout << "Count: " << value << endl;
    }
};

int main()
{
    Count count1;

    // Call the "void operator ++ ()" function
    ++count1;

    count1.display();
    return 0;
}

// Here, when we use ++count1;, the void operator ++ () is called. This increases the value attribute for the object count1 by 1.

// Note: When we overload operators, we can use it to work in any way we like.
// For example, we could have used ++ to increase value by 100.

// However, this makes our code confusing and difficult to understand.
// It's our job as a programmer to use operator overloading properly and in a consistent and intuitive way.

// The above example works only when ++ is used as a prefix. To make ++ work as a postfix we use this syntax.

// void operator ++ (int) {
//     // code
// }