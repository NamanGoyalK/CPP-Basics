#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    cout << "Enter n1, n2, and n3: ";
    cin >> n1 >> n2 >> n3;
    
    int A[n1][n2], B[n2][n3], C[n1][n3];

    cout << "Enter elements for matrix A:" << endl;
    for(int i = 0; i < n1; ++i) {
        for(int j = 0; j < n2; ++j) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements for matrix B:" << endl;
    for(int i = 0; i < n2; ++i) {
        for(int j = 0; j < n3; ++j) {
            cin >> B[i][j];
        }
    }

    for(int i = 0; i < n1; ++i) {
        for(int j = 0; j < n3; ++j) {
            C[i][j] = 0;
        }
    }

    for(int i = 0; i < n1; ++i) {
        for(int j = 0; j < n3; ++j) {
            for(int k = 0; k < n2; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Resultant matrix C after multiplication:" << endl;
    for(int i = 0; i < n1; ++i) {
        for(int j = 0; j < n3; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
