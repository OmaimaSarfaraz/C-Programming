//WRITE A PROGRAM THAT ASSIGN GRADES BASED ON MARKS
#include<iostream>
using namespace std;
int main()
{  
   int total=500;
   float percent,c1,c2,c3,c4,c5,marks;
   cout<<"Enter your 5 courses marks out of hundred to find your grade: ";
   cin>>c1>>c2>>c3>>c4>>c5;
   marks=c1+c2+c3+c4+c5;
   percent=(marks/total)*100;	
	if(percent>=90 )
	 { cout<<"A+ Grade  "<<percent;
		}   
	else if(percent>=70)
	 { if(percent<90)
	     {
		 cout<<"A Grade  "<<percent;}
		}
	else if(percent>=50)
	 { if(percent<70)
	     {
	       cout<<"B Grade  "<<percent;
		}  }
	else if(percent<50)
	 { cout<<"F: Fail  "<<percent;
	    }
    else
     { cout<<"INVALID INPUT";
	 }
   return 0;
}

