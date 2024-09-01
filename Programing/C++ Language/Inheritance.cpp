#include<iostream>
using namespace std;

// Base Class =  Base Class Creat a New Inheritance Derive Class 
class Employee{
   
    
    public:
        int id;
        float salary;
        Employee(){}
        Employee(int numid){
            id = numid;
            salary = 34.0;
        }

};
// Derived Class syntax 

/*class {{Derived-class-name}} : {{Visibility-Mode}} {{Base-class-name}}
{
    class Members/Methods/etc...
}

    Rules For the Derived class
    1. Visibility-Mode = it is Public and Private Mode
    2. In Derived Class There Defalute Visibility-Mode are Private
    3. Suppose Inheritance Base Class are Public become the Dervied class are also Public
    4. Suppose Derived Class are Private then Base Class Public Memers become Private Members In Derived Class
*/



//Derived Class = it is new Class Inheritance by Base Class
class Programmer : public Employee
{    
    public:
        int Languagecode;
        
        Programmer(int inpId){
            id = inpId;
            Languagecode = 3;
        }
        void getData()
        {
            cout<<id<<endl;
        }

};
int main(){
    Employee Nilesh(1), joshua(2);
    cout<<"Employee id = "<< Nilesh.id<<endl;
    cout<<"Employee Salary = "<< Nilesh.salary<<endl;
    cout<<"Employee id = "<< joshua.id<<endl;
    cout<<"Employee Salary = "<< joshua.salary<<endl;

    Programmer skillF(10);
    cout<< skillF.Languagecode<<endl;
    cout<< skillF.id<<endl;
    skillF.getData();
    
    return 0;
}