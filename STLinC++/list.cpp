#include<iostream>
#include<list>

using namespace std;

list<int> push(list<int> l,int n);
list<int> pop(list<int> l);
void print(list<int> l);
void reverse(list<int> l);
list<int> sort(list<int> l);


int main()
{
    list <int> l;
    int n;
    cout<<"enter the number of elements you want to push"<<endl;
    cin>>n;
    l= push(l,n);
    print(l);
    l=pop(l);
    print(l);
    reverse(l);
    l=sort(l);
    print(l);
}

list<int> push(list<int> l, int n)
{
    int x;
    for(int i; i<n; i++)
    {
        cin>>x;
        l.push_back(x);
    }
    return l;
}

list<int> pop(list<int> l)
{
    l.pop_back();
    return l;
}
void print (list<int> l)
{
    list<int> :: iterator itr;
    cout<<"list is "<<endl;
    for(itr=l.begin(); itr!=l.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
}

void reverse (list<int> l)
{
    l.reverse();
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

list<int> sort(list<int> l)
{
    l.sort();
    return l;
}