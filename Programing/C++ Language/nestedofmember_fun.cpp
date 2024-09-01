#include <iostream>
#include<string>
using namespace std;
// creat a binary number input and print compliement and dispaly a 
// binary Number
class binary
{
private:
    string s;
   

public:
    void red_bin(void);
    void chek_bin(void);
    void compliment_bin(void);
    void display_bin(void);
};
void binary ::red_bin(void) //it get a input thruogh the user or read input
{
    cout << "Enter the Binary Number = ";
    cin >> s;
}
void binary ::chek_bin(void) //it is check weather binary Number valid or not
{
    // chek_bin(); // Nested member using another function
    //  it also run the programme as same
    for(int i = 0; i < s.length(); i++)
    {
        if(s.at(i) != '0' && s.at(i) != '1')
        {
            cout<<"Incorrect Binary Number"<<endl;
            exit(0);
        }
    }    
}
void binary ::compliment_bin(void) //it copliement the binary Number 
{
    
    for(int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
    cout<<"Compliement of binary Number "<<endl;
}
void binary ::display_bin(void) //it is displying the binary Numbers
{
    cout<<"The binary Number"<<endl;
    for(int i = 0; i<s.length(); i++)
    {
        cout<< s.at(i);
    }
    cout<<endl;
}
int main()
{

    binary b;
    b.red_bin();
    b.chek_bin();
    b.display_bin();
    b.compliment_bin();
    b.display_bin();
    return 0;
}