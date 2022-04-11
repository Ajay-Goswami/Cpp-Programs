//quick sort

#include<iostream>
using namespace std;

int partition(int a[], int l, int h){
    int pivot = a[l];
    int i=l;
    int j=h;
    while(i<j){
        while(a[i]<=pivot ){
            i++;
        }
        while(a[j]>pivot ){
            j--;
        }
        if(i<j){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    int temp=a[l];
    a[l]=a[j];
    a[j]=temp;
    return j;
}

void QuickSort(int a[], int l , int h){
    int j;
    if(l<h){
        j=partition(a,l,h);
        QuickSort(a,l,j);
        QuickSort(a,j+1,h);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    QuickSort(a,0,n-1);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    
}