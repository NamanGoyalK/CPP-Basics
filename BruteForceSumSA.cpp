#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,s;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the sum to find: ";
    cin>>s;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; i < n; j++)
        {
            sum += arr[j];
            if(sum == s){
                cout<<"Sum found between idexes "<<i<<" and "<<j<<"."<<endl;
                return 0;
            }
        }
        
    }
    cout<<"No subarray with given sum found."<<endl;
    return 0;
}