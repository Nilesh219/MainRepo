#include <iostream>
using namespace std;
/*
    Syntax Initialization List in Constructor
    Constructor (argument-list): Initialization-section
    {
        assignment + other code;
    }

*/
class Test
{

    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(j + 1)
    // Test(int i, int j) : a(i), b(j+i)
    Test(int i, int j) : a(i), b(a+j)
    // Test(int i, int j) : b(j), a(i+b) //It will give the garbege value
    //becuase the we declared the int a first then int b we can 
    // not call the b first  
    {
        cout << "Constructor are Executed " << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};
int main()
{
    Test t(5, 7);
    return 0;
}