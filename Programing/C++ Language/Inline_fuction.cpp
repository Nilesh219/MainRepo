#include<iostream>
using namespace std;

// Inline used for only small function it is run constant time 
// inline int product(int a, int b)
// {
//     return a*b;
// }

// example for Default Argument 
float MoneyReceived(int currentmoney, float factor = 1.04)
{
    return currentmoney * factor;
}
int main(){
    // int a,b;
    // cout<<"Enter the a & b value = "<<endl;
    // cin>>a>>b;

    // cout<<"The product = "<<product(a,b)<<endl;
    // cout<<"The product = "<<product(a,b)<<endl;
    // cout<<"The product = "<<product(a,b)<<endl;
    // cout<<"The product = "<<product(a,b)<<endl;
    // cout<<"The product = "<<product(a,b)<<endl;
   

    // Default Argument 
    int money = 100000;

    // cout<<"The Money is "<<money<<endl;
    cout<<"If you have "<<money<<" After 1 year then "<<MoneyReceived(money)<<endl;
    cout<<"Vip for If you have money "<<money<<" After 1 year then "<<MoneyReceived(money,1.1)<<endl;

    return 0;
}