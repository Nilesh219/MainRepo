#include <iostream>
using namespace std;
// Multiple Inheritance Class
/*
    Note:
        1. Multiple Inheritance class there are 2 base and only
           one derived class inheritanced by the two base class.

        2. Example: class base1 Employee & class base2 Assistant
           and derived class is programmer.

        3. There in Example empolyee and Assistance can do same
           work in company we can see that Inheritance two base
           class and created one derived class that all functionality
           same as the employee and Assistance created the programmer.

*/

// Multiple Inheritance class Syntax
/*
    class Derived: {visiablity Mode}{class-Base1}, {visiablity Mode}{class-Base1}
    {
        class object members and functionality
    }
*/

class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a);
};

void base1 ::set_base1int(int a)
{
    base1int = a;
}

class base2
{
protected:
    int base2int;

public:
    void set_base2int(int b);
};

void base2 ::set_base2int(int b)
{
    base2int = b;
}

class base3
{
protected:
    int base3int;

public:
    void set_base3int(int c);
};

void base3 ::set_base3int(int c)
{
    base3int = c;
}

class Derived : public base1, public base2, public base3
{
public:
    void show()
    {
        cout << "The base1int is " << base1int << endl;
        cout << "The base2int is " << base2int << endl;
        cout << "The base3int is " << base3int << endl;
        cout << "The base1int + base2int + base3int is " << base1int + base2int + base3int << endl;
    }
};

int main()
{
    Derived Nilesh;

    Nilesh.set_base1int(5);
    Nilesh.set_base2int(7);
    Nilesh.set_base3int(8);
    Nilesh.show();

    return 0;
}