#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    for (int i=1;i<=n; i++){  
        for(int k=n-i;k>=i;k--)
            cout<<" ";
        for(int j=1;j<=i;j++)
            cout<<"* ";
        cout<<endl;
    }   

    return 0;
}