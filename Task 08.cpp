#include <iostream>
using namespace std;
int main () {

    int num;
    cout<<"Enter a Number ranging 0-9: ";
    cin>>num;

    switch(num)
    {
        case 0:
        cout<<"Zero"<<endl;
        break;

        case 1:
        cout<<"One"<<endl;
        break;

        case 2:
        cout<<"Two"<<endl;
        break;

        case 3:
        cout<<"Three"<<endl;
        break;

        case 4:
        cout<<"Four"<<endl;
        break;

        case 5:
        cout<<"Five"<<endl;
        break;

        case 6:
        cout<<"Six"<<endl;
        break;

        case 7:
        cout<<"Seven"<<endl;
        break;

        case 8:
        cout<<"Eight"<<endl;
        break;

        case 9:
        cout<<"Nine"<<endl;
        break;

        default:
        cout<<"Invalid Input! Enter a Number from 0 to 9"<<endl;
        break;
    }

    return 0;
}