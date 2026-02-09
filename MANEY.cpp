#include<iostream>
using namespace std;
int main()
{
    int choice,balance=1000,money,deposit;
do
{
cout<<"\nMENU: \n1.Check balance \n2.Withdraw Money \n3.Deposit Money \n4.EXIT \nSelect you Choice: ";
cin>>choice;
switch(choice)
{
case 1:
{
cout<<"You current balance is $"<<1000;
break;}

case 2:
{
cout<<"How much money you need to Withdraw: ";
cin>>money; if(money>1000)
{
cout<<"You cannot withdraw.";
}
else
{ cout<<"Your money is withdrawn.";}
break;
}

case 3:
{
cout<<"How much money you want to deposit: ";
cin>>deposit;
balance+=deposit;
cout<<"Your current balance is: $"<<balance;
break;}

case 4:
{
cout<<"You choose Exit! Goodbye\n";
break;}

default:
cout<<"INVALID CHOICE\n";
}
} 
while(choice!=4);
return 0;}
