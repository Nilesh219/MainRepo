#include<iostream>
using namespace std;
class Base{
    public:
        int var_base;
        void Display(){
           
            cout<<"The Base class var_base is "<<var_base<<endl;
        }
};
class Derived: public Base{
    public:
        int var_derive;
        void Display(){
        cout<<"The Base class var_base is "<<var_base<<endl;
        cout<<"The Base class var_derived is "<<var_derive<<endl;
    }
};
int main(){
    //using pointer to run the base class
    Base *base_class_obj; // It is pointer to a base class
    Base var_obj; 
    Derived derived_obj;             //It is derived class object name
    base_class_obj = &derived_obj;   //It is pointer base_class_obj store the derived class object address
    base_class_obj->var_base = 8;    //assign base class variable 
    base_class_obj->Display();       //Finally run funtion Display
    //It is only Run for the Base class because it pointing to the base class

    cout<<endl;

    //It Will run for Derived class
    Derived *derived_class_obj;        //It is point to Derived class
    derived_class_obj = &derived_obj;  //It is ponter is derived class_obj store the address of Derived class object
    derived_class_obj->var_derive = 7; //It is assign value for derived class variable
    derived_class_obj->Display();      //It is Finally Function

    return 0;
}