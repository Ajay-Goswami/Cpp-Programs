//Floyd Warshall Algorithm: All Pair Shortest Path


#include<iostream>
#include<iomanip>
#define NODE 7
#define INF 999
using namespace std;

//Cost matrix of the graph
int costMat[NODE][NODE] = {
   {0, 3, 6, INF, INF, INF, INF},
   {3, 0, 2, 1, INF, INF, INF},
   {6, 2, 0, 1, 4, 2, INF},
   {INF, 1, 1, 0, 2, INF, 4},
   {INF, INF, 4, 2, 0, 2, 1},
   {INF, INF, 2, INF, 2, 0, 1},
   {INF, INF, INF, 4, 1, 1, 0}
};

void floydWarshal() {
   int cost[NODE][NODE];    //defind to store shortest distance from any node to any node
   for(int i = 0; i<NODE; i++)
      for(int j = 0; j<NODE; j++)
         cost[i][j] = costMat[i][j];     //copy costMatrix to new matrix

   for(int k = 0; k<NODE; k++) {
      for(int i = 0; i<NODE; i++)
         for(int j = 0; j<NODE; j++)
            if(cost[i][k]+cost[k][j] < cost[i][j])
               cost[i][j] = cost[i][k]+cost[k][j];
   }

   cout << "The matrix:" << endl;
   for(int i = 0; i<NODE; i++) {
      for(int j = 0; j<NODE; j++)
         cout << setw(3) << cost[i][j];
      cout << endl;
   }
}

int main() {
   floydWarshal();
}





// #include"bits/stdc++.h"
// using namespace std;

// int main(){

//     int v,e;
//     cin>>v>>e;

//     vector<vector<int>> dp(v+1,vector<int>(v+1,INT_MAX/2));
//     vector<vector<pair<int,int>>> graph(v+1);
//     for(int i=0;i<e;i++){
//         int x,y,w;
//         cin>>x>>y>>w;
//         graph[x].push_back({y,w});
//         dp[x][y]=w;
//     }

//     for(int i=1;i<=v;i++)
//         dp[i][i]=0;

//     for(int k=1;k<=v;k++){
//         for(int i=1;i<=v;i++){
//             for(int j=1;j<=v;j++)
//                 dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
//         }
//     }
//     for(int i=1;i<=v;i++){
//         for(int j=1;j<=v;j++)
//             cout<<dp[i][j]<<" ";
//         cout<<endl;
//     }
// }