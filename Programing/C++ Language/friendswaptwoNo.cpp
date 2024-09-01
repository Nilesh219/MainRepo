#include<iostream>
using namespace std;
// Forward Declaration 
class c2;

class c1{
    int val1;
    friend void Exchange(c1 &, c2 &);
    public:

    void indata(int a){
        val1 = a;
    }
    void Displayvalue(void){
        cout<<val1<<endl;
    }
   
};
class c2{
    int val2;
    friend void Exchange(c1 &, c2 &);
    public:
        void indata(int b){
            val2 = b;
        }
        void Displayvalue(void){
            cout<<val2<<endl;
        }
   
};

void Exchange(c1 &x, c2 &y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;

}
int main(){

    c1 a1;
    a1.indata(34);
    a1.Displayvalue();
    c2 b1;
    b1.indata(64);
    b1.Displayvalue();

    cout<<endl;
    
    Exchange(a1, b1);

    cout<<"The value of c1 after exchange becomes: ";
    a1.Displayvalue();
    cout<<"The value of c2 after exchange becomes: ";
    b1.Displayvalue();
  
    return 0;
}