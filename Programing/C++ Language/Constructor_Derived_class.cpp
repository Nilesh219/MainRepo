#include <iostream>
using namespace std;
/*
    Case1:
        class B: public A{
            // Order of ececution of constructor -> first A() the B()
        };

    Case2:
        class A: public B, public C{
            // Order of execution of constructor -> B() then C() and A()
        };

    case3;
        classA: public B, virtualpublic C{
            // order of execution of constructor ->C() then B() and A()
        }
*/
class Base1
{
    int data1;

    public:
        Base1(int i)
        {
            data1 = i;
            cout << "The Base1 class Constructor is called" << endl;
        }
        void printdata1(void)
        {
            cout << "The value is base1 " << data1 << endl;
        }
};
class Base2
{
    int data2;

    public:
        Base2(int i)
        {
            data2 = i;
            cout << "The Base2 class Constructor is called" << endl;
        }
        void printdata2(void)
        {
            cout << "The value is base2 " << data2 << endl;
        }
};

class Derived : public Base1, virtual public Base2
{
    int derived1, derived2;

    public:
        Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
        {
            derived1 = c;
            derived2 = d;
            cout << "Derived class Constructor is called" << endl;
        }
        void printDerived(void)
        {
            cout << "The value of derive1 is " << derived1 << endl;
            cout << "The value of derive2 is " << derived2 << endl;
        }
};
int main()
{
    Derived Nilesh(3, 4, 5, 7);
    Nilesh.printdata1();
    Nilesh.printdata2();
    Nilesh.printDerived();
    return 0;
}