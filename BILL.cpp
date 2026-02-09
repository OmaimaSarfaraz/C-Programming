#include<iostream>
using namespace std;
int main()
{
   int choice,bill=0,total=0;
   do
   {
     cout<<"\nCAFE MENU: \n1.TEA-$2 \n2.COFFEE-$3 \n3.SANDWICH-$5 \n4.BURGER-$7 \n5.EXIT. \nSelect you Order: ";
     cin>>choice;
    switch(choice)
     {
       case 1:
       cout<<"You choose Tea \nBill is $2";
       bill+=2; 
       break;

       case 2:
       cout<<"You choose Coffee \nBill is $3";
       bill+=3;
       break;
       
       case 3:
       cout<<"You choose Sandwich \nBill is $5";
       bill+=5;
       break;
       
       case 4:
       cout<<"You choose Burger \nBill is $7";
       bill+=7;
       break;
       
       case 5:
       cout<<"You choose Exit! Goodbye\n";
       break;
       
       default:
       cout<<"INVALID CHOICE\n"; }
       total+=bill;
        }while(choice!=5);
       cout<<"Your Total Bill is $"<<bill;
return 0;
}
