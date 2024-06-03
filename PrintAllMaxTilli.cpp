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

    int maxNo = INT_MIN;

    cout<<"Max No.s till I: ";
    for (int i = 0; i < n; i++)
    {
        maxNo = max(maxNo, arr[i]);
        cout << maxNo << " ";
    }

    cout << maxNo;

    return 0;
}