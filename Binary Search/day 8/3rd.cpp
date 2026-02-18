// You are given 2 numbers n and m, the task is to find n√m (nth root of m).
// If the root is not integer then return -1.
// Input: n = 3, m = 8 Output: 2
// Input: n = 3, m = 9 Output: -1
// Input: n = 4, m = 16 Output: 2
//By linear search
#include<bits/stdc++.h>
using namespace std;
long long power(long long base,int n){
    long long result=1;
    for(int i=0;i<n;i++){
        result =result*base;
    }
    return result;
}
int findNthRoot(int n,int m){
    for(int i=1;i<=m;i++){
        long long val=power(i, n);
        if(val==m) {
            return i;
        }
        if(val>m){
            break;
        }
    }
    return -1;
}
int main(){
    int n,m;
    cout<<"Enter the value of N: ";
    cin>>n;
    cout<<"Enter the value of M: ";
    cin>>m;
    int ans=findNthRoot(n,m);
    if(ans==-1){
        cout<<"No integer nth root exists\n";
    }else{
        cout<<"Nth root is: "<<ans<<endl;
    }
}
