//BFS of graphs
// Input: adj[][] = [[2, 3, 1], [0], [0, 4], [0], [2]]
// Output: [0, 2, 3, 1, 4]
// Explanation: Starting from 0, the BFS traversal will follow these steps: 
// Visit 0 → Output: 0 
// Visit 2 (first neighbor of 0) → Output: 0, 2 
// Visit 3 (next neighbor of 0) → Output: 0, 2, 3 
// Visit 1 (next neighbor of 0) → Output: 0, 2, 3, 1
// Visit 4 (neighbor of 2) → Final Output: 0, 2, 3, 1, 4
#include<bits/stdc++.h>
using namespace std;
vector<int>bfsofgraph(vector<vector<int>>&adj){
    int n=adj.size();
    vector<int>vis(n,0);
    vector<int>bfs;
    queue<int>q;
    q.push(0);
    vis[0]=1;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        bfs.push_back(node);
        for(int i=0;i<adj[node].size();i++){
            int neighbour=adj[node][i];
            if(vis[neighbour]==0){
                vis[neighbour]=1;
                q.push(neighbour);
            }
        }
    }
    return bfs;
}
int main(){
    int n;
    cout<<"Enter the no of nodes ";
    cin>>n;
    int m;
    cout<<"Enter the no of edges: ";
    cin>>m;
    vector<vector<int>>adj(n);
    for(int i=0;i<m;i++){
        int u,v;
        cout<<"Enter the m lines between nodes: ";
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<"\nAdjacency matrix: "<<endl;
    for(int i=0;i<n;i++){
        cout<<i<<"->";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j];
        }
        cout<<endl;
    }
    vector<int>ans=bfsofgraph(adj);
    cout<<"\nBFS Traversal: ";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}