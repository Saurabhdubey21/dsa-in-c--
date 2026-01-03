//spiral matix
//optimal solution
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of matrix: ";
    cin >> n;
    vector<vector<int>> spiralMat(n, vector<int>(n));
    int val = 1;
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    while(top <= bottom && left <= right) {
        // Top row
        for(int i = left; i <= right; i++)
            spiralMat[top][i] = val++;
        top++;
        // for Right column
        for(int i = top; i <= bottom; i++)
            spiralMat[i][right] = val++;
        right--;
        // for Bottom row
        for(int i = right; i >= left; i--)
            spiralMat[bottom][i] = val++;
        bottom--;
        // for Left column
        for(int i = bottom; i >= top; i--)
            spiralMat[i][left] = val++;
        left++;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            cout << spiralMat[i][j] << "\t";
        cout << endl;
    }
}

