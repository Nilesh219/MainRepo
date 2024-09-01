#include <iostream>
using namespace std;

int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "This for a Constructor called  Object Number " << count << endl;
    }

    ~num()
    {
        cout << "This is for a Destructor called  Object Number " << count << endl;
        count--;
    }
};
int main()
{
    cout << "We inside in the Main Fuction " << endl;
    cout << "The Creating first Object n1" << endl;

    num n1;
    {
        cout << "Entering the block " << endl;
        cout << "Creating the Two more Object " << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}