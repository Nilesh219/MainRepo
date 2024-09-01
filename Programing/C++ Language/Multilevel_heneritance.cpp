#include <iostream>
using namespace std;
// Multilevel Inheritance

/*
    Note:
        If we are inheritance B frome A and c from B:[A--->B--->C]
        1. A is the base class for B and B is the class for c
        2.A-->B-->C is called Inheritance path
*/
class Student
{
    protected:
        int Roller_Number;

    public:
        void setRoller_Number(int);
        void getRoller_Number(void);
};
void Student ::setRoller_Number(int n)
{
    Roller_Number = n;
}
void Student ::getRoller_Number()
{
    cout << "The Roller Number is " << Roller_Number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};

void Exam ::set_marks(float m1, float m2)
{
   maths = m1;
   physics = m2;
}
void Exam ::get_marks()
{
    cout << "The Maths Marks is " << maths << endl;
    cout << "The physics Marks is " << physics << endl;
}

class Result : public Exam
{
    float percentage;

    public:
        void Display()
        {
            getRoller_Number();
            get_marks();
            cout << "The Final Result percentage = " << (maths + physics) / 2 << endl;
        }
};
int main()
{
    Result Nilesh;
    Nilesh.setRoller_Number(212);
    Nilesh.set_marks(92.0, 94.0);
    Nilesh.Display();
    return 0;
}