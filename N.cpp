#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    
    for (int i = 1; i <=n; i++)
    {
        cout<<"$$";
        for (int j = 1; j<=i; ++j)
        {
            if(j==i){
                cout<<"$$";
            }
            else{
                cout<<" ";
            }
        }
            int space = n-i;
        for (int j = 1; j<=space; ++j)
        {
            cout<<" ";
        }
        cout<<"$$";
        
        cout<<"\n";
    }

    return 0;
}