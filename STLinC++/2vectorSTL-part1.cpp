//VECTORS ARE DYNAMIC 
//ITS ADVANTAGE OVER ARRAY IS ARRAY IS STATIC WHILE VECTOR ARE STATIC , ITS SIZE IS NOT FIXED 
//TAKE AN EXAMPLE IF WE CREATE AN VECTOR AND ITS SIZE IS 3 ,AND AFTER INSERTION 3 ELEMENTS IF WE WANT TO INSERT MORE ELEMENTS THAN VECTOR INCREASE ITS SIZE DOUBLE



/*
use of->
capacity()
size()
push_back()
pop_back()
at()
*/
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v;
    cout<<"Capacity-> "<<v.capacity()<<endl;        //1stly capacity is 0
    cout<<"Size-> "<<v.size()<<endl;                //it shows how much elements are present   size =0

    //for inserting elements we use push_back() function

    v.push_back(11);
    cout<<"Capacity-> "<<v.capacity()<<endl;        //now 1 element is inserted so vector capacity is 1
    cout<<"Size-> "<<v.size()<<endl;                //   size =1

    v.push_back(12);
    cout<<"Capacity-> "<<v.capacity()<<endl;        //now 2 element is inserted so vector capacity is 1*2 = 2
    cout<<"Size-> "<<v.size()<<endl;                //   size =2

    v.push_back(13);
    cout<<"Capacity-> "<<v.capacity()<<endl;        //now 3 element is inserted so vector capacity is 2*2 = 4
    cout<<"Size-> "<<v.size()<<endl;                //   size =3

    v.push_back(14);
    cout<<"Capacity-> "<<v.capacity()<<endl;        //now 4 element is inserted so vector capacity is 4
    cout<<"Size-> "<<v.size()<<endl;                //   size =4

    v.push_back(15);
    cout<<"Capacity-> "<<v.capacity()<<endl;        //now 5 element is inserted so vector capacity is 4*2 = 8
    cout<<"Size-> "<<v.size()<<endl;                //   size =5


    cout<<"Elements at 2nd index is "<<v.at(2)<<endl;

    cout<<"1st element is "<<v.front()<<endl;
    cout<<"Last element is "<<v.back()<<endl;

    cout<<"Before pop "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"After 1 element pop "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Capacity-> "<<v.capacity()<<endl;            //same as previous
    cout<<"Size-> "<<v.size()<<endl;                    //change when push or pop

}