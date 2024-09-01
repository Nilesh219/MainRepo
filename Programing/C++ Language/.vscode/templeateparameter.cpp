#include<iostream>
using namespace std;
template <class T1, class T2> //paramterized template which was contain int and float
class Data{
    public:
        T1 data1;
        T2 data2;

        Data(T1 a, T2 b)
        {
            data1 = a;
            data2 = b;
        }
        void Display()
        {
           cout<<this->data1<<" "<<this->data2;
        }

};
int main(){
    Data<int, float> obj(7, 5.5);
    obj.Display();
    return 0;
}