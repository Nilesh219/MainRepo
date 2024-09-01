#include<iostream>
using namespace std;

class Shopitem{
    private:
        int id;
        float price;
    public:
        setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"The Product id is "<<id<<endl;
            cout<<"The Product price is "<<price<<endl;
        }
};
int main()
{
    int size  = 3;
    // It is used By using pionter Dynamically memory allocation size 3
    Shopitem *ptr = new Shopitem[size]; 
    //in class used a pointer by Dynamucally memory allocation


    int p;
    float q;
    Shopitem *tempptr = ptr;
    /*
        tempptr used for print a data because the when ptr setData whenever
        Increament it go forward in array
        1  2  3
              |
              V
              ptr
        when we setData first then ptr goes to size-1 index 
        and next we using ptr to getData second it will not 
        print the setData vlaue because ptr increamneted it
        does't not go in Backword Direction ptr because of 
        we using tempptr = ptr tempptr are in a ptr frist 
        index 0 it will print The getData function
    */

   //setData in Input 
    for(int i = 0; i < size; i++){
        cout<<"The Product Item no "<<i+1<<endl;
        cout<<"Enter the Product id and price = ";
        cin>>p;
        cin>>q;
        cout<<endl;
        ptr->setData(p, q);
        ptr++;
    }


    //getData to print output
    for(int i = 0; i <size; i++){
        cout<<"You Product list no "<<i+1<<endl;
        tempptr->getData();
        cout<<endl;
        tempptr++;
    }
    return 0;
}