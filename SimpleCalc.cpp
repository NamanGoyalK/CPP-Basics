#include<iostream>
using namespace std;

int main(){

    int a,b;
    cout<<"Please enter two numbers: ";
    cin>>a>>b;

    char op;
    cout<<"Please enter an operator"<<endl;
    cin>>op;

    switch (op)
    {
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;
        case '%':
        cout<<a%b<<endl;
        break;
    
    default:
        cout<<"OPERATOR NOT AVIALABLE";
        break;
    }


    return 0;
}