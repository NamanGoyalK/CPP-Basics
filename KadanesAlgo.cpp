#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    vector<int>arr(n);

    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }

    int maxSum = arr[0];
    int currSum = arr[0];

    for (int i = 1; i < n; ++i)
    {
        currSum = max(arr[i], arr[i] + currSum);
        maxSum = max(maxSum, currSum);
    }
    cout<<"Maximum subarray sum: "<<maxSum<<endl;

    return 0;
}