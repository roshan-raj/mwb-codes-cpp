#include <iostream>
using namespace std;

// declare a class
class Wall
{
private:
    double length;
    double height;

public:
    // parameterized constructor
    Wall(double len, double hgt)
    {
        // initialize private variables
        length = len;
        height = hgt;
    }

    // copy constructor with a Wall object as parameter
    Wall(Wall &obj)
    {
        // initialize private variables
        length = obj.length;
        height = obj.height;
    }
    double calculateArea()
    {
        return length * height;
    }
};

int main()
{

    // create an object of Wall class
    Wall wall1(10.5, 8.6);

    // print area of wall1
    cout << "Area of Room 1: " << wall1.calculateArea() << endl;

    // copy contents of room1 to another object room2
    Wall wall2 = wall1;

    // print area of wall2
    cout << "Area of Room 2: " << wall2.calculateArea() << endl;

    return 0;
}

// Notice that the parameter of this constructor has the address of an object of the Wall class.

// We then assign the values of the variables of the first object to the corresponding variables of the second object.
// This is how the contents of the object is copied.

// In main(), we then create two objects wall1 and wall2 and then copy the contents of the first object to the second with the code