#include<iostream>
using namespace std;

class A{
    int a;
    public:
        //A &
        setData(float a){
            this->a = a; // this is keyword which is a pointer which points to the object 
            //which invokes the member function
            //return *this; //-->   this also run it is class objext this now 
            
        }
        void getData(){
            cout<<"The value is a "<<a<<endl; 
        }
};
int main(){
    A a;
    a.setData(7);//.getData(); // this gives the Garbeg value 
    a.getData();
    return 0;
}