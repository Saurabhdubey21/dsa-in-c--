// Graph representation (Adjacent Matrix)
//Array based method
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of nodes: ";
    cin>>n;
    int m;
    cout<<"Enter the no of edges: ";
    cin>>m;
    int adj[n+1][n+1]={};
    for(int i=0;i<m;i++){
        int u,v;
        cout<<"m lines between nodes: ";
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    cout<<"\n adjacent matrix: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}