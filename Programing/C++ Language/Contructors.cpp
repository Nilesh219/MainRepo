#include <iostream>
using namespace std;
//constuctor is special memeber function with same name of the class
//it ia used to initializ the object of its class
class complex
{
    int a, b;

public:

    // It is automatically invoked whenever an object is created
    complex(void); // Constructor declaration
    // also it as same name as object we created Complex
    void printNumber()
    {
        cout << "you are number " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void)
{ // It is Default constructor as it accepts no parameters
    a = 2;
    b = 5;
}
int main()
{
    complex a;
    a.printNumber();
    a.printNumber();
    return 0;
}
/*  Characteristics of Constructors

1. It should be declared in the public section of the class
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not have return types
4. It can have default arguments
5. We cannot refer to their address

*/