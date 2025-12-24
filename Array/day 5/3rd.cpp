//Given an array of integers nums and an integer target,
//optimal solution
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin >> n;
    vector<pair<int,int>> arr(n);
    cout<<"Enter the elements of array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second = i;
    }
    int target;
    cout<<"Enter the the sum of two elements: ";
    cin >> target;
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while(left < right) {
        int sum = arr[left].first + arr[right].first;
        if(sum == target) {
            cout << "Indices: "
                 << arr[left].second << " and "
                 << arr[right].second << endl;
            return 0;
        }
        else if(sum < target) left++;
        else right--;
    }
    cout << "No such pair exists";
}