#include <iostream>
//Function using Template 
//we can create custom function which was 
// any data type we can aasing to the function
using namespace std;
/*
float average(int a, int b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
float average2(int a, float b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
*/
template <class T1, class T2>
float average(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}
template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    float a;
    a = average(3, 5.2);
    cout << "The average is " << a << endl;

    // float a1;
    // a1 = average2(3, 5.2);
    // cout << "The average is " << a1 << endl;

    int x = 5;
    int y = 7;
    swapp(x, y);
    cout<<"After Swaping "<<endl;
    cout << x << " and " << y << endl;
    return 0;
}