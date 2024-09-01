#include<iostream>
#include<map>
#include<string>
//it form STL
// map is an associative array
using namespace std;

int main()
{
    map<string, int> markMap;

    markMap["joshua"] = 5;
    markMap["Nilesh"] = 7;
    markMap["rahul"] = 2;

    map<string, int> :: iterator itr;

    markMap.insert({{"kalpesh", 56}, {"lavadesh", 57}});

    for(itr = markMap.begin(); itr != markMap.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<"\n";
    }

    cout<<"The size of map "<<markMap.size()<<endl;
    cout<<"The max size of map "<<markMap.max_size()<<endl;
    cout<<"The Emppty size return "<<markMap.empty()<<endl;
    return 0;
}