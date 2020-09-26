#include <iostream>
using namespace std;

class Mammal
{
public:
    Mammal()
    {
        cout << "Mammals can give direct birth." << endl;
    }
    void print() {}
};

class WingedAnimal
{
public:
    WingedAnimal()
    {
        cout << "Winged animal can flap." << endl;
    }
    void print() {
        cout << "HI";
    }
};

class Bat : public Mammal, public WingedAnimal
{
};

int main()
{
    Bat b1;
    b1.WingedAnimal::print();
    return 0;
}