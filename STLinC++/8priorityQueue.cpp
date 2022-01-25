//PRIORITY QUEUE
//DEFAULT PRIORITY IS BASED ON MAX HEAP

#include<iostream>
#include<queue>

using namespace std;

int main()
{
    //this is default max heap means remove greatest first
    priority_queue<int> maxP;

    //we can create min heap 
    priority_queue<int, vector <int> ,greater<int> > minP;

    maxP.push(1); 
    maxP.push(2); 
    maxP.push(3); 
    maxP.push(4); 
    maxP.push(5); 
    maxP.push(6); 

    //max priority queue 1st prints maximun means in decreasing order
    cout<<"size of max heap priority queue is "<<maxP.size()<<endl;
    int s=maxP.size();
    for(int i=0; i<s; i++)
    {
        cout<<maxP.top()<<" ";
        maxP.pop();
    }cout<<endl;

    minP.push(11);
    minP.push(12);
    minP.push(55);
    minP.push(34);
    minP.push(2);
    minP.push(100);

    //min priority queue 1st prints minimum means in increaing order
    cout<<"size of min heap priority queue is "<<maxP.size()<<endl;
    int n=minP.size();
    for(int i=0; i<n; i++)
    {
        cout<<minP.top()<<" ";
        minP.pop();
    }cout<<endl;

    //after poping all elements queue is empty in checking empty funtion output will be 1 means true
    cout<<"Check empty or not "<<maxP.empty()<<endl;
    cout<<"Check empty or not "<<minP.empty()<<endl;

}