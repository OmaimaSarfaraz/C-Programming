//WRITE A PROGRAM THAT DETERMINE ELIGIBILITY FOR A LOAN BASED ON AGE AND INCOME 
#include<iostream>
using namespace std;
int main()
{  
   int age;
   double income;
   cout<<"ENTER YOUR AGE: ";
   cin>>age;
   cout<<"ENTER YOUR MONTHLY INCOME: ";
   cin>>income;
   if(age>=18)
   { if(income>=30000)
     { cout<<"You are eligible for a loan."<<endl;
	   }
	 else
	 { cout<<"You are not eligible for a loan due to low income."<<endl;
	 }
   }
   else
   { cout<<"You are not eligible for a loan due to age."<<endl;
   }
   return 0;
}
