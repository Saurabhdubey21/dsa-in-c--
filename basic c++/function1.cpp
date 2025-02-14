//functions are set of  code which performs something for you 
// functions are used to modularise code
// function are used to increase readability
// function are used to use same code multiple times
// void which does not returns anything
// return
// parameterised
// non parameterised
// /pass by value
#include<bits/stdc++.h>
using namespace std;
void doSomething(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
int main(){
    int num=10;
    doSomething(num);
    cout<<num<<endl;
    return 0;
}