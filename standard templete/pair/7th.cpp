//Two Sum Using Pair/Vector
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first;
        arr[i].second=i;
    }
    int k;
    cin>>k;
    pair<int,int>ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i].first+arr[j].first==k){
                ans={arr[i].first,arr[j].first};
            }
        }
    }
    cout<<ans.first<<" "<<ans.second; 
}