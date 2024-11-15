#include <iostream>
using namespace std;
int main () {

    float num1, num2;
    char opr;
    cout<<"Enter 2 numbers you want to calculate and an Operator i.e '+ , - , * , /': "<<endl;
    cout<<"Example Input: 2 + 2"<<"\n"<<endl;
    cin>>num1>>opr>>num2;

    switch(opr)
    {
        case '+':
        cout<<num1<<" "<<opr<<" "<<num2<<" = "<<num1+num2<<endl;
        break;

        case '-':
        cout<<num1<<" "<<opr<<" "<<num2<<" = "<<num1-num2<<endl;
        break;

        case '*':
        cout<<num1<<" "<<opr<<" "<<num2<<" = "<<num1*num2<<endl;
        break;

        case '/':
        cout<<num1<<" "<<opr<<" "<<num2<<" = "<<num1/num2<<endl;
        break;

        default:
        cout<<"Invalid Operator..."<<"\n"<<"Enter One of the following Operator: (+ , - , * , /)";
        break;
    }

    return 0;
}