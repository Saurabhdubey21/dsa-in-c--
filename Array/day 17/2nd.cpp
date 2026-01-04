//print pascal triangle
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    for(int i=0;i<n;i++) {
        //start the value val=1;
        int val = 1;
        // printing space
        for(int space=0;space<n-i-1;space++) {
            cout << " ";
        }
        for(int j=0; j<=i;j++) {
            cout << val <<" ";
            val=val*(i-j);
            val=val/(j + 1);
        }
        cout<<endl;
    }
}