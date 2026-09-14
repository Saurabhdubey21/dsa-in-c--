//Geek's Training
// Input: matrix = [[10, 40, 70], --Day 1: fighting practice = 70
//                 [20, 50, 80],  --Day 2: stealth training = 50
//                 [30, 60, 90]]  --Day 3: fighting practice = 90
// Output: 210 --Total = 70 + 50 + 90 = 210
// Input: matrix = [[70, 40, 10], Day 1: running = 70 
//                  [180, 20, 5], Day 2: stealth training = 20
//                 [200, 60, 30]] Day 3: running = 200
//Output: 290  Total = 70 + 20 + 200 = 290
//recursion method
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the No of days: ";
    cin>>n;
    vector<vector<int>>arr(n,vector<int>(3));
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Given Matrix is:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}