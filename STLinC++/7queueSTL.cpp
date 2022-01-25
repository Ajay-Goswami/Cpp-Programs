//QUEUE
//first int first out
//last in last out

#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<string> s;
    s.push("Ajay");
    s.push("Goswami");
    s.push("ajay");
    s.push("goswami");
    s.push("AJAY");
    s.push("GOSWAMI");


    cout<<"front element is "<<s.front()<<endl;
    cout<<"Size of stack "<<s.size()<<endl;

    //After pop an element
    s.pop();
    cout<<"top element is "<<s.front()<<endl;
    cout<<"Size of stack "<<s.size()<<endl;

    //After pop an element
    s.pop();
    cout<<"top element is "<<s.front()<<endl;
    cout<<"Size of stack "<<s.size()<<endl;



    cout<<"check empty or not "<<s.empty();

    
    return 0;
}