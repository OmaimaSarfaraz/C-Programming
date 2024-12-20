//WRITE A PROGRAM THAT CHECK WHETHER A NUMBER IS POSITIVE AND EVEN
#include<iostream>
using namespace std;
int main()
{  
   int num;
   cout<<"ENTER A NUMBER: ";
   cin>>num;
   if(num>=0)
   { if(num%2==0)
     { cout<<num<<" IS POSITIVE AND EVEN."<<endl;
	 }
	 else
	 { cout<<num<<" IS POSITIVE BUT NOT EVEN."<<endl;
	 }
   }
   else
   { cout<<num<<" IS NOT POSITIVE."<<endl;
   }
   return 0;
} 
