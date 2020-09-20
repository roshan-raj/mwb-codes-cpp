// C++ program to demonstrate protected members

#include <iostream>
#include <string>
using namespace std;

// base class
class Animal
{

private:
    string color;

protected:
    string type;

public:
    void eat()
    {
        cout << "I can eat!" << endl;
    }

    void sleep()
    {
        cout << "I can sleep!" << endl;
    }

    void setColor(string clr)
    {
        color = clr;
    }

    string getColor()
    {
        return color;
    }
};

// derived class
class Dog : public Animal
{

public:
    void setType(string tp)
    {
        type = tp;
    }

    void displayInfo(string c)
    {
        cout << "I am a " << type << endl;
        cout << "My color is " << c << endl;
    }

    void bark()
    {
        cout << "I can bark! Woof woof!!" << endl;
    }
};

int main()
{
    // Create object of the Dog class
    Dog dog1;

    // Calling members of the base class
    dog1.eat();
    dog1.sleep();
    dog1.setColor("black");

    // Calling member of the derived class
    dog1.bark();
    dog1.setType("mammal");

    // Using getColor() of dog1 as argument
    // getColor() returns string data
    dog1.displayInfo(dog1.getColor());

    return 0;
}

// Here, the variable type is protected and is thus accessible from the derived class Dog. We can see this as we have initialized type in the Dog class using the function setType().

// On the other hand, the private variable color cannot be initialized in Dog.

// class Dog : public Animal {

//     public:
//       void setColor(string clr) {
//           // Error: member "Animal::color" is inaccessible
//           color = clr; 
//       }
// };
// Also, since the protected keyword hides data, we cannot access type directly from an object of Dog or Animal class.

// Error: member "Animal::type" is inaccessible
// dog1.type = "mammal";