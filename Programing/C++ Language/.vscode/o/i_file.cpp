#include<iostream>
#include<string>
#include<fstream>
using namespace std;
/*
    The useful classes for working with files in c++ are:

    1. fstreambase
    2. ifstream --> derived from fstreambase
    3. ofstream --> derived from fstreambase
*/
// In order work with files in c++, you will have to open it. 
//primarily, there are 2 ways to open a file:
//1.Using the constructor 
//2.Using the member function open() of the class

int main()
{
    // string st = "i am fine ";
    // //opening files using constructor and Writing it
    // ofstream out("simple.txt"); // Write operation 
    // out<<st;
    
    string st2;
    ifstream in("simple.txt"); // Read operation
    getline(in, st2);
    getline(in, st2);
    cout<<st2;

    return 0;
}