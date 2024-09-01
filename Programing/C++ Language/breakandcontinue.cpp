#include<iostream>
using namespace std;
int main(){
    
    // Break in for loop
    for(int i = 0; i<5; i++)
    {
        cout<<i<<endl;
        // if i == 2 then stop the loop 
        if(i == 2) 
        {
            break;
        }
        
    }
    printf("\n");

   for(int i = 0; i<5; i++)
    {
        
        // if i == 1 then stop the loop 
        if(i == 2) 
        {
            break;
        }
        cout<<i<<endl;
    }
    printf("\n");

    for(int i = 0; i<5; i++)
    {
        cout<<i<<endl;
        // if i == 2 then continue the loop 
        if(i == 2)
        {
            continue;
        }
        
        
    }
    printf("\n");

    for(int i = 0; i<5; i++)
    {
       //if i == 2 loop will be skip the 2 numbers and continue the loop 
        if(i == 2)
        {
            continue;
        }
        cout<<i<<endl;
        
    }

    return 0;
}