//ALGORITHM

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v;

    v.push_back(87);
    v.push_back(1);
    v.push_back(112);
    v.push_back(99);
    v.push_back(22);

    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    //sorting-> this is based on intro sort
    //intro sort is a combination of 3 algorithm-> quick,heap,insrtion sort 
    sort(v.begin(),v.end());
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    //binary seach
    cout<<"Find element "<<binary_search(v.begin(),v.end(),99)<<endl;

    // cout<<find(v.begin(),v.end(),12)<<endl;


    //upper bound and lower bound
    cout<<"Upper bound "<<upper_bound(v.begin(),v.end(),87)-v.begin()<<endl;
    cout<<"Lower bound "<<lower_bound(v.begin(),v.end(),87)-v.begin()<<endl;

    int a=3;
    int b=34;

    cout<<"Max of a, b is "<<max(a,b);
    cout<<"Min of a, b is "<<min(a,b);

    swap(a,b);
    cout<<"After swappong a is "<<a<<endl;
    cout<<"After swappong b is "<<b<<endl;

    string s="abcdef";
    reverse (s.begin(),s.end());
    cout<<"After reversing "<<s<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After rotating "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;


    return 0;
}