#include <iostream>
using namespace std;

/*
    Note:
    Inheritance
    class stduent               [Done]
    class Student ---> Test     [Done]
    class Student ---> Sports   [Done]
    class Test    ---> Result   [Done]
    class Sprots  ---> Result   [Done]

*/

/*
    Virtual Base class is used for to avoid the Multiple Inherited and Ambiguity
    It is case such as Dubplicate data Members are Created 
*/
class Student
{
protected:
    int Roll_no;

public:
    void set_Roll_no(int a)
    {
        Roll_no = a;
    }
    void print_Roller_no(void)
    {
        cout << "You are Roll Number is " << Roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float math, physics;

public:
    void set_marks(float m1, float m2)
    {
        math = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "You are Marks is " << endl
             << "Maths = " << math << endl
             << "Physics = " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "You are Score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float Total;

public:
    void set_result(float R)
    {
        Total = R;
    }
    void Display(void)
    {
        Total = math + physics + score;
        print_Roller_no();
        print_marks();
        print_score();
        cout << "You are Total Score is " << Total << endl;
    }
};
int main()
{

    Result Nilesh;
    Nilesh.set_Roll_no(21);
    Nilesh.set_marks(75.0, 89.5);
    Nilesh.set_score(9.0);
    Nilesh.Display();

    return 0;
}