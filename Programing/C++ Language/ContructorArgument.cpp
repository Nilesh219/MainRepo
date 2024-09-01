#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    int data3;

    public :

        Simple(int a, int b, int c)
        {
            data1 = a;
            data2 = b;
            data3 = c;
        }
        void PrintNumber();
};

void Simple :: PrintNumber()
{
    cout<<"The data1, data2 and data3 is "<<data1 <<", "<<data2 <<" and "<<data3<<endl;
}
int main(){
    Simple c1(5,10,15);
    c1.PrintNumber();
    return 0;
}