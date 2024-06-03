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

    int curr = 0;
    for(int i=0; i<n; i++)
    {
        curr = 0;
        for (int j = i; j < n; j++)
        {
            curr += arr[j];
            cout << curr <<" ";
        }
    }

    return 0;
}