#include<iostream>
using namespace std;

class complex
{
    int a, b;

public:

    // It is automatically invoked whenever an object is created
    complex(int, int); // Constructor declaration
    // also it as same name as object we created Complex
    printNumber(void)
    {
        cout << "you are number " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(int x, int y)
{ // It is Default constructor as it accepts no parameters
    a = x;
    b = y;
}
int main()
{
    //Emplicit call
    complex a(5,4);
    a.printNumber();

    //Explicit call
    complex b = complex(10, 5);
    b.printNumber();
    return 0;
}