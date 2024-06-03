#include<bits/stdc++.h>
#define MAX 100000
using namespace std;

int main() {
    int n;
    bool present[MAX] = {false};

    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] > 0) {
            present[arr[i]] = true;
        }
    }

    int ans = -1;

    
    for(int i = 1; i < MAX; i++) {
        if(present[i] == false) {
            ans = i;
            break;
        }
    }

    cout << "The smallest positive missing number is " << ans << endl;

    return 0;
}
