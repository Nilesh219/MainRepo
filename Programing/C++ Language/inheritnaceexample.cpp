#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void SetData();
    int getData1();
    int getData2();
};
void Base ::SetData(void)
{
    data1 = 10;
    data2 = 20;
}
int Base ::getData1()
{
    return data1;
}
int Base ::getData2()
{
    return data2;
}

// Inheritance class for the derived class
class Derived : public Base
{

    int data3;

public:
    int Process();
    void Display();
};
int Derived ::Process()
{
    data3 = getData1() * data2;
}
void Derived ::Display()
{
    cout << "The Data1 value = " << getData1()<<endl;
    cout << "The Data2 value = " << data2<< endl;
    cout << "The Data3 value = " << data3<< endl;
}
int main()
{

    Derived dr;
    dr.SetData();
    dr.Process();
    dr.Display();

    return 0;
}