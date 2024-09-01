#include<iostream>

using namespace std;


class New{
    int* data;
    public:
        New(){
            data = new int[10];
        }
        ~New(){
            delete[] data;
        }
};
int main()
{
    
    return 0;
}