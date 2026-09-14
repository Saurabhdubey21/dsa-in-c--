#include<bits/stdc++.h>
using namespace std;
int main(){
    //here we use pair for store multiple value
    pair<int ,int>p={5,6};
    cout<<p.first<<" "<<p.second;
    //here p.first will give return 5 and p.second will 6
    //for storing multiple value
    pair<int,pair<int ,int>>q={6,{7,9}};
    cout<<"first integer: "<<q.first<<endl;
    cout<<"second number of second pair: "<<q.second.second<<endl;
    cout<<"Third integer of second pair: "<<q.second.first<<endl;
    //for storing array in pair
    pair<int,int>arr[]={{1,3},{4,5},{7,8}};
    cout<<"value: "<<arr[2].second;
}