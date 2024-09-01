#include<iostream>
#include<cmath>
using namespace std;

class Calulator{
    private:
        double a, b;

    public:
        double Addition(double num1, double num2){
            a = num1;
            b = num2;
            return num1 + num2;
        }
        double Substraction(double num1, double num2){
           a = num1;
            b = num2;
            return num1 - num2;
        }
        double Multiplication(double num1, double num2){
            a = num1;
            b = num2;
            return num1 * num2;
        }
        double Division(double num1, double num2)
        {
            if(num2 == 0)
            {
                cout<<"!!!Error!!!"<<endl;
            }
            a = num1;
            b = num2;
            return num1 / num2;
        }
        
};
class ScientificCalulator{

    double a, b;

    public:
        double power(double num1, double num2)
        {
            a = num1;
            b = num2;
            return pow(num1, num2);
        }
        double SquarRoot(double num1)
        {
            a = num1;
            if(num1 < 0)
            {
                std::cout<<"Error : Square Rooot of Negative Number "<<std::endl;
                return 0;
            }
            else
            {
                 return sqrt(num1); 
            }
        }
        double sine(double num1)
        {
            a = num1;
            return sin(num1);
        }
        double cose(double num1)
        {
            a = num1;
            return cos(num1);
        }
        double tane(double num1)
        {
            a = num1;
            return tan(num1);
        }

};
// Multiple Inheritance usign here
// private and public = 
class HybridCalculator: public Calulator, public ScientificCalulator
{
    private:
        int a;
    public:
        double duoble_sqrt(double num1)
        {
            a = num1;
            if(num1 < 0)
            {
                cout<<"Error Square root of Negative Number"<<endl;
            }
            return sqrt(2*(num1));
        }
};
int main(){
    
    // Calulator cal;
    // ScientificCalulator scical;
    HybridCalculator cal;
    double num1, num2;
   
        std::cout<<"Enter Number1 = ";
        std::cin>>num1;
   
        std::cout<<"Enter Number2 = ";
        std::cin>>num2;

        int choice;
        std::cout<<"1. Addition"<<endl;
        std::cout<<"2. Substraction"<<endl;
        std::cout<<"3. Multipication"<<endl;
        std::cout<<"4. Division"<<endl;
        std::cout<<"5. Power "<<endl;

        
        std::cout<<"6. Square Root "<<endl;
        std::cout<<"7. sine "<<endl;
        std::cout<<"8. cose "<<endl;
        std::cout<<"9. tane "<<endl; 
        std::cout<<"Enter Your Choice = ";
        std::cin>>choice;
        

        switch(choice)
        {
            case 1:
                std::cout<<num1 <<" + "<< num2 << " = " << cal.Addition(num1, num2)<< std :: endl;
            break;

            case 2:
                std::cout<<num1 <<" - "<< num2 << " = " << cal.Substraction(num1, num2) << std :: endl;
            break;

            case 3:
                std::cout<<num1 <<" * "<< num2 << " = " << cal.Multiplication(num1, num2) << std :: endl;
            break;

            case 4:
                std::cout<<num1 <<" / "<< num2 << " = " << cal.Division(num1, num2) << std :: endl;
            break;

            case 5:
                std::cout<<num1 << " ^ "<< num2 << " = "<< cal.power(num1, num2) << std:: endl;
            break;

            
        }

        std::cout<<"Enter Number1 = ";
        std::cin>>num1;

        std::cout<<"6. Square Root "<<endl;
        std::cout<<"7. sine "<<endl;
        std::cout<<"8. cose "<<endl;
        std::cout<<"9. tane "<<endl;
        std::cout<<"10. Double Square root "<<endl; 
        std::cout<<"Enter Your Choice = ";
        std::cin>>choice;
        switch(choice)
        {
            case 6:
                std::cout<<" sqrt("<< num1 <<") "<<cal.SquarRoot(num1) <<std::endl; 
            break;

            case 7:
                std::cout<<" sin("<< num1 << ") "<<cal.sine(num1) << std::endl;
            break;

            case 8:
                std::cout<<" cos("<< num1 << ") "<<cal.cose(num1) << std::endl;
            break;

            case 9:
                std::cout<<" tan("<< num1 << ") "<<cal.tane(num1) << std::endl;
            break;

            case 10:
                std::cout<< "Doublesqrt( "<< "sqrt ( "<<num1 << ") "<<")"<< "= "<<cal.duoble_sqrt(num1)<<std::endl; 
            break;
        }
    

    
    return 0;
}