 
/* Q1) Write a program in C++ to show how namespaces work. Create 2 variables and functions with same name inside different namespaces and access them from the main method. */

#include<iostream>
using namespace std;

namespace name1
{
    int n=12;
    void P()
    {
        cout<<"This is P function which is in namespace name1\n";
    }
}
namespace name2
{
    int m= 18;

    void P()
    {
        cout<<"This is P function which is in namespace name2\n";
    }
}
namespace
{
    int x= 200;             // Globally declared x
    int y=100;              // Globally declared m
}

int main()
{
    
    int n=1;
    int m=2;

    cout<<"global x = "<<x<<endl;          //print global x = 200
    cout<<"global y = "<<y<<endl;          //print global y = 100

    cout<<"Value of n which is in scope is = "<<n<<endl;
    cout<<"Value of n which is in namespace(outside the loop) is = "<<name1::n<<endl;

    cout<<"Value of m which is in scope is = "<<m<<endl;
    cout<<"Value of m which is in namespace(outside the loop) is = "<<name2::m<<endl;

    name1::P();          // Call 'P' function which is in namespace name1 
    name2::P();          // Call 'P' function which is in namespace name2

    return 0;
}

