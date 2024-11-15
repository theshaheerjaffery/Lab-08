#include <iostream>
using namespace std;
int main () {

    int balance, deposit, withdraw, option;
    balance=5000;

    cout<<"Select an option:"<<endl;
    cout<<"1. Deposit"<<"\t"<<"    "<<"2. Withdraw"<<endl;
    cout<<"3. Check Balance"<<"\t"<<"    "<<"4. Exit"<<endl;
    cout<<"(Example Input: 1, 2, 3, 4)"<<endl;
    cin>>option;

    switch(option)
    {
        case 1:
        cout<<"Enter the Deposit amount: ";
        cin>>deposit;
        balance=balance+deposit;
        cout<<"Your deposit is: "<<deposit<<endl;
        cout<<"Your Updated balance is: "<<balance<<endl;
        break;

        case 2:
        cout<<"Enter the Withdraw amount: ";
        cin>>withdraw;
        balance=balance-withdraw;
        cout<<"Your Withdraw is: "<<withdraw<<endl;
        cout<<"Your Updated balance is: "<<balance<<endl;
        break;

        case 3:
        cout<<"Your current Balance is: "<<balance<<endl;
        break;

        case 4:
        cout<<"Good Bye"<<endl;
        break;

        default:
        cout<<"You selected wrong option";
        break;
    }

    return 0;
}