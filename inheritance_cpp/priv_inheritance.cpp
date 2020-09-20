// C++ program to demonstrate the working of private inheritance

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

class PrivateDerived : private Base
{
public:
    // function to access protected member from Base
    int getProt()
    {
        return prot;
    }

    // function to access private member
    int getPub()
    {
        return pub;
    }
};

int main()
{
    PrivateDerived object1;
    cout << "Private cannot be accessed." << endl;
    cout << "Protected = " << object1.getProt() << endl;
    cout << "Public = " << object1.getPub() << endl;
    return 0;
}

/*

Here, we have derived PrivateDerived from Base in private mode.
As a result, in PrivateDerived:

prot, pub and getPVT() are inherited as private.
pvt is inaccessible since it is private in Base.
As we know, private members cannot be accessed directly.

As a result, we cannot use getPVT() from PrivateDerived. That is also why we need to create the getPub() function in PrivateDerived in order to access the pub variable.

// Error: member "Base::getPVT()" is inaccessible
cout << "Private = " << object1.getPVT();

// Error: member "Base::pub" is inaccessible
cout << "Public = " << object1.pub;

*/