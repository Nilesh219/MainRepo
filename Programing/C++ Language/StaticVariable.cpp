#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count ;

public:
    void setData(void)
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }

    void getData(void)
    {
        cout << "You Entered Employee id is " << id << " and Employee Number is  " << count << endl;
    }

    static void getcount(void){
        cout<<"The Value of count is "<<count<<endl;
    }
};
int Employee ::count; //= 1000
int main()
{
    Employee Nilesh, sujal, Anuj;

    Nilesh.setData();
    Nilesh.getData();
    Employee::getcount();

    sujal.setData();
    sujal.getData();
    Employee::getcount();

    Anuj.setData();
    Anuj.getData();
    Employee::getcount();
    return 0;
}