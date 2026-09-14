// Sort by Second Value
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<string,int>>p(n);
    for(int i=0;i<n;i++){
        cin>>p[i].first>>p[i].second;
    }
    sort(p.begin(),p.end(),[](pair<string,int>a,pair<string,int>b){
        return a.second<b.second;
    });
    for(int i=0;i<n;i++){
        cout<<p[i].first<<" "<<p[i].second;
    }
}