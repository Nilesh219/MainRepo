#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    /*when we want to use function out of the class and 
    we want to use the class variable for some reason
    then that function can't access beacuse 
    the in class there are private variables 
    //beacuse we want use the class private variable 
    we declare the friend in a class with function name 
    that can be access the class by that function
    */
    friend complex setcomplexSum(complex o1, complex o2);
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "The Complex Number " << a << " + " << b << " i" << endl;
    }
};

complex setcomplexSum(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{

    complex c1, c2, sum;
    c1.setNumber(4, 1);
    c1.printNumber();

    c2.setNumber(8, 2);
    c2.printNumber();

    sum = setcomplexSum(c1, c2);
    sum.printNumber();
    return 0;
}
/* Properties of friend fuctions
1. Not in the scope of the class 
2. since it is not in the scope of the class, it can't called from the object of
that class. c1.sumcomplex() == invaild
3. Can be invoked without the help of the any object 
4. Usually contans the object as arguments
5. Can be declared inside public or private section of the class 
6. It cannot access the members directly by their names and need object _name.memeber_name 
to access any members

*/