#include <iostream>
using namespace std;

// Forward declaration
class complex;

class Calculator
{
public:
    int sum(int a, int b)
    {
        return (a + b);
    }

    int sumRealcomplex(complex, complex);
    int sumcompcomplex(complex, complex);
};

class complex
{
    int a, b;
    //Indiviually declaring function as friends
    // friend int Calculator ::sumRealcomplex(complex, complex);
    // friend int Calculator ::sumcompcomplex(complex, complex);

    // Aliter: Delaring functions as friends
     friend class Calculator;
public:
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

int Calculator ::sumRealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumcompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o1.printNumber();

    o2.setNumber(5, 7);
    o2.printNumber();

    Calculator calc;
    int res = calc.sumRealcomplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumcompcomplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc << endl;
    return 0;
}