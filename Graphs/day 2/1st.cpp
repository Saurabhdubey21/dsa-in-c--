//connected components of undirected graph
#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<vector<int>>&arr,vector<int>&visited){
    visited[node]=1;
    for(int i=0;i<arr[node].size();i++){
        if(!visited[arr[node][i]]){
            dfs(arr[node][i],arr,visited);
        }
    }
}
int main(){
    int n;
    cout<<"Enter the no of nodes: ";
    cin>>n;
    vecto<vector<int>>arr(n);
    cout<<"List of undirected nodes: ";
    for(int i=0;i<n;i++){
        int u,v;
        cout<<"M lines between nodes: ";
        cin>>u>>v;
        arr[u].push_back(v);
        arr[v].push_back(u);
    }
    vector<int>visited(n,0);
    int components=0;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            components++;
            dfs(i,arr,visited)
        }
    }
    cout<<"No of components: "<<components<<endl;
}