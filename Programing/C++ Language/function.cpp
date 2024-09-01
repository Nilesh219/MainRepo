#include<iostream>

using namespace std;

// int sum(int a, int b); // Fuction Prototype --> it is compiler know that there was function to return 
int sum(int a, int b)
{
    // a & b is Formal Parameters that will be taking values from Actual parasmeters num1 & num2
    int c = a + b;
    return c;
}
int main()
{
    int num1;
    int num2;
    cout<<"num1 = ";
    cin>>num1;

    cout<<"num2 = ";
    cin>>num2;

    cout<<"sum = "<<sum(num1, num2); // num1 & num2 are the Actual Parameters

    return 0;
}
// int sum(int a, int b) // Function Prototype
// {
//     int c = a + b;
//     return c;
// }

