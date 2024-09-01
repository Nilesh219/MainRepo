#include<iostream>
using namespace std;

int fib(int n)
{
    if(n<2)
    {
        return 1;
    }
    return fib(n-2) + fib(n-1);
    /*
        Logic for febonaci series how to nth term of fbonaci series 
        fib(n-2) + feb(n-1) ---> example we have n = 5
        fib(5-2) + feb(5-1) = fib(3) + fib(4) --> 3 + 4 = 7
        fib(3-2) + feb(3-1) = fib(1) + fib(2) && fib(4-2) + fib(4-1) = fib(2) + fib(3)
                          --> 1+2 = 3 && 2+3 = 5 --> 3 + 5 = 8

    */
}
int factorial(int n)
{
    if(n<=1) // example n = 5 then this condition 
    //when 5 * 4 * 3 * 2 * 1 -->1 then it condition 1<=1 contion true retrun only 1 and stop the Recursion
    {
        return 1;
    }
    return (n * factorial(n-1));
    /*
        Logic for factorial Numbers how it is run Recursively 
        n * factorial(n-1);
        if we have 5 * factorial(5-1) = 5 * factorial (4)
        5 * factorial(4-1) = 5 * factorial(3)
        5 * factorial(3-1) = 5 * factorial(2)
        5 * factorial(2-1) = 5 * factorial(1)
        if have condition factorial 1 then condition ture in if statment 1<=1
        5 * factorial(1)
        final 5 * 4 * 3 * 2 * 1 = 120
    */
}
int main(){
    
    // Recurisions ---> when function call it self or function call again and again
    // Factorial of Numers suppose we have Number 6! = 6 * 5 * 4 * 3 * 2 * 1;
    //Factorial 0! = 1
    //Factoruial 1! = 1
    int n;
    cout<<"Enter Number = ";
    cin>>n;

    // Febonaci series 
    //there are present 1 1 2 3 5 8 13 21 .....
    // we have 1 and 1 then 1 + 1 = 2 --> 1 + 2 = 3 --> 2 + 3 = 5......


    cout<<"The Number  = "<<n<<" Factorial of Number = "<<factorial(n)<<endl;
    cout<<"The Number = "<<n<<" Fibonaci series nth term = "<<fib(n)<<endl;
    return 0;
}