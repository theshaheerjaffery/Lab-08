#include <iostream>
using namespace std;
int main () {

    char alph;
    cout<<"Enter any Vowel (Aa, Ee, Ii, Oo, Uu): ";
    cin>>alph;

    switch(alph)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
        cout<<alph<<" is a Vowel"<<endl;
        break;

        default:
        cout<<alph<<" is not a Vowel";
        break;
    }

    return 0;
}