#include <iostream>
using namespace std;
int main() {

    int num;
    cout<<"Enter a number from 1-7: ";
    cin>>num;

    switch(num)
    {
        case 1:
        cout<<"Monday"<<endl;
        break;

        case 2:
        cout<<"Tuesday"<<endl;
        break;
        
        case 3:
        cout<<"Wednesday"<<endl;
        break;

        case 4:
        cout<<"Thursday"<<endl;
        break;

        case 5:
        cout<<"Friday"<<endl;
        break;

        case 6:
        cout<<"Saturday"<<endl;
        break;

        case 7:
        cout<<"Sunday";
        break;

        default:
        cout<<"Invaild Number"<<"\n"<<"Enter a Number between 1 & 7";
        break;
    }

    return 0;
}