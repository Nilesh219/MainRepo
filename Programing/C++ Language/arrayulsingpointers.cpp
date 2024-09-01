#include<iostream>

using namespace std;

int main()
{
    //array for marks sotre students
    int marks[4] = {20, 12, 14, 15};

    // array for mmathmarks
    // int mathmarks[4];

    // mathmarks[0] = 11;
    // mathmarks[1] = 17;
    // mathmarks[2] = 18;
    // mathmarks[3] = 19;
    // mathmarks[4] = 20;

    // cout<<"the mathmarks = "<<endl;

    // mathmarks[2] = 21; //mathmarks index 2 value change
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;
    // cout<<mathmarks[4]<<endl;
    
    // cout<<endl;

    // cout<<"the marks = "<<endl;

    // marks[2] = 13; // marks index 2 value change 
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // cout<<endl;

    // for loop using printing the array marks and mathmarks
    //  for(int i = 0; i<4; i++)
    //  {
    //      cout<<marks[i]<<endl;
        
    //  }

    

    //  // for loop using printing the array marks and mathmarks
    //  int i = 0;
    //  while(i < 4)
    //  {
    //      cout<<marks[i]<<endl;
    //      i++;
    //  }

   
    // // for loop using printing the array marks and mathmarks
    //  do
    // {

    //     cout<<marks[i]<<endl;
    //     i++;

    // }while(i < 4); 

    // Array using pointers to access the Element 
    int* p = marks;
    // *(p+1);

    // cout<<"the value of *p = "<<*p<<endl;
    // cout<<"the value of *(p++) = "<<*(p+1)<<endl;
    // cout<<"the value of *(p+2) = "<<*(p+2)<<endl;
    // cout<<"the value of *(p+3) = "<<*(p+3)<<endl;

    for(int i = 0; i<4; i++)
    {
        cout<<*p<<endl;
        p++;
    }

}


