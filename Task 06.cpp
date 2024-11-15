#include <iostream>
using namespace std;
int main () {

    char signal;
    cout<<"Enter the Traffic Light Colour i.e. R for Red, Y for Yellow, G for Green"<<"\n"<<"(Write only capital Letters)"<<endl;
    cin>>signal;

    switch(signal)
    {
        case 'R':
        cout<<"Stop!"<<endl;
        break;

        case 'Y':
        cout<<"Get Ready!"<<endl;
        break;

        case 'G':
        cout<<"Go!"<<endl;
        break;

        default:
        cout<<"Invalid Input! Please enter R, G or Y"<<endl;
        break;
    }

    return 0;
}