//WRITE A PROGRAM THAT TAKES NUMBER (1-7) AND PRINTS THE CORRESPONDING WEEKDAY
#include<iostream>
using namespace std;
int main()
{  
   int num;
   cout<<"ENTER A NUMBER TO CHECK WEEKDAY (1-7): ";
   cin>>num;
   switch(num)
   {
   	case 1:
   		cout<<"MONDAY";
   		break;
    case 2:
   		cout<<"TUESDAY";
   		break;
   	case 3:
   		cout<<"WEDNESDAY";
   		break;
	case 4:
   		cout<<"THURSDAY";
   		break;
	case 5:
   		cout<<"FRIDAY";
   		break;
	case 6:
   		cout<<"SATURDAY";
   		break;
	case 7:
   		cout<<"SUNDAY";
   		break;
	default:
		cout<<"INVALID INPUT";		   	   	   	   	   	
   }
   return 0;
}
