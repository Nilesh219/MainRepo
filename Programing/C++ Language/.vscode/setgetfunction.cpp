#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
typedef struct bdate{
    int day;
    int month;
    int year;
}bd;

setname(string *name, string temp){
    int i = 0;
    while(i < temp.length())
    {
        if(temp[i]>'0' && temp[i] < '9')
        {
            cout<<"Invalid Name "<<endl;
        }
    }
    *name = temp;
}
string getname(string name)
{
    cout<<name<<endl;
}
void setphoneno(string *phone, string temp)
{
    if(temp.length() > 10)
    {
        cout<<"Invaild Phone Number"<<endl;
    }
    *phone = temp;
}
string getphone(string phone)
{
    cout<<phone<<endl;
}
void setaddress(string * address, string temp)
{
    *address = temp;
}
string getaddress(string address)
{
    cout<<address<<endl;
}
void setsalary(int* salary, int temp)
{
    if(temp<0){
        cout<<"Invaild salary"<<endl;
    }
    *salary = temp;
}
int getsalary(int salary)
{
    cout<<salary<<endl;
}
void setcompanyname(string * cname, string temp)
{
    int i = 0;
    while(i < temp.length())
    {
        if(temp[i] > '0' && temp[i] < '9')
        {
            cout<<"Invaild company name "<<endl;
        }
    } 
    *cname = temp;
}
string getcompanyname(string cname)
{
    cout<<cname<<endl;
}
int setbirthdate(struct bdate bd)
{
    string bdate;
    if((bd.day < 1)||(bd.day > 31) ||(bd.month < 1) || (bd.month > 12) ||
    (bd.year < 1900)||(bd.year > 2023))
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int getage(int year){
    cout<<2023-year<<endl;
}

void setdesignation(string *designation , string temp)
{
    *designation = temp;
}
string getdesignation(string designation)
{
    cout<<designation<<endl;
}
void setId(int * Id, int temp)
{
    if(temp < 0)
    {
        cout<<endl;
    }
    else{
        *Id = temp;
    }
}
int getId(int Id)
{
    cout<<Id<<endl;
}
void setmarks(int *marks, int temp)
{
    if(marks<0)
    {
        cout<<"Invalid marks"<<endl;
    }
    else
    {
        *marks = temp;
    }
}
int getmarks(int marks)
{
    cout<<marks<<endl;
}
int main(){
    string name;
    int salary;
    string address;
    string phone;
    string cname;
    string designation;
    int Id;
    int marks;

    //For Person
    setname(&name,"Nilesh");
    cout<<"Person name is ";
    getname(name);
    setaddress(&address,"datar mala");
    cout<<"Person Address is ";
    getaddress(address);
    struct bdate bd1;
    bd1.year = 2003;
    bd1.month = 5;
    bd1.day = 25;
    getage(bd1.year);
    cout<<endl;
    
    //for student
    cout<<"The name of the student is ";
    setname(&name,"Dattatreya");
    getname(name);
    cout<<"The marks obtained are ";
    setmarks(&marks,34);
    getmarks(marks);
    cout<<"The Id of the student is ";
    setId(&Id,234);
    getId(Id);

    //for employee
    setname(&name,"pratik");
    cout<<"The name of the employee is ";
    getname(name);
    cout<<"The ID of the employee is ";
    setId(&Id,23);
    getId(Id);
    cout<<"The name of company of the employee is ";
    setcompanyname(&cname,"Microsoft");
    getname(cname);
    cout<<"The salary of the employee is ";
    setsalary(&salary,54000);
    getsalary(salary);
    cout<<"The designation of the employee is ";
    setdesignation(&designation,"Manager");
    getdesignation(designation);
    cout<<endl;
}