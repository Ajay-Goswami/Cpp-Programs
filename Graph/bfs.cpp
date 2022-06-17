// #include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void print(vector<int> &ans){
    for(int i=0; i<ans.size(); i++)
        cout<<ans[i]<<" ";
}

vector<int> bfs(int V, vector<int> adj[]){
    vector<int> storeBfs;
    vector<int> vis(V,0);

    queue<int> q;

    q.push(0);
    vis[0]=1;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        storeBfs.push_back(node);

        for(auto it: adj[node]){
            if(!vis[it]){
                q.push(it);
                vis[it]=1;
            }
        }
    }
    return storeBfs;
}

int main(){
    vector<int>adj[5];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 3);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 4);

    vector<int> ans= bfs(5,adj);
    print(ans);

    return 0;
}

