#include<iostream>

using namespace std;

class shop
{
    int itemId[100];
    int itemprice[100];
    int counter;
   
    public :
         void initicounter(void) {counter = 0;}
         void setprice(void);
         void Displayprice(void);

};
void shop :: setprice(void)
{
    cout<<"Enter the itemid no. "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter the itemprice "<<endl;
    cin>>itemprice[counter];
    counter ++;
}
void shop :: Displayprice(void){
    for(int i = 0; i < counter; i++)
    {
        cout<<"The itemId is "<<itemId[i]<<" is price "<<itemprice[i]<<endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initicounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.Displayprice();

    return 0;
}