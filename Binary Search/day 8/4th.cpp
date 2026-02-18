// You are given 2 numbers n and m, the task is to find n√m (nth root of m).
// If the root is not integer then return -1.
// Input: n = 3, m = 8 Output: 2
// Input: n = 3, m = 9 Output: -1
// Input: n = 4, m = 16 Output: 2
//By linear search
#include<bits/stdc++.h>
using namespace std;
long long power(long long mid,int n,int m){
        long long result=1;
        for(int i=0;i<n;i++){
            result =result*mid;
            if(result>m)return result;
        }
        return result;
    }
    int nthRoot(int n, int m) {
        if(m<=1)return m;
        int low=1;
        int high=m;
        while(low<=high){
            int mid=(low+high)/2;
            long long ans=power(mid,n,m);
            if(ans==m)return mid;
                if(ans>m)high=mid-1;
            else low=mid+1;
        }
        return -1;
    }
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int m;
    cout<<"Enter the value of m: ";
    cin>>m;
    int answer=nthRoot(n,m);
    if(answer==-1){
        cout<<"No integer nth root exists\n";
    }else{
        cout<<"Nth root is: "<<answer<<endl;
    }
}