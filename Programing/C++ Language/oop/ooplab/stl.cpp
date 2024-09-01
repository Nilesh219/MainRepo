#include<iostream>
#include<vector>

using namespace std;
template <class T>
//it is Diplay function for vector list
void Display(vector<T> &v){
    cout<<"displaying this vector"<<endl;
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<< " ";
    }
    cout<<endl;
}
int main()
{
    vector<int> vec1; // zero lenght vector
     int size, element = 5;
    //get the size of vector list
    // cout<<"Enter the size of list vector = ";
    // cin>>size;
    //get the Element of vector list
    // for(int i = 0; i < size; i++)
    // {
    //     cout<<"Enter the element of vector list = ";
    //     cin>>element;
    //     vec1.push_back(element); //it will push the element in vector list
    // }
    // Display(vec1);
    // vec1.pop_back(); //it will pop the element in vector list
    // Display(vec1);


    // Display(vec1);
    // vector<int> :: iterator iter = vec1.begin(); //It will pointer the first element in the list
    // vec1.insert(iter,7); //It will insert the element in the fornt of the list
    // Display(vec1);

    vector<char> vec2(4); // 4-element character vector 
    // vec2.push_back('5');
    // Display(vec2);
    // vector<char> vec3(vec2); // 4-element character vector form vec2
    // Display(vec3);
    vector<int> vec4(6,3); // 6-element vector of 3s
    Display(vec4);
    cout<<vec4.size();//size of vector 
   

   
    

   
    return 0;
}