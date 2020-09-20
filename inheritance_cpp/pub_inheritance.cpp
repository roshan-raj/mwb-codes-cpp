// C++ program to demonstrate the working of public inheritance

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

class PublicDerived : public Base
{
public:
    // function to access protected member from Base
    int getProt()
    {
        return prot;
    }
};

int main()
{
    PublicDerived object1;
    cout << "Private = " << object1.getPVT() << endl;
    cout << "Protected = " << object1.getProt() << endl;
    cout << "Public = " << object1.pub << endl;
    return 0;
}

/*

Here, we have derived PublicDerived from Base in public mode.

As a result, in PublicDerived:

prot is inherited as protected.
pub and getPVT() are inherited as public.
pvt is inaccessible since it is private in Base.
Since private and protected members are not accessible, we need to create public functions getPVT() and getProt() to access them:

// Error: member "Base::pvt" is inaccessible
cout << "Private = " << object1.pvt;

// Error: member "Base::prot" is inaccessible
cout << "Protected = " << object1.prot;

*/