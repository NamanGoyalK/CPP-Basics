#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cout<<"Enter the number of rows of the array: ";
    cin>>n;
    cout<<"Enter the number of coulmns of the array: ";
    cin>>m;
    int arr[n][m];

    cout<<"Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}