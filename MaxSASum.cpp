#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int maxSum = arr[0];
    int currentSum = arr[0];

    for (int i = 1; i < n; ++i) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }

    cout << "Maximum subarray sum: " << maxSum << endl;

    return 0;
}
