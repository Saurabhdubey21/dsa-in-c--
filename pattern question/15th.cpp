// A 
// A B 
// A B C 
// A B C D 
// A B C D E
#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for(int i=0;i<n;i++){
        //i=2
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch<<" ";
        
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<=t;i++){
        int n;
        cin>>n;
        print1(n);
    }
}