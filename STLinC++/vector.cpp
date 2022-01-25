#include<iostream>
#include<vector>

using namespace std;

vector<int> push(vector<int> v)
{
    v.push_back(12);
    v.push_back(35);
    v.push_back(24);
    v.push_back(21);
    v.push_back(121);
    return v;
}

vector<int> pop(vector<int> v)
{
    v.pop_back();
    v.pop_back();
    return v;
}

void print(vector<int> v)
{
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

void printSizeCapacity(vector<int> v)
{
    cout<<"Capacity :"<<v.capacity()<<endl;
    cout<<"Size :"<<v.size()<<endl;
}

int main()
{
    vector<int> v;
    
    v=push(v);

    print(v);
    printSizeCapacity(v);

    v=pop(v);    

    print(v);
    printSizeCapacity(v);
    

    cout<<v.at(2);
    // cout<<v.at(6);
}