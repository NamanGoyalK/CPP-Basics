#include <iostream> 
using namespace std; 
 
int main() { 
    int number; 
    int sum = 0; 
 
    cout << "Enter a natural number: "; 
    cin >> number; 
 
 
 
    while (number > 0) { 
        
        sum += number; 
        cout << "Next natural number[enter 0 if you want sum]: "; 
        cin >> number; 
    } 
 
    cout << "\nThe sum is " << sum << endl; 
     
    return 0; 
} 