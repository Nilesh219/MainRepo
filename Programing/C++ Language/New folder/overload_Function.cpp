#include<iostream>
// Question Example Overload Function Cuboid 
using namespace std;
class Cuboid{
    private:
        float length, breadth, height; 

    public:
        Cuboid(float l, float b, float h){
            length  = l;
            breadth = b;
            height  = h;
        }
        
        float Volume(){
            return length*breadth*height;
        }
        int Volume(int l, int b, int h){
            return l*b*h;
        }
};
int main(){
   float flen, fbreth, fhei;
    int ilen, ibreth, ihei;

   cout<<"For the float Cuboid "<<endl;
   cout<<"Enter the Length = ";
   cin>>flen;
   cout<<"Enter the Breadth = ";
   cin>>fbreth;
   cout<<"Enter the Height = ";
   cin>>fhei;

    Cuboid c1(flen , fbreth, fhei);

    cout<<"For the int Cuboid "<<endl;
    cout<<"Enter the Length = ";
    cin>>ilen;
    cout<<"Enter the Breadth = ";
    cin>>ibreth;
    cout<<"Enter the Height = ";
    cin>>ihei;

    int vol = c1.Volume(ilen, ibreth, ihei);
    cout<<"The Cuboid Volume in Float = "<<c1.Volume()<<endl;
    cout<<"The Cuboid Volume in int = "<<vol<<endl;
    
    return 0;
}