//find maximum marks of student
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<string,int>>p(n);
    for(int i=0;i<n;i++){
        cin>>p[i].first>>p[i].second;
    }
    int maxi=INT_MIN;
    string name;
    for(int i=0;i<n;i++){
        if(p[i].second>maxi){
            maxi=p[i].second;
            name=p[i].first;
        }
    }
    cout<<name<<" "<<maxi<<endl;
}