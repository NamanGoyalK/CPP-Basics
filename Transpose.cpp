#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the size of the matrix: ";
    cin >> N;
    int A[N][N];

    cout << "Enter the elements of the matrix:" << endl;
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < N; ++i) {
        for(int j = i + 1; j < N; ++j) {
            swap(A[i][j], A[j][i]);
        }
    }

    cout << "Transpose of the matrix:" << endl;
    for(int i = 0; i < N; ++i) {
        for(int j = 0; j < N; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
