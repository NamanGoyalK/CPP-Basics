#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    int sum =0;
    int originaln = n;
    while (n>0)
    {
        int lastdigit = n%10;
        sum+= round(pow(lastdigit,3));
        n=n/10;
    }

    if (sum==originaln)
    {
        cout<<"Armstrong No."<<endl;
    }
    else{
        cout<<"Not an Armstrong No."<<endl;
    }
    
    return 0;
}