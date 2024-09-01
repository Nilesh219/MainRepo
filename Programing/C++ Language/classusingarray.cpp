#include<iostream>
using namespace std;

class Employee{

    int id;
    int salary;

    public :
        void setData(void){
            cout<<"Enter the id of Employee"<<endl;
            cin>>id;
            salary = 122;

        }
        void getData(void){
            cout<<"You Entered id is "<< id<<endl;

        }
};
int main()
{
    // Employee Nilesh, Sujal, Anuj, joshua;

    // Nilesh.setData();
    // Nilesh.getData();

    Employee fb[4];

    // fb[0].setData();
    // fb[0].getData();

    for(int i = 0; i < 4; i++)
    {
        fb[i].setData();
        fb[i].getData();

    }
    return 0;
}