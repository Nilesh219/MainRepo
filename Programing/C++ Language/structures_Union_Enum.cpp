#include<iostream>
using namespace std;
// in strcture we can store the different types of datatypes 
//structure it is user define datatype that we can store differnet datatypes  
// structure example for employee 

struct employee
{
    int eid;
    char favoriate;
    float salary;
};

typedef struct ep
{
    int eid;
    char favoriate;
    float salary;
}ep;


//Union --> Itis Better memeory mangement provieds
//Union example money that can we take one parameter to acces in Union money 
//Union we  using money as two paramters then value of this parameter over Rides
union money
{
    int rice;     //--> 4 Byte
    char car;     //--> 1 Byte
    float pounds; //--> 4 Byte
};

int main(){
    
    // strcut 1 st employee Nilesh information 

    struct employee Nilesh;
    Nilesh.eid = 12;
    Nilesh.favoriate = 'N';
    Nilesh.salary = 500000;

    cout<<Nilesh.eid<<endl;
    cout<<Nilesh.favoriate<<endl;
    cout<<Nilesh.salary<<endl;

    
    cout<<endl;


    ep harry;
    harry.eid = 13;
    harry.favoriate = 'h';
    harry.salary = 1200000000;

    cout<<harry.eid<<endl;
    cout<<harry.favoriate<<endl;
    cout<<harry.salary<<endl;

    cout<<endl;

    union money m1;
    m1.rice = 34;
    // m1.car = 'N'; // over ride value in m1.rice because using m1.car
    cout<<m1.rice<<endl;
    // cout<<m1.car<<endl;
    // cout<<m1.pounds<<endl;

    cout<<endl;

    //Enum --> data type usign set value as 1 parameter and 2 parameter and 3 parameter
    //Enum using example Breakfast and luch and dinner
    enum Meal{Breakfast, luch, dinner};
    cout<<Breakfast<<endl;
    cout<<luch<<endl;
    cout<<dinner<<endl;



    

    return 0;
}