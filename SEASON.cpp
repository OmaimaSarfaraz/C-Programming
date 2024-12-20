//WRITE A PROGRAM THAT OUTPUTS THE SEASON BASED ON MONTH
#include<iostream>
using namespace std;
int main()
{  
   int month;
   cout<<"ENTER THE MONTH NUMBER (1-12): ";
   cin>>month;
   if(month==12||month==1||month==2)
   { cout<<"THE SEASON IS WINTER.";
   }
   else if(month>=3 && month<=5)
   { cout<<"THE SEASON IS SPRING.";
   }
   else if(month>=6 && month<=8)
   { cout<<"THE SEASON IS SUMMER.";
   }
   else if(month>=9 && month<=11)
   { cout<<"THE SEASON IS FALL.";
   }
   else 
   { cout<<"INVALID MONTH NUMBER.";
   }
   return 0;
}
