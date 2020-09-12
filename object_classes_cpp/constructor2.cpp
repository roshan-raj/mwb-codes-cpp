// C++ program to calculate the area of a wall
#include <iostream>
using namespace std;

// declare a class
class Wall
{
private:
    double length;
    double height;

public:
    // create parameterized constructor
    Wall(double len, double hgt)
    {
        // initialize private variables
        length = len;
        height = hgt;
    }

    double calculateArea()
    {
        return length * height;
    }
};

int main()
{
    // create object and initialize data members
    Wall wall1(10.5, 8.6);
    Wall wall2(8.5, 6.3);

    cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
    cout << "Area of Wall 2: " << wall2.calculateArea() << endl;

    return 0;
}

// Here, we have created a parameterized constructor Wall() that has 2 parameters: double len and double hgt.
// The values contained in these parameters are used to initialize the member variables length and height.

// When we create an object of the Room class, we pass the values for the member variables as arguments.

// The code for this is:

// Wall wall1(10.5, 8.6);
// Wall wall2(8.5, 6.3);

// With the member variables thus initialized, we can now calculate the area of the wall with the calculateArea() function.