//print the all elements of given row
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the row number: ";
    cin>>n;
    vector<long long> row;
    long long ans = 1;
    row.push_back(ans);
    for (int col=1;col<= n;col++) {
        ans=ans*(n-col+1)/col;
        row.push_back(ans);
    }
    cout << "Elements of row "<<n<<": ";
    for (auto val : row) {
        cout<<val<< " ";
    }
    cout << endl;
    return 0;
}
