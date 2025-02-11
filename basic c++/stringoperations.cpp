//A string is a sequence of characters, 
//stored in contiguous memory locations
//terminated by a null character
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s ="Saurabh";
    int len=s.size();
    cout<<s.size();
    s[len-1]='w';
    cout<<s[len-1];
    return 0;
}