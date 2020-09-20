#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "Base class content.";
    }
};

class B : public A
{
};

class C : public B
{
};

int main()
{
    C obj;
    obj.display();
    return 0;
}

/*

In this program, class C is derived from class B (which is derived from base class A).

The obj object of class C is defined in the main() function.

When the display() function is called, display() in class A is executed. It's because there is no display() function in class C and class B.

The compiler first looks for the display() function in class C. Since the function doesn't exist there, it looks for the function in class B (as C is derived from B).

The function also doesn't exist in class B, so the compiler looks for it in class A (as B is derived from A).

If display() function exists in C, 
    the compiler overrides display() of class A (because of member function overriding).
*/
