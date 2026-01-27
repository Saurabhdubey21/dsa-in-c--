//sum of n numbers
//using recursion(parametrized way)
#include<bits/stdc++.h>
using namespace std;
void print(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    print(i-1,sum+i);
}
int main(){
    int n;
    cin>>n;
    print(n,0);
}