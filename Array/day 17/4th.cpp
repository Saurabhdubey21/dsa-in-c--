//print sppecific element of given row and column no of pascal triangle
#include <bits/stdc++.h>
using namespace std;
int main() {
    int row, col;
    cout<<"Enter row number: ";
    cin>> row;
    cout <<"Enter column number: ";
    cin >>col;
    long long ans =1;
    for(int i=0;i<col;i++) {
        ans = ans*(row-i);
        ans=ans/(i + 1); // nCr formula
    }
    cout<<"Element at "<<row<<"and"<<col<<"is: "<<ans<<endl;
}