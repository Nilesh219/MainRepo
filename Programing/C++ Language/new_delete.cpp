#include<iostream>

using namespace std;

int main()
{
    //Pointer basic concept
    int a = 7;
    int* ptr = &a;
    cout<<"Ther Vlaue of a is "<<*(ptr)<<endl;
    cout<<"The Address of a is "<<ptr<<endl;

    // new Operator used for dynamically memory allocation 
    //Example
    //For integer 
    int* p = new int(77);
    //For float
    float* p1 = new float(35);
    cout<<"The vlaue at p is "<<*p<<endl;
    cout<<"The vlaue at p1 is "<<*p1<<endl;

    //new in array
    int* array = new int[4];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;

    //It will free the array continous memory block in dynamic
    delete [] array; 

    cout<<"The vlaue of array[0] is "<<array[0]<<endl;
    cout<<"The vlaue of array[1] is "<<array[1]<<endl;
    cout<<"The vlaue of array[2] is "<<array[2]<<endl;
    cout<<"The vlaue of array[3] is "<<array[3]<<endl;

    cout<<endl;
    // We can Write in this methed also
    int* array1 = new int[4];
    *(array1) = 3;
    *(array1+1) = 7;
    *(array1+2) = 5;
    *(array1+3) = 10;

    cout<<"The vlaue of array[0] is "<<*(array1)<<endl;
    cout<<"The vlaue of array[1] is "<<*(array1+1)<<endl;
    cout<<"The vlaue of array[2] is "<<*(array1+2)<<endl;
    cout<<"The vlaue of array[3] is "<<*(array1+3)<<endl;

    cout<<endl;
    //Second Operator is delete
    //suppose we want to delete the array
     delete [] array1; 

    cout<<"The vlaue of array[0] is "<<*(array1)<<endl;
    cout<<"The vlaue of array[1] is "<<*(array1+1)<<endl;
    cout<<"The vlaue of array[2] is "<<*(array1+2)<<endl;
    cout<<"The vlaue of array[3] is "<<*(array1+3)<<endl;

    return 0;

}