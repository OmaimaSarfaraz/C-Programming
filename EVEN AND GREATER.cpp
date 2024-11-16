//WRITE A PROGRAM THAT CHECK IF A NUMBER IS EVEN AND GREATER THAN 10
#include<iostream>
using namespace std;
int main()
{  
   int num;
   cout<<"ENTER A NUMBER: ";
   cin>>num;
   if(num%2==0)
   { if(num>10)
     { cout<<"NUMBER IS EVEN AND GREATER THAN 10.";
	 }
	 else
	 { cout<<"NUMBER IS EVEN BUT NOT GREATER THAN 10.";
	 }
   }
   else
   { cout<<"NUMBER IS NOT EVEN.";
   }
   return 0;
}
