#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for(int i=1;i<=n;i++){
        for(int j=2;j<=i+1;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t;i++){
        int n;
        cin>>n;
        print1(n);
    }
}