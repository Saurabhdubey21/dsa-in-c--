//70. Climbing Stairs
//You are climbing a staircase. It takes n steps to reach the top.
//Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
//Input: n = 2 Output: 2
//Input: n = 3 Output: 3
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the no of total stairs: ";
    cin>>n;
    if(n<=2){
        return n;
    }
    int step1=1;
    int step2=2;
    for(int i=3;i<=n;i++){
        int step3=step1+step2;
        step1=step2;
        step2=step3;
    }
    cout<<"Total ways of climbing stairs: "<<step2<<endl;
}