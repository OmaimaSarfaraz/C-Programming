//WRITE A PROGRAM THAT PRINTS LEVELS OF ACHIEVEMENT BASED ON SCORE
#include<iostream>
using namespace std;
int main()
{  
   int score;
   cout<<"Enter your score: ";
   cin>>score;	
    if(score>=90 && score<=100)
	 { cout<<"EXELLENT";
		}   
	else if(score>=75 && score<90)
	{ cout<<"GOOD";
		}
	else if(score>=60 && score<75)
	{ cout<<"AVERAGE";
		}  
	else if(score>=50 && score<60)
	{ cout<<"BELOW AVERAGE";
		}
	else if(score>=35 && score<50)
	{ cout<<"PUT MORE EFFORTS";
	    }
	else if(score>=0 && score<35)
	{ cout<<"POOR";
	    }
    else
     { cout<<"INVALID SCORE";
	 }
   return 0;
}
