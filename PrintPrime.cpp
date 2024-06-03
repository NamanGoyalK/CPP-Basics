#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter two numbers separeted by a space: ";
    int a,b;
    cin>>a>>b;

    int num;

    for(num=a;num<=b;num++){
        int i;
        for(i=2;num>i;i++){
            if (num%i==0){
                break;
            }
        }
        if(num==i){
            cout<<num<<endl;
        }
    }


    
    return 0;
}