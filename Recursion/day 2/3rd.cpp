// find the factorial of number n
//recursive method
#include<bits/stdc++.h>
using namespace std;
void fact(int i,int n,int ans){
    if(i>n){
        cout<<ans;
        return;
    }
    fact(i+1,n,ans*i);
}
int main(){
    int n;
    cin>>n;
    fact(1,n,1);
}