//WRITE A PROGRAM THAT DETERMINES TAX BRACKET BASED ON INCOME LEVELS
#include<iostream>
using namespace std;
int main()
{  
   double income;
   cout<<"ENTER YOUR INCOME IN PKR: ";
   cin>>income;
   if(income<=600000)
   { cout<<"YOUR TAX BRACKET IS 0%";
   }
   else if(income<=1200000)
   { cout<<"YOUR TAX BRACKET IS 5%";
   }
   else if(income<=2200000)
   { cout<<"YOUR TAX BRACKET IS 15%";
   }
   else if(income<=3200000)
   { cout<<"YOUR TAX BRACKET IS 25%";
   }
   else if(income<=4100000)
   { cout<<"YOUR TAX BRACKET IS 30%";
   }
   else
   { cout<<"YOUR TAX BRACKET IS 35%";
   }
   return 0;
}
