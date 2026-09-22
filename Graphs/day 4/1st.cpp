//Dfs transversal in Graph
#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<vector<int>>&adj,vector<int>&vis,vector<int>&list){
    vis[node]=1;
    list.push_back(node);
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,list);
        }
    }
}
vector<int>dfsofgraph(int n,vector<vector<int>>&adj){
    vector<int>vis(n,0);
    int start=0;
    vector<int>list;
    dfs(start,adj,vis,list);
    return list;
}
int main(){
    int n;
    cout<<"No of nodes: ";
    cin>>n;
    int m;
    cout<<"Enter the no of edges: ";
    cin>>m;
    vector<vector<int>>adj(n);
    for(int i=0;i<m;i++){
        int u,v;
        cout<<"Enter the m lines between two edges: ";
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<"Graph is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<i<<"->";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j];
        }
        cout<<endl;
    }
    cout<<"Depth for search of graph is: "<<endl;
    vector<int>ans=dfsofgraph(n,adj);
    for(int x:ans){
        cout<<x<<" ";
    }
    cout<<endl;
}