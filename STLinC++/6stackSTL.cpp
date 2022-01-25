//Stack
//last int first out

#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<string> s;
    s.push("Ajay");
    s.push("Goswami");
    s.push("ajay");
    s.push("goswami");
    s.push("AJAY");
    s.push("GOSWAMI");


    cout<<"top element is "<<s.top()<<endl;
    cout<<"Size of stack "<<s.size()<<endl;

    s.pop();
    cout<<"top element is "<<s.top()<<endl;
    cout<<"Size of stack "<<s.size()<<endl;

    s.pop();
    cout<<"top element is "<<s.top()<<endl;
    cout<<"Size of stack "<<s.size()<<endl;



    cout<<"check empty or not "<<s.empty();

    
    return 0;
}