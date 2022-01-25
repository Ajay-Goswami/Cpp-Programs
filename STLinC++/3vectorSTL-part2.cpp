// VECTOR UISNG ITERATOR

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> vec(5,1);          //creating a vector of size 5 and initialize all values by 1
    cout<<"Print vector array is :";
    for (int i:vec)         
    {
        cout<<i<<" ";
    }cout<<endl;

    vector<int> last(vec);
    cout<<"Copied vector is ";
    for(int j:last)
    {
        cout<<j<<" ";
    }cout<<endl;
    
    // cout<<"Begin iterator :" << vec.begin(); 
    // cout<<"end iterator :" << last.end(); 
}