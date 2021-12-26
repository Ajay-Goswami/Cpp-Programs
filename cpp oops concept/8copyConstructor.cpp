
//Q8) Write a program to show how to perform a deep copy of an object using copy constructor in C++.

#include <iostream>

using namespace std;

class size
{
    public:
        int x;
        int *ptr;

    size()
    {
        x=200;
        ptr=&x;
    }

    size(size &obj)
    {
        x=obj.x;
        ptr=&x;
    }

    void print ()
    {
        cout<<"Printing using variable: "<<x<<endl;
        cout<<"Pointer Address: "<<ptr<<endl;
    }
};

int main()
{
    cout<<"__--Input--__"<<endl;

    size obj1;

    obj1.print();

    size obj2(obj1);

    cout<<"__--Deep copy---__"<<endl;

    obj2.print();

    return 0;

}