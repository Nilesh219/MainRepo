#include<iostream>

using namespace std;

int main()
{
    // pointer is datatype that store another datatype address
    int a = 5;
    int* b = &a;

    //address of pointers (addresss of)opertaor
    cout<<"The address of a is = "<<&a<<endl;
    cout<<"The address of b is = "<<b<<endl;

    //Value of (value at ) Derefrences opertaor
    cout<<"the value of a = "<<a<<endl;
    cout<<"the value of b = "<<*b<<endl;

    cout<<endl;
    // Pointer to Pointer

    int** c = &b;
    //address of pointers (addresss of)opertaor
    cout<<"The address of b is = "<<&b<<endl;
    cout<<"The address of c is = "<<c<<endl;

    
    //Value of (value at ) Derefrences opertaor
    cout<<"the value of b = "<<*b<<endl;
    cout<<"the value of c = "<<**c<<endl;

}