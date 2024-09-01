#include<iostream>
using namespace std;
/*
    two Function overloading 
*/
int sum(int a, int b)
{
    return a+b;
}
int sum(int a, int b, int c)
{
    return a+b+c;
}
int cylinder(double r, int h)
{
    return (3.14 * r * r * h );
}
int volume(int a)
{
    return (a * a * a);
}
int rectanglevloume(int l , int b, int w)
{
    return (l * b * w);
}
int main(){
  
  cout<<"The sum = "<<sum(5, 7)<<endl;
  cout<<"The sum = "<<sum(5, 7, 3)<<endl;

    cout<<"The Cylinderical vloume is = "<<cylinder(5, 8)<<endl;
    cout<<"The  vloume is = "<<volume(5)<<endl;
    cout<<"The Rectangle vloume is = "<<rectanglevloume(5, 7, 8)<<endl;
    return 0;
}