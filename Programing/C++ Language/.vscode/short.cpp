#include<iostream>

using namespace std;

int main()
{
    // int n;
    // cout<<"Enter the size = ";
    // cin>>n;

    // int array[n];
    // cout<<"Enter the Array Element = ";
    // for(int i = 0; i < n; i++)
    // {
    //     cin>>array[i];
    // }

    int array[] = {2, 1, 3, 4, 5};
    int n = sizeof(array)/sizeof(array[0]);
    int array2[n];
    int i = 0;
    do{
        
        if(array[i] < array[i+1])
        {
            array2[i] = array[i];
            i++;
        }
        else if(array[i] > array[i+1])
        {
            
            array2[i] = array[i+1];
            array2[i+1] = array[i];
            i++;
            
        }
        
       
    }while(i<n);

    cout<<"Shorted array will be = ";
    for(int i = 0; i < n; i++)
    {
        cout<<array2[i]<<" "<<"\t";
    }
    return 0;
}