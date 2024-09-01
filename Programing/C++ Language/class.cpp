#include<iostream>
#include<string>
using namespace std;
class Employee 
{
    private :
        int a, b, c; // Decleartion
    public :
        int d, e;
        void setData(int a1, int b1, int c1);
        void getData()
        {
            cout<<"This value a = "<<a<<endl;
            cout<<"This value b = "<<b<<endl;
            cout<<"This value c = "<<c<<endl;
            cout<<"This value e = "<<d<<endl;
            cout<<"This value d = "<<e<<endl;

        }
};

void Employee :: setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

// class for Animals
class Animals
{
    private : 
        string name, int height, string color;
    public :
        
        void setData(string name1, int height1, string color1);
        void getData()
        {
            cout<<"This is name = "<<name<<endl;
            cout<<"This is height = "<<height<<endl;
            cout<<"This is color = "<<color<<end;
           
        };


};

void Animals :: setData(string name1[20], int height1, string color1{20})
{
        name = name1;
        height = height1;
        color = color1;
}

int main(){
    
    Employee Nilesh;
    // Nilesh.a = 15;
    Nilesh.d = 34;
    Nilesh.e = 21;
    Nilesh.setData(1, 2, 4);
    Nilesh.getData();

    cout<<endl;
    
    Animals Dog;
    
    Dog.setData(tomy, 5.5, blue);
    Dog.getData();
    return 0;
}