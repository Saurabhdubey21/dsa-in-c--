// pass by value
#include<bits/stdc++.h>
using namespace std;
void doSoething(string &s){
    s[0]='G';
    s[5]='v';
    s[6]=' ';
    cout<<s<<endl;
}
int main(){
    string s ="Saurabh";
    doSoething(s);
    cout<<s<<endl;
    return 0;
}
