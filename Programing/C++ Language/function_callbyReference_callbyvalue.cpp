#include<iostream>
using namespace std;
 This Will be not Swap 
 int swap(int* a, int* b)
 {
    int temp;
    temp = a;
    a = b;
    b = temp;
 }

//This is call By Reference with passing pointers
int swapPointers(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int X = 5;
    int Y = 10;
    cout<<"The value of a = "<<X<<endl<<"the value of b = "<<Y<<endl;
    swap(X,Y);  //This will be not Swap
    swapPointers(&X, &Y);
    cout<<"The value of a = "<<X<<endl<<"the value of b = "<<Y;
    return 0;
}

// Call by reference usign c++ reference Variable 
// int &
int swapReferneceVar(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int X = 5;
    int Y = 10;
    cout<<"The value of a = "<<X<<endl<<"the value of b = "<<Y<<endl;
    // swap(X,Y);  //This will be not Swap
    swapReferneceVar(X, Y);
    cout<<"The value of a = "<<X<<endl<<"the value of b = "<<Y;
    return 0;
}