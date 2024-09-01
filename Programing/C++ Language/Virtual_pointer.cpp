#include<iostream>
using namespace std;
class Base{
    public:
        int var_base;
        virtual void Display(){
           
            cout<<"1. The Base class var_base is "<<var_base<<endl;
        }
};
class Derived: public Base{
    public:
        int var_derive = 7;
        void Display(){
        cout<<"2.The Base class var_base is "<<var_base<<endl;
        cout<<"2.The Base class var_derived is "<<var_derive<<endl;
    }
};

int main(){

    Base *base_class_obj; // It is pointer to a base class
    Base var_obj; 
    Derived derived_obj;             //It is derived class object name
    base_class_obj = &derived_obj;   //It is pointer base_class_obj store the derived class object address
    base_class_obj->var_base = 8;    //assign base class variable 
    base_class_obj->Display();       //Finally run funtion Display
    //It is only Run for the Base class because it pointing to the base class
    return 0;
}