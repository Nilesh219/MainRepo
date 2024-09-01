#include<iostream>

using namespace std;

class complex{
    int real, imaginary;
    public:
        getData(){
            cout<<"The Real Number is "<<real<<endl;
            cout<<"The Imaginary Number is "<<imaginary<<endl;
        }
        setData(int a, int b){
            real = a;
            imaginary = b;
        }
};
int main()
{
    // complex c1;
    // complex *ptr = &c1;
    // c1.setData(5,7);
    // c1.getData();

    // (*ptr).setData(5,7);
    // (*ptr).getData();

    //It is Dynamical complex class accessed which are the new Operator
    complex *ptr1 = new complex;
    // (*ptr1).setData(7,5); // It is Derefernces is *ptr for value  
    // (*ptr1).getData();

    // ptr1->setData(8,9); // It is arrow Operator simple derefernces for vlaue
    // ptr1->getData();


    // new operator using array
    complex* ptr2 = new complex[4];
   //Watch in Next Lecture

    return 0;
}