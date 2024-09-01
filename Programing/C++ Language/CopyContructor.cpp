#include<iostream>
using namespace std;

class Number{
    int a;

    public:
        //  Number(){}
         Number(){
            a = 0;
         }

        Number(int num){
            a = num;
        }
       
        Number(Number &obj){
            cout<<"Copy Constructor Called!!"<<endl;
            a = obj.a;
        }
        void Display(){
            cout<<"The Number for Object is "<<a<<endl;
        }
};
int main(){
    Number x,y,z(45),z2;
    x.Display();
    y.Display();
    z.Display();

    Number z1(z); //Copy Constructor Invoke
    z1.Display();
    
    z2 = z; //Copy Constructor not called
    z2.Display();

    Number z3 = z; // Copy constructor Invoke
    z3.Display();

    // z1 should exactly resemble z or x or y
    return 0;
}