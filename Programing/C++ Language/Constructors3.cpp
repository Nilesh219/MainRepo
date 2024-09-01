#include<iostream>
#include<cmath>
using namespace std;

// class point{
//     int x,y;

//     public:
//         point(int a, int b){
//             x = a;
//             y = b;
//         }

//         Displaypoint(void){
//             cout<<"The point is ( "<< x <<", "<<y <<" )"<<endl;
//         }

// };

// int main(){
//     point p(1, 1);
//     p.Displaypoint();
//     return 0;
// }

// Question slove using c++ math sqrt
// Create a fuction (Hint: Make it a friend fuction) which take 2 point object and
//computes the distance between those 2 points

// Use these examples to check your code:
// Distance between (1, 1) and (1, 1) is 0
// Distance between (0, 1) and (0, 6) is 5
// Distance between (1, 0) and (70, 0) is 69

// Formula Under square root ((x2 - x1)^2 + (y2 - y1)^2)

class point{
    int a, b;

    public:
        friend point Distancepoint(point o1, point o2);
        void setNumber(int n1, int n2){
           a = n1;
           b = n2; 
        }
      
       void printNumber()
       {
            cout << "The Complex Number " << a << " + " << b << " i" << endl;
       }

};

 point Distancepoint(point o1, point o2){
    point o3;
    o3.setNumber(sqrt(o1.a - o2.a) + sqrt(o1.b - o2.b));
    return o3;
}

int main(){
    point c1, c2,  result;
    c1.setNumber(1,1);
    c1.printNumber();

    c2.setNumber(1,1);
    c2.printNumber();

    result = Distancepoint(c1,c2);
    result.printNumber();
}

// #include <iostream>
// #include<cmath>
// using namespace std;

// class complex
// {
//     int a, b;

// public:
  
//     friend complex setcomplexSum(complex o1, complex o2);
//     void setNumber(int n1, int n2)
//     {
//         a = n1;
//         b = n2;
//     }

//     void printNumber()
//     {
//         cout << "The Complex Number " << a << " + " << b << " i" << endl;
//     }
// };

// complex setcomplexSum(complex o1, complex o2)
// {
//     complex o3;
//     o3.setNumber(sqrt(o1.a - o2.a) + (o1.b - o2.b));
//     return o3;
// }
// int main()
// {

//     complex c1, c2, sum;
//     c1.setNumber(1, 1);
//     c1.printNumber();

//     c2.setNumber(1, 1);
//     c2.printNumber();

//     sum = setcomplexSum(c1, c2);
//     sum.printNumber();
//     return 0;
// }