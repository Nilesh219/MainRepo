#include<iostream>
#include<string>
using namespace std;
class CHW{
    protected:
        string title;
        float rating;
    public:
        CHW(string s, float r){
            title = s;
            rating = r;
        }
        virtual void Display(){}
};
class CHWvideo : public CHW{
    float videolenght;
    public:
        CHWvideo(string s, float r, int vl) : CHW(s, r){
            videolenght = vl;
        }
        void Display(){
            cout<<"The title of the CHW "<<title<<endl;
            cout<<"The rating of CHW "<<rating<<" out of 5 "<<endl;
            cout<<"The video lenght of this video in mintues "<<videolenght<<endl;
        }
};
class CHWText : public CHW{
    int Words;
    public:
        CHWText(string s, float r, int Wc) : CHW(s, r){
            Words = Wc;
        }
        void Display(){
            cout<<"The title of the CHW "<<title<<endl;
            cout<<"The rating of CHW "<<rating<<" out of 5"<<endl;
            cout<<"The video Words of CHW is "<<Words<<endl;
        }
};

int main(){
    string title;
    float rating;
    int vl, Words;
    title = "This is Jango tutuorial ";
    rating = 4.5;
    vl = 15;
    CHWvideo newobj(title, rating, vl);

    title = "This is Jango tutuorial ";
    rating = 4.5;
    Words = 20;
    CHWText newobj1(title, rating, Words);

    CHW* tut[2];
    tut[0] = &newobj;
    tut[1] = &newobj1;

    tut[0]->Display();
    tut[1]->Display();

    return 0;
}