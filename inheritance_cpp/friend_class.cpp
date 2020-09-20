// C++ program to demonstrate the working of friend class

#include <iostream>
using namespace std;

// forward declaration
class ClassB;

class ClassA
{
private:
    int numA;

    // friend class declaration
    friend class ClassB;

public:
    // constructor to initialize numA to 12
    ClassA() : numA(12) {}
};

class ClassB
{
private:
    int numB;

public:
    // constructor to initialize numB to 1
    ClassB() : numB(1) {}

    // member function to add numA
    // from ClassA and numB from ClassB
    int add()
    {
        ClassA objectA;
        return objectA.numA + numB;
    }
};

int main()
{
    ClassB objectB;
    cout << "Sum: " << objectB.add();
    return 0;
}

// Here, ClassB is a friend class of ClassA. So, ClassB has access to the members of classA.

// In ClassB, we have created a function add() that returns the sum of numA and numB.

// Since ClassB is a friend class, we can create objects of ClassA inside of ClassB.