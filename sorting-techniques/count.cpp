//count sort

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=0;
    for(int i=0; i<n; i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    int count[max+1]={0};
    for(int i=0; i<n ; i++){
        count[a[i]]++;
    }
    for(int i=1 ; i<=max; i++){
        count[i]+=count[i-1];
    }
    int temp[n];
    for(int i=n-1; i>=0; i--){
        temp[count[a[i]]-1]=a[i];
        count[a[i]]--;
    }
    for(int i=0; i<n; i++){
        cout<<temp[i]<<" ";
    }
}