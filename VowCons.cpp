#include<iostream>
using namespace std;

int main(){

    cout<<"Please enter an alphabet in lower case:\n";

    char alp;
    cin>> alp;

    switch (alp)
    {
        case 'a':
        cout<<"Its a Vowel\n";
        break;

        case 'e':
        cout<<"Its a Vowel\n";
        break;

        case 'i':
        cout<<"Its a Vowel\n";
        break;

        case 'o':
        cout<<"Its a Vowel\n";
        break;

        case 'u':
        cout<<"Its a Vowel\n";
        break;
    
    default:
        cout<<"Its a constant";
        break;
    }




    return 0;
}