#include<iostream>
#include<fstream>
#include<string>
// File crated using the member function open() and end-of-file()/eof()
using namespace std;

int main(){

    //create a object which was the write the usign ofstream
    ofstream out;

    //using out and member function open() the file will be open which was craeated in txt formate
    out.open("sampl1.txt");

    //using cout write fill 
    out<<"This is sampl1 file "<<endl;
    out<<"This is new line in sampl1 file "<<endl;

    //close the file using close()
    out.close();

    // Create a object which was the Read the file usign ifstream
    ifstream in;

    //create a string which was Read the file data
    string st, st2;

    //using in and member function open() the file will be open which was craeated in txt formate
    in.open("sampl1.txt");

    //Read the data in file
    // in>>st>>st2;

    // cout<<st<<st2;

    //end of file member function using we can Read all the fill content
    while(in.eof() == 0){
        getline(in, st);
        cout<<st<<endl;
    }

    in.close();
    return 0;
}