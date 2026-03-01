//find fibonacci number using recursion
#include<bits/stdc++.h>
using namespace std;
int fibonumber(int n){
    if(n<=1)return n;
    int a=0,b=1;
    for(int i=2;i<=n;i++){
        int c=a+b;
        a=b;
        b=c;
    }
    return b;
}
int main(){
    int n;
    cout<<"Enter the the nth fibonacci number: ";
    cin>>n;
    cout<<"Nth fibonacci Number: "<<fibonumber(n);
}