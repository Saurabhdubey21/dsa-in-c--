//check the string is palindrome or not
//recursive method;
#include<bits/stdc++.h>
using namespace std;
bool palindrome(vector<string>&s,int i,int n){
    if(i>=n/2)return true;
    if(s[i]!=s[n-i-1]) return false;
    return palindrome(s,i+1,n);
}
int main(){
    int n;
    cin>>n;
    vector<string>s(n);
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    if (palindrome(s,0,n))
    cout<<"It is Palindrome\n";
    else cout<<"It is not palindrome\n";
}
