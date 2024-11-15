#include <iostream>
using namespace std;
int main () {

    char grade;
    cout<<"Enter a Grade (A, B, C, D or F): ";
    cin>>grade;

    switch(grade)
    {
        case 'A':
        cout<<"Excellent"<<endl;
        break;

        case 'B':
        cout<<"Good"<<endl;
        break;

        case 'C':
        cout<<"Satisfactory"<<endl;
        break;

        case 'D':
        cout<<"Poor"<<endl;
        break;

        case 'F':
        cout<<"Fail"<<endl;

        default:
        cout<<"Invalid Grade..."<<"\n"<<"Enter a Grade from the above selection i.e, (A, B, C, D, F)";
        break;
    }

    return 0;
}