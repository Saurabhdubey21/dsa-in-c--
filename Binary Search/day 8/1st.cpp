// Given a positive integer n. Find and return its square root. 
//If n is not a perfect square, then return the floor value of sqrt(n).
// Example 1// Input: n = 36// Output: 6
// Example 2// Input: n = 28// Output: 5
//brute force approach
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=0;i<n;i++){
        if(i*i>=n){
            cout<<"The nearest sqrt of n is: "<<i<<endl;
            break;
        }
    }
}