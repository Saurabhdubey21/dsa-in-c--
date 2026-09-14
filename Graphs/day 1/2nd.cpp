// Graph representation (Adjacent List)
//List based method
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of nodes: ";
    cin>>n;
    int m;
    cout<<"Enter the no of edges: ";
    cin>>m;
    vector<int>adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cout<<"m lines between nodes: ";
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<"\n adjacent matrix: "<<endl;
    for(int i=1;i<=n;i++){
        cout<<i<<"->";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}