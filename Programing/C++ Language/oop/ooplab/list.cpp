#include<iostream>
#include<list>

//it form STL the list using we can create a list like linked list which was easily we push pop elemeent form list 

using namespace std;

void display(list<int> &lst){
    list<int> :: iterator it;
    for(it = lst.begin(); it != lst.end(); it++)
    {
        cout<<*it<<" ";
    }
}
int main()
{
    list<int> list1; //empty list with zero size

    list1.push_back(2);
    list1.push_back(4);
    list1.push_back(5);
    list1.push_back(7);

    display(list1);

    cout<<endl;

    list<int> list2(4); //empty list with size 4

    list<int> :: iterator it = list2.begin();

    *it = 3;
    *it++;
    *it = 5;
    *it++;
    *it = 6;
    *it++;
    *it = 7;
    *it++;
    
    display(list2);

    cout<<endl;

    list1.pop_back(); //pop list back element
    list1.pop_back();
    display(list1);

    cout<<endl;

    list1.pop_front(); //pop list front element
    display(list1);

    list1.push_back(7);
    list1.push_back(5);
    display(list1);

    // cout<<endl;

    // list1.remove(5);
    // display(list1);

    cout<<endl;

    list1.sort(); //sort the list 
    display(list1);
    return 0;
}