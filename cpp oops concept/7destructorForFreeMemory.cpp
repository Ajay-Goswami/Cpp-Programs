
//Q7) Write a program to demonstrate how destructor can be used to free memory in C++.


#include<iostream>

using namespace std;

class A
{
	private:
    		int *x;

	public:
    		A(int p);
    		~A();
};

A::A(int p)
{
    cout<<"CREATED INT X DYNAMICALLY AND INITIALIZED IT WITH P"<<endl;

    x = new int;

    *x = p;

    cout<<"X = "<<*x<<endl;
}

A::~A()
{
    delete x;

    cout<<" SUCCESFULLY MEMORY OF INT X IS FREE "<<endl;
}


int main()
{   
    A n(10);

    return 0;

}




