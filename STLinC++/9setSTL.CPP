//SET
//its implementation is like BST
//only unique element stroed
//element returened in sorted order
//it is like it print 1 element only once
/*  example we input 5 element->    1 4 1 3 4  
    so when we print its element its output is -> 1 4 3     */

//set are of two type
//ordered and unoredered


#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int> s;

    //we can add elements in set by using insert function
    //time complexity of insertion in binary search is O(log n) 
    s.insert(10);
    s.insert(10);
    s.insert(10);
    s.insert(111);
    s.insert(12);
    s.insert(222);
    s.insert(222);
    s.insert(222);
    s.insert(222);
    s.insert(34);
    s.insert(78);
    s.insert(78);

    for(int i:s)
    {
        cout<<" "<<i;
    }
    cout<<endl;

    s.erase(s.begin());
    for(int i:s)
    {
        cout<<" "<<i;
    }
    cout<<endl;

    set<int> :: iterator it ;
    it =s.begin();
    it++;

    s.erase(it);
    for(int i:s)
    {
        cout<<" "<<i;
    }
    cout<<endl;

    //count is used for checking whether the number is present or not
    //0 means not present 
    //1 means present
    cout<<"check given number is present or not  "<<s.count(5)<<endl;
    cout<<"check given number is present or not  "<<s.count(222)<<endl;

    //find function returns iterator
    set<int>:: iterator fIt;
    fIt= s.find(78);
    cout<<" value present or not using find function "<<*fIt<<endl;

    for(auto it= fIt; it!=s.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    return 0;
}