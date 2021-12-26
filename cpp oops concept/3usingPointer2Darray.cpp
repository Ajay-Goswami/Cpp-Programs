
//Q3) Write a program to print all elements of a 1-d array using pointers in C++. Also, create a 2-d array and print sum of all its elements using pointers in C++.

#include<iostream>
using namespace std;

int main()
{
    int m,n;

    int arr[]={1,2,7,4,9};
   
    int size= *(&arr +1) -arr; 
   
    int *ptr =arr;

    cout<<"Elements in an single array are ::"<<endl;
   
    for(int i=0; i<size; i++)
        cout<<*(arr+i)<<"  ";

    int array[m][n];
   
    cout<<"\nEnter the size of 2-d array::\n";
   
    cin>>m>>n;
   
    int *dou =&array[m][n];
   
    int add =0;
   
    int *sum =&add;
    
    cout<<"Enter the elements in 2-d array  ::";
   
    for(int i=0; i<2; i++)
   
        for(int j=0; j<2; j++)
   
        {  
              cin>>array[i][j];
             *sum+=array[i][j];
        } 

    cout<<"Sum of all elements of 2-d array:: "<<*sum;

    return 0; 
}


