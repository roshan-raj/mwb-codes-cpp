// Example 1: C++ Structure and Function
#include <iostream>
using namespace std;

struct Person
{
    char name[50];
    int age;
    float salary;
};

void displayData(Person); // Function declaration

int main()
{
    Person p;

    cout << "Enter Full name: ";
    cin.get(p.name, 50);
    cout << "Enter age: ";
    cin >> p.age;
    cout << "Enter salary: ";
    cin >> p.salary;

    // Function call with structure variable as an argument
    displayData(p);

    return 0;
}

void displayData(Person p)
{
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p.name << endl;
    cout << "Age: " << p.age << endl;
    cout << "Salary: " << p.salary;
}

// In this program, user is asked to enter the name, age and salary of a Person inside main() function.

// Then, the structure variable p is to passed to a function using.

// displayData(p);
// The return type of displayData() is void and a single argument of type structure Person is passed.

// Then the members of structure p is displayed from this function