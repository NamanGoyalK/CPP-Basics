#include<bits/stdc++.h>
using namespace std;

int main(){

    int m,n;
    cout<<"Enter the number of rows in the array: ";
    cin>>m;
    cout<<"Enter the number of coulmns in the array: ";
    cin>>n;

    int arr[m][n];
    cout<<"Enter the Elements: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }

    int R_start = 0, R_end = n-1, C_start = 0, C_end = m-1;
    while (R_start <= R_end && C_start <= C_end)
    {
        for (int col = C_start; col <= C_end; col++)
        {
            cout<<arr[R_start][col]<<" ";
        }
        R_start++;
        for (int row = R_start; row <= R_end; row++) {
            cout << arr[row][C_end] << " ";
        }
        C_end--;
        for (int col = C_end; col >= C_start; col--)
        {
            cout<<arr[R_end][col]<<" ";
        }
        R_end--;
        for (int row = R_end; row >= R_start; row--) {
            cout << arr[row][C_start] << " ";
        }
        C_start++;

    }

    return 0;
}