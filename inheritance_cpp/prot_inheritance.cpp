// C++ program to demonstrate the working of protected inheritance

#include <iostream>
using namespace std;

class Base
{
private:
    int pvt = 1;

protected:
    int prot = 2;

public:
    int pub = 3;

    // function to access private member
    int getPVT()
    {
        return pvt;
    }
};

class ProtectedDerived : protected Base
{
public:
    // function to access protected member from Base
    int getProt()
    {
        return prot;
    }

    // function to access public member from Base
    int getPub()
    {
        return pub;
    }
};

int main()
{
    ProtectedDerived object1;
    cout << "Private cannot be accessed." << endl;
    cout << "Protected = " << object1.getProt() << endl;
    cout << "Public = " << object1.getPub() << endl;
    return 0;
}

/*

Here, we have derived ProtectedDerived from Base in protected mode.

As a result, in ProtectedDerived:

prot, pub and getPVT() are inherited as protected.
pvt is inaccessible since it is private in Base.
As we know, protected members cannot be accessed directly.

As a result, we cannot use getPVT() from ProtectedDerived. That is also why we need to create the getPub() function in ProtectedDerived in order to access the pub variable.

// Error: member "Base::getPVT()" is inaccessible
cout << "Private = " << object1.getPVT();

// Error: member "Base::pub" is inaccessible
cout << "Public = " << object1.pub;

*/