//WRITE A PROGRAM THAT PRINTS MENU-DRIVEN OPTIONS FOR USER TO SELECT
#include<iostream>
using namespace std;
int main()
{  
   int choice;
   cout<<"WELCOME! WHAT YOU WANT TO ORDER?\nSELECT ANY NUMBER FROM THE OPTIONS."<<endl;
   cout<<" MENU OPTIONS:\n 1.BURGER\n 2.PIZZA\n 3.WRAP\n 4.PASTA\n 5.EXIT"<<endl;
   cout<<"ENTER YOUR CHOICE: ";
   cin>>choice;
   switch(choice)
   { case 1:
   	    cout<<"You selected Burger.\nPrice:300"<<endl;
   	    break;
   	 case 2:
   	    cout<<"You selected Pizza.\nPrice:1000"<<endl;
   	    break;
   	 case 3:
   	    cout<<"You selected Wrap.\nPrice:250"<<endl;
   	    break;
   	 case 4:
   	    cout<<"You selected Pasta.\nPrice:500"<<endl;
   	    break;
   	 case 5:
   	    cout<<"Tank you for visiting! Exiting program."<<endl;
   	    break;
     default:
     	cout<<"INVALID CHOICE."<<endl;
   }
   
   return 0;
}
