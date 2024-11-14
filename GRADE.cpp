//WRITE A PROGRAM THAT ASSIGN GRADES BASED ON MARKS
#include<iostream>
using namespace std;
int main()
{  
   float marks;
   cout<<"Enter your marks out of hundred to find your grade: ";
   cin>>marks;	
	if(marks>=90)
	 { cout<<"A grade";
		}   
	else if(marks>80 && marks<=89)
	 { cout<<"B grade";
		}
	else if(marks>70 && marks<=79)
	 { cout<<"C grade";
		}  
	else if(marks>60 && marks<=69)
	 { cout<<"D grade";
		}
	else if(marks>50 && marks<=59)
	 { cout<<"E grade";
	    }
    else
     { cout<<"FAIL";
	 }
   return 0;
}

