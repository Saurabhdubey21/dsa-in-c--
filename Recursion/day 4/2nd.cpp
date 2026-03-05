//find fibonacci number using recursion 
#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    if(n<=1)return n;
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
int main(){
    int n;
    cout<<"Enter the nth number: ";
    cin>>n;
    cout<<"Nth fibonacci number: "<<fibo(n);
}