#include<bits/stdc++.h>

using namespace std;

class Solution{
    void dfs(int node, vector<int>&vis, vector<int>adj[], vector<int> &storeDFs){
        storeDFs.push_back(node);
        vis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
                dfs(it,vis,adj,storeDFs);
            }
        }
    }

    public:
        vector<int> dfsOfGraph(int V, vector<int>adj[]){
            vector<int>storeDFs;
            vector<int> vis(V+1,0);
            for(int i=0; i<=V; i++){
                if(!vis[i])
                    dfs(i,vis,adj,storeDFs);
            }
            return storeDFs;
        }
};

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main(){
    vector<int> adj[6];

    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 3);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 4);

    Solution obj;
    vector<int> df;
    df= obj.dfsOfGraph(5,adj);

    for(auto it:df){
        cout<<it<<" ";
    }
    return 0;
}






// #include<iostream>
// #include<vector>
// #include<stack>

// using namespace std;

// void addEdge(vector<int> adj[], int u, int v){
//     adj[u].push_back(v);
//     adj[v].push_back(u);
// }

// void dfsGraph(int node, vector<int> vis, vector<int>storeDfs, vector<int> adj[]){
//     storeDfs.push_back(node);
//     vis[node]=1;
//     for(auto it: adj[node])
//         if(!vis[it])
//             dfsGraph(it, vis, storeDfs, adj);
// }

// vector<int> dfs(int V, vector<int> adj[]){
//     vector<int> storeDfs;
//     vector<int> vis(V+1,0);

//     for(int i=1; i<=V; i++){
//         if(!vis[i]){
//             dfsGraph(i,vis,storeDfs,adj);
//         }
//     }
//     return storeDfs;
// }

// void print(vector<int> &ans){
//     for(int i=0; i<ans.size(); i++)
//         cout<<ans[i]<<" ";
// }

// int main(){
//     vector<int> adj[5];
//     addEdge(adj, 0, 1);
//     addEdge(adj, 0, 2);
//     addEdge(adj, 0, 3);
//     addEdge(adj, 1, 2);
//     addEdge(adj, 2, 4);

//     vector<int> ans= dfs(5,adj);
//     print(ans);
// }