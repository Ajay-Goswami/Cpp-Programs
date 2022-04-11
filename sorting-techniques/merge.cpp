//merge sort

#include<iostream>
using namespace std;

void merge(int a[], int l, int m, int h){
    int i=l, j=m+1, k=l;
    int b[100];
    while(i<=m && j<=h){
        if(a[i]<a[j]){
            b[k++]=a[i++];
        }
        else{
            b[k++]=a[j++];
        }
    }
    for(; i<=m; i++){
        b[k++]=a[i];
    }
    for(; j<=h; j++){
        b[k++]=a[j];
    }
    for(i=l; i<=h;i++){
        a[i]=b[i];
    }
}

void MergeSort(int a[], int l ,int h){
    if(l<h){
        int m=(l+h)/2;
        MergeSort(a,l,m);
        MergeSort(a,m+1,h);

        merge(a,l,m,h);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    MergeSort(a,0,n-1);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}