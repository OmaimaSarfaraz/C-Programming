//WRITE A PROGRAM THAT CLASSIFY AN INTEGER AS POSITVE NEGATIVE OR ZERO
#include<iostream>
using namespace std;
int main()
{  
   int num;
   cout<<"ENTER AN INTEGER TO CHECK IT IS POSITVE NEGATIVE OR ZERO: ";
   cin>>num;
   if(num==0)
   { cout<<"NUMBER IS ZERO."<<endl;
   }
   else if(num<0)
   { cout<<num<<" IS NEGATIVE."<<endl;
   }
   else if(num>0)
   { cout<<num<<" IS POSITIVE."<<endl;
   }
   return 0;
}

