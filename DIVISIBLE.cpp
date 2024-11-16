//WRITE A PROGRAM THAT CHECK IF A NUMBER IS DIVISIBLE BY BOTH 2 AND 3
#include<iostream>
using namespace std;
int main()
{  
   int num;
   cout<<"ENTER A NUMBER: ";
   cin>>num;
   if(num%2==0)
   { if(num%3==0)
     { cout<<num<<" IS DIVISIBLE BY BOTH 2 AND 3."<<endl;
	 }
	 else
	 { cout<<num<<" IS ONLY DIVISIBLE BY 2."<<endl;
	 }
   }
   else
   { cout<<num<<" IS NOT DIVISIBLE BY 2 ."<<endl;
   }
   return 0;
}
