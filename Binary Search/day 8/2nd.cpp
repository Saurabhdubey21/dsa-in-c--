// Given a positive integer n. Find and return its square root. 
//If n is not a perfect square, then return the floor value of sqrt(n).
// Example 1// Input: n = 36// Output: 6
// Example 2// Input: n = 28// Output: 5
//Binary search
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of number: ";
    cin>>n;
    int low=1;
    int high=n-1;
    int ans=1;
    while(low<=high){
        int mid=(low+high)/2;
        if(mid*mid<=n){
           ans=mid;
           low=mid+1; 
        }else{
            high=mid-1;
        }
    }
    cout<<ans<<endl;
}