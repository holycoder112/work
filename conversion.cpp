#include<iostream>
using namespace std;
int main()
{
    cout<<"convert pressure unit from pascal"<<endl;
    int choice,num1;
    cout<<"enter value"<<endl;
    cin>>num1;
    cout<<"enter 1 for bar"<<endl;
    cout<<"enter 2 for psi"<<endl;
    cout<<"enter 3 for atm"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:cout<<num1*100000;
               break;
        case 2:cout<<num1*6894.75;
         break;
        case 3:cout<<num1*101325;
         break;
         default:
         cout<<"enter valid operation";
         break;
    }

}