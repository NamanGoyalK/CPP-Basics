#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of days: ";
    cin >> N;

    int V[N+2]; 
    V[N+1] = -1;

    for(int i = 1; i <= N; i++) {
        cout << "Enter the number of visitors on day " << i << ": ";
        cin >> V[i];
    }

    int ans = 0; 
    int mx = -1;

    for(int i = 1; i <= N; i++) {
        if(V[i] > mx && V[i] > V[i+1]) {
            ans++;
        }
        mx = max(mx, V[i]);
    }

    cout << "The number of record breaking days is: " << ans << endl;

    return 0;
}
