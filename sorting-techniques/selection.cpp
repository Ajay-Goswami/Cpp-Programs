//selection sort

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i,j,k;
    for( i=0; i<n-1;i++){
        for(j=k=i ; j<n; j++){
            if(a[j]<a[k]){
                k=j;
            }
        }
        int temp=a[i];
        a[i]=a[k];
        a[k]=temp;
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}