//2d array
//A two-dimensional array is an array in which each element is referred to by two indexes.
//Element in the 2D array is stored in the matrix form.
//The first index shows the row of the matrix and the second index shows the column of the matrix.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int rows=3,cols=5;
    int arr[3][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}};
    // cin>>arr[0][0]>>arr[0][1]>>arr[0][2]>>arr[0][3]>>arr[0][4];
    // cin>>arr[1][0]>>arr[1][1]>>arr[1][2]>>arr[1][3]>>arr[1][4];
    // cin>>arr[2][0]>>arr[2][1]>>arr[2][2]>>arr[2][3]>>arr[2][4];
    cout<<arr[2][3];
    return 0;
}