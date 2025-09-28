#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v(2,30);
    vector<int>v1(2,13);
    vector<int>v2(2,40);
    vector<int>v3(2,50);
    //merging two vector
    v.insert(v.end(),v1.begin(),v1.end());
    v.insert(v.end(),v2.begin(),v2.end());
    v.insert(v.end(),v3.begin(),v3.end());
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;
    //for deletation
    v.erase(v.begin()+3);
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;
    // insert at given loction
    v.insert(v.begin()+4,80);
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"TOTAL number of elements in array:"<<v.size();
}