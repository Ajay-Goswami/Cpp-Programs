//DOUBLE ENDED QUEUE

#include<iostream>
#include<deque>

using namespace std;

int main()
{
    //creating double ended queue
    deque<int> d;

    //inserting an element in 1st
    d.push_front(2);
    d.push_front(4);
    d.push_front(6);
    d.push_front(8);

    //inserting an element in last
    d.push_back(1);
    d.push_back(3);
    d.push_back(5);
    d.push_back(7);

    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;

    //deleting an element in first
    d.pop_front();

    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;

    //deleting an element in end
    d.pop_back();

    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;

    //print 1st index element
    cout<<"print 1st index element is "<<d.front()<<endl;

    cout<<"front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;

    cout<<"empty "<<d.empty()<<endl;

    cout<<"before erase size is "<<d.size()<<endl;
    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;

    //in erase function we have to give 2 iterator from where to where we want to delete
    d.erase(d.begin(),d.begin()+1);

    cout<<"after erase size is "<<d.size()<<endl;
    for(int i:d)
    {
        cout<<i<<" ";
    }cout<<endl;

    //  Returns the size() of the largest possible %deque.  
    cout<<"maxsize "<<d.max_size();

    return 0;
}