#include<iostream>
using namespace std;
class base1{
    public: 
        void greet(){
            cout<<"How Are You?"<<endl;
        }
};
class base2{
    public:
        void greet(){
            cout<<"Kasie ho?"<<endl;
        }
};
class Derived: public base1, public base2
{
    private:
        int a;
    public:
        void greet(){
            base1 :: greet();   // It run base1 class
            base2 :: greet();   // It run base2 class
        }

    
};
class B{
    int a1;
    public:
        void show(){
            cout<<"Hello World"<<endl;
        }
};
class D: public B{
    int b1;
    public:
        void show()
        {
            cout<<"Hello Iam fine"<<endl;
        }
};
int main(){
    
    // It give Ambiguity
    /*
        Note:

        1. There are two class base 1 and base2 class from inheritied classs Derived class

        2. but when the base1 and base2 class there are same function then Derived class
           inheritanccted call that function from Derived class becuase of that It gives
           us Error Ambiguity it can't Understand Which Function to run

        3. To Resolve this Error we have the declear that which base class function first
           to run example base1 class function want to run in Derived class we can say
           that under in new function from Derived class base1::function_name(); then 
           that Error will be gone 

    */
    base1 obj;
    obj.greet();
    base2 obj2;
    obj2.greet(); 
    Derived obj1;
    obj1.greet();

    // B sh;
    // sh.show();
    D sh1;
    sh1.show(); // This override the B class function show() then From D class 
    return 0;
}