/* Create a function to add 2 numbers and call it from main method in C++. */
#include<iostream>
using namespace std;

void add(int a, int b)
{
    int sum=a+b;
    cout<<"Sum of "<<a<<" and "<<b<<" is:"<<sum<<endl;
}
int main()
{
    int x,y;
    cout<<"NAME- AJAY GOSWAMI  -----   SEC-F  -----   STUDENT ID - 20011502"<<endl;
    cout<<"Enter 1st number: ";
    cin>>x;
    cout<<"Enter 2nd number: ";
    cin>>y;

    add(x,y);
}