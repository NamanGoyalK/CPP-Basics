#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    while(n>0){
        cout<<n<<endl;
        n=n-1;
    }
    cout<<"BOOM"<<endl;

    do{
        cout<<n<<endl;
        n=n+1;
    }while(n<100);

    return 0;
}