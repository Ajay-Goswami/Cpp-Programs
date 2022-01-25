//LIST USING STL->STANDARD TEMPORARY LIBRARY.
//it is doubly linked list
//if we access an element in list then we have to traverse

#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l;

    //copy list l in list n
    // list<int> n(l);

    l.push_back(1);
    l.push_back(2);
    l.push_back(23);
    l.push_back(22);
    l.pop_back();

    l.push_front(11);
    l.push_front(12);
    l.push_front(121);
    l.push_front(122);
    l.pop_front();

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    //erase time complexity in list is O(n) because we have to traverse in the list for delete
    l.erase(l.begin()); //it erase the element which iterator points-> in l.begin() iterator points in 1st element

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    //size
    cout << "Size of list " << l.size() << endl;

    //sort the list
    cout << "Sorted list is " << endl;
    l.sort();
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    //copy list l in list n
    list<int> n(l);
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;

    //initialize 5 element with 100
    list<float> f(5,100.14);
    for (float i : f)
    {
        cout << i << " ";
    }
    cout << endl;
}
