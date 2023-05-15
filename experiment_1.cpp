#include<iostream>
using namespace std;
int main()
{
    int choice,num1,num2;
    cout<<"enter first no.";
    cin>>num1;
    cout<<"enter second no.";
    cin>>num2;
    cout<<"enter 1 for addition";
    cout<<"enter 2 for subtraction";
    cout<<"enter 3 for multiplication";
    cout<<"enter 4 for division";
    cout<<"enter 5 for remainder";
    cin>>choice;
    switch(choice)
    {
        case 1:cout<<num1+num2;
               break;
        case 2:cout<<num1-num2;
         break;
        case 3:cout<<num1*num2;
         break;
        case 4:cout<<num1/num2; 
         break;
        case 5:cout<<num1%num2;
         break;
         default:
         cout<<"enter valid operation";
         break;
    }

}