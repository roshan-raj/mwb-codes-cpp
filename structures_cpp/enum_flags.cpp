#include <iostream>
using namespace std;

enum designFlags
{
    BOLD = 1,
    ITALICS = 2,
    UNDERLINE = 4
};

int main()
{
    int myDesign = BOLD | UNDERLINE;  // Bold OR Underline

    //    00000001
    //  | 00000100
    //  ___________
    //    00000101

    cout << myDesign << endl ;

    return 0;
}