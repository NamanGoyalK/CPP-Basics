#include<iostream>
#define MAX 10000
using namespace std;

int main() {
    int n;
    int arr[MAX] = {-1};

    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int numArray[n];

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> numArray[i];
    }

    int minIndex = -1;

    for (int i=n-1; i>=0; i--) {
        if (arr[numArray[i]] == -1)
            arr[numArray[i]] = i;
        else {
            if (minIndex == -1 || minIndex > arr[numArray[i]])
                minIndex = arr[numArray[i]];
        }
    }

    if (minIndex != -1)
        cout << "The first repeating element is " << numArray[minIndex] << endl;
    else
        cout << "There are no repeating elements." << endl;

    return 0;
}
