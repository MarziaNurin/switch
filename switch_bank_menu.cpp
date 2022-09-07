#include<iostream>
using namespace std;

int main()
{

int cmd;
int bucks;
int bal=500;
int newbal;


cout<<endl<<"0 - Quit";
cout<<endl<<"1 - Deposit";
cout<<endl<<"2 - Withdraw";
cout<<endl<<"3 - Print Balance";
cout<<endl<<"Please enter a cmd num: ";
cin>>cmd;

switch (cmd)
{
case 0: cout<<endl<<"Please visit again";
    break;
case 1: cout<<endl<<"Enter amount: $";
        cin>>bucks;
        newbal=bal+bucks;
        cout<<endl<<newbal;
    break;
case 2: cout<<endl<<"Enter amount: $";
        cin>>bucks;
        newbal=bal-bucks;
        cout<<endl<<newbal;
    break; 
case 3: cout<<endl<<"Current balance: $"<<bal;
    break;     

default:cout<<"Invalid input. Try again";
    break;
}


return 0;
}