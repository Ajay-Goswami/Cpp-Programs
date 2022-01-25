#include<iostream>
#include<array>

using namespace std;

int main()
{
    int basicARRAY[5]={1,2,3,4,5};      //normal array
    array<int,5> a = {1,2,3,4,5};       //Static array like a normal array thats why we normally use simple array not stl-array

    int size= a.size();                 //it is used for finding size of array

    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";                     //we can print array like normal array
    }
    cout<<endl;

    //we can also use "at()" funtion for accessing array elements
    cout<<"access with the help of at "<<a.at(0)<<endl;
    cout<<"access with the help of at "<<a.at(1)<<endl;
    cout<<"access with the help of at "<<a.at(2)<<endl;

    //for checking array is empty or not we use empty function
    cout<<"check empty array or not \n";
    cout<<" 0 means false->not empty          1 means true->empty   =>"<<a.empty()<<endl;                     //0 means false->not empty          1 means true->empty

    //for accessing front and last element 
    cout<<"1st element is "<<a.front()<<endl;
    cout<<"Last element is "<<a.back()<<endl;
    
}