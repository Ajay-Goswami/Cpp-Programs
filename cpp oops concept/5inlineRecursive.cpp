
//Q5) Write a program to show the use of inline and recursive function in C++.

#include<iostream>

using namespace std;


int fact(int n)
{
 
   if(n==1 || n==0)
        return 1;

    return n* fact(n-1);
}


inline sum(int a, int b)
{
    return a+b;
}


int main()
{
    cout<<"sum : "<<sum(12,56)<<endl;

    int n;

    cout<<"Enter the value of N for find factorial: ";

    cin>>n;

    cout<<"factorial ="<<fact(n)<<endl; 

    cout<<"sum : "<<sum(12,56)<<endl;

    return 0;

}
