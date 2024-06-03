#include<bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n){

    int currSum=0;
    int maxSum=INT_MIN;
    for (int i=0; i<n; i++)
    {
        currSum+=arr[i];
        if (currSum<0)
        {
            currSum=0;
        }
        maxSum=max(maxSum,currSum);
    }
    return maxSum;
}

int main(){

    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }

    int WrapSum;
    int NonWrapSum;

    NonWrapSum=kadane(arr,n);
    int totalSum=0;
    for (int i=0; i<n; i++)
    {
        totalSum+=arr[i];
        arr[i]=-arr[i];
    }

    WrapSum =  totalSum + kadane(arr,n);
    cout<<max(WrapSum,NonWrapSum)<<endl;

    return 0;
}