#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;

public:
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    void DisplayNumber()
    {
        cout << "your Number is " <<a<< " + " <<b<< "i " << endl;
    }
};

int main()
{
    complex a1(5, 9);
    a1.DisplayNumber();

    complex a2(10);
    a2.DisplayNumber();

    complex a3;
    a3.DisplayNumber();

    return 0;
}