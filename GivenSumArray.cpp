#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    
    unordered_set<int> seen;
    bool found = false;

    for (int i = 0; i < n; ++i) {
        int complement = k - arr[i];
        if (seen.find(complement) != seen.end()) {
            found = true;
            cout << "Elements " << arr[i] << " and " << complement << " sum to " << k << endl;
            break;
        }
        seen.insert(arr[i]);
    }

    if (!found) {
        cout << "No two elements sum to " << k << endl;
    }

    return 0;
}
