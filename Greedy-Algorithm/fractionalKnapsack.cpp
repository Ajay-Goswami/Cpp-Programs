//fractional knapsack using greedy method

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n, w;
    cin >> n >> w;

    //items as (weight, value)pairs
    vector<pair<int,int>> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }

    sort(a.begin(), a.end(), [](pair<int,int> a, pair<int,int> b){
        return a.second/a.first > b.second/b.first;
    });

    int total_weight = 0;
    int total_value = 0;

    for(int i = 0; i < n; i++){
        if(total_weight + a[i].first <= w){
            total_weight += a[i].first;
            total_value += a[i].second;
            cout << a[i].second << " ";
        }
        else{
            total_value += a[i].second * (w - total_weight) / a[i].first;
            cout << a[i].second*(w-total_weight)/a[i].first << " ";
            break;
        }
    }
    cout<<endl;
    cout<<"Total value: "<<total_value<<endl;
    return 0;
}