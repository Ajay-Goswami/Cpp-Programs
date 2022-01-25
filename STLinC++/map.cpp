#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int, string> m;

    m[1]="ajay";
    m[3]="himanshu";
    m[5]="vaibhav";
    m[9]="deepank";

    m.insert({45,"ajay goswami"});
    m.insert(pair<int,string>(34,"himanshu chauhan"));
    map<int,string>::iterator itr;
    for(itr=m.begin(); itr!=m.end(); itr++)
    {
        cout<<itr->first<<"  "<<itr->second;
    }
    cout<<endl;
}