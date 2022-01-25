//MAP
//MAP HAS KEYS AND VALUE
//1 keys points only one value

//Ordered map   ->      balanced tree       //searching  -> O(log n)
//unordered map     ->  hash table          //searching  -> O(1)

#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int,string> m;
    //int->key          string->value

    //inserting values
    m[1]="AJAY";
    m[2]="GOSWAMI";
    m[12]="ajay";
    m[11]="goswami";

    //inserting keys and value
    m.insert({5, "Ajay Goswami"});
    m.insert({4, "this is key number 4"});
    m.insert({7, "this is key number 7"});

    for(auto i:m)
    {
        cout<<i.first<<" ";
    }
    cout<<endl;

    for(auto i:m)
    {
        cout<<i.second<<"\n";
    }
    cout<<endl;

    // cout<<"m[0] "<<m.at(0)<<endl;                //gives an error because in 0th key we are not storing any value->      out of range
    
    cout<<"m[1] "<<m.at(1)<<endl;
    cout<<"m[2] "<<m.at(2)<<endl;
    cout<<"m[12] "<<m.at(12)<<endl;

    cout<<"m[7] "<<m.at(7)<<endl;

    // cout<<"m[4] "<<m.at(4)<<endl;                //gives an error because in 0th key we are not storing any value->      out of range
    // cout<<m.at(3)<<endl;                         //gives an error because in 0th key we are not storing any value->      out of range

    //count is used for finding
    cout<<"finding 7 ->"<<m.count(7)<<endl;
    cout<<"finding -7 ->"<<m.count(-7)<<endl;
    cout<<endl;
    
    cout<<"before erasing elements are "<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    //erase an element
    m.erase(11);
    m.erase(12);


    cout<<"after erasing 2 elements are "<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;


    auto it =m.find(5);
    for(auto i=it; i!=m.end(); i++)
    {
        cout<<(*i).first<<endl;
    }

    return 0;
}