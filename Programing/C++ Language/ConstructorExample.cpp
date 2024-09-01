#include<iostream>

//Example of Contructor
//BankDeposit Amount How will increase with InterestRate 
using namespace std;
class BankDeposit{
    int principle;
    int year;
    float interestrate;
    float returnvalue;

    public:
        // BankDeposit(){}  //It is Contructor that complier can understand BankDeposit are there 
        BankDeposit(int p, int y, float r);//It is InterestRate will in a friaction 
        BankDeposit(int p, int y, int r);//It is InterestRate will in a Perentage
        void show();//Display the output

};
BankDeposit :: BankDeposit(int p, int y, float r)
{
     principle = p;
     year = y;
     interestrate = r;
     returnvalue = principle;

   for(int i = 0; i < year; i++) // It for Loop for How Many time to invest amount then add a interestrate 
    // and calculate the RetrunValue
    {
        returnvalue = returnvalue * (1+interestrate);
    }
    
}
BankDeposit :: BankDeposit(int p, int y, int r)
{
    principle = p;
    year = y;
    interestrate = float(r)/100 ;
    returnvalue = principle;

    for(int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1+interestrate);
    }
}
void BankDeposit :: show()
{
    cout<<endl<<"Your Deposited vlaue is "<<principle
        <<" after "<<year<<" year "<< "the Returnvalue "<<returnvalue
        <<endl<<"With Interestrate "<<interestrate<<endl;
}
int main(){

    BankDeposit b1, b2;
    int p, y;
    float r;
    int R;
    cout<<"Enter the Deposite Amount = ";
    cin>>p;
    
    cout<<"Enter the how many year you want Deposite Amount = ";
    cin>>y;
    
    cout<<"Enter the InterestRate of Bank = ";
    cin>>r;
    

    b1 = BankDeposit(p, y, r);
    b1.show();

    cout<<endl;

    cout<<"Enter the Deposite Amount = ";
    cin>>p;
    
    cout<<"Enter the how many year you want Deposite Amount = ";
    cin>>y;
    
    cout<<"Enter the InterestRate of Bank = ";
    cin>>R;
    
    b2 = BankDeposit(p, y, R);
    b2.show();

    return 0;
}