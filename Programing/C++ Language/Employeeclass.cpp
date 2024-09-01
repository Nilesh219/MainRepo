#include <iostream>
using namespace std;

class employee
{
	string id;
	string name;
	int age;
	float salary;
	public:
		void set_id(string i)
		{
			id = i;
		}
		string get_id()
		{
			return id;
		}
		void set_name(string nam)
		{
			name = nam;
		}
		string get_name()
		{
			return name;
		}
		void set_age(int ag)
		{
			age = ag;
		}
		int get_age()
		{
			return age;
		}
		void set_salary(float s)
		{
			salary = s;
		}
		float get_salary()
		{
			return salary;
		}		

};

int main()
{
	employee e1;
	string ID, Name;
	int Age;
	float Salary;
	cout<<"enter employee id, name, age and salary"<<endl;
	cin>>ID>>Name>>Age>>Salary;
	e1.set_id(ID);
	e1.set_name(Name);
	e1.set_age(Age);
	e1.set_salary(Salary);
	
	cout<<"EMPLOYEE ID = "<<e1.get_id()<<endl;
	cout<<"EMPLOYEE NAME = "<<e1.get_name()<<endl;
	cout<<"EMPLOYEE AGE = "<<e1.get_age()<<endl;
	cout<<"EMPLOYEE SALARY = "<<e1.get_salary()<<endl;


return 0;
}