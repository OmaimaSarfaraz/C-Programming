//WRITE A PROGRAM THAT DISPLAY "MORNING" etc BASED ON INPUT HOUR (0-24)
#include<iostream>
using namespace std;
int main()
{  
   int hour;
   cout<<"ENTER AN HOUR (0-24): ";
   cin>>hour;
   switch(hour)
   {
   	case 5:
   	case 6:
   	case 7:
   	case 8:
   	case 9:
   	case 10:
   	case 11:
   	    { cout<<"MORNING."<<endl;
   	     break;
		  }
	case 12:
	case 13:
	case 14:
	case 15:
	case 16:
		{ cout<<"AFTERNOON."<<endl;
   	      break;
		  }
    case 17:
    case 18:
    case 19:
    	{ cout<<"EVENING."<<endl;
   	     break;
		  }
	case 20:
	case 21:
	case 22:
	case 23:
	case 24:
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
		{ cout<<"NIGHT."<<endl;
   	     break;
		  }
    default:
    { cout<<"INVALID HOUR.";
	}
   }
   return 0;
}
