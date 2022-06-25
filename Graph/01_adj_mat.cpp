// //adjacency matrix
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int v,e;
//     cin>>v>>e;
//     int adj[v][v];
//     for(int i=0; i<v;i++){
//         for(int j=0; j<v;j++){
//             adj[i][j]=0;
//         }
//     }
//     for(int i=0;i<e;i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u][v]=1;
//         adj[v][u]=1;
//     }
//     for(int i=0;i<v;i++){
//         for(int j=0;j<v;j++){
//             cout<<adj[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// adjacency list
#include<bits/stdc++.h>
using namespace std;

// undirected graph.
void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

// representation of graph
void printGraph(vector<int> adj[], int V)
{
	for (int v = 0; v < V; ++v) {
		cout << "\n Adjacency list of vertex " << v
			<< "\n head ";
		for (auto x : adj[v])
			cout << "-> " << x;
		printf("\n");
	}
}

// Driver code
int main()
{
	int V = 5;
	vector<int> adj[V];
	addEdge(adj, 0, 1);
	addEdge(adj, 0, 4);
	addEdge(adj, 1, 2);
	addEdge(adj, 1, 3);
	addEdge(adj, 1, 4);
	addEdge(adj, 2, 3);
	addEdge(adj, 3, 4);
	printGraph(adj, V);
	return 0;
}


