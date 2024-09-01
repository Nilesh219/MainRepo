#include<iostream>
using namespace std;

class Base{
    protected:
        int a;
    private:
        int b;
};
/*
    For a Protected memeber:
                                public derivation      private derivation       protected derivation
                                
    1. private members          Not Inherited          Not Inherited            Not Inherited
    2. protected members        Protected              Private                  Protected
    3. public members           Public                 Private                  Prtected
*/
class Derived :: Protected Base{

};

int main(){
    Base b;
    Derived d;
    //cout<<d.a //will not work since a is protected in both base as well as 
    //derived class
    return 0;
}