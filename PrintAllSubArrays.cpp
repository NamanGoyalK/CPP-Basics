#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cout << "Enter the number of elements in the array: ";
    cin>>n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i <=n; i++)
    {
        for (int j = i; j <=n; j++)
        {
            for (int k = i; k <j; k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}