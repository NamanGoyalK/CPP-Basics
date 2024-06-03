#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter the no. of elements: ";
    cin>>n;

    cout<<"Enter the elements seperated by space: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int pd = arr[1]-arr[0];
    int ans = 2;
    int j = 2;
    int curr = 2;

    while (j<n)
    {
        if (pd = arr[j] - arr[j-1])
        {
            curr++;
        }
        else
        {
            pd = arr [j] - arr[j-1];
            curr =2;
        }
        ans = max(ans,curr);
        j++;
    }
     cout << "Length of the longest contiguous arithmetic subarray is " << ans << endl;
    return 0;
}