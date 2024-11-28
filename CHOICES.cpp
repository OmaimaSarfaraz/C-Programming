#include <iostream> 
#include <math.h>
#include<string>
using namespace std;
int main()
{  
   //ASKING FOR NAME AND CHOICE
   char name[20];
   int choice;
   printf("Enter your name: ");
   gets(name); 
   printf("HI! %s WHAT DO YOU WANT \n1.SQUARE ROOT \n2.CUBE \n3.PRINTS NUMBER 50 TIMES \n4.TABLE \nENTER YOUR CHOICE: ",name);
   scanf("%d",&choice);
   //SELECTING THE CASE OF USER CHOICE
   switch(choice)
   {
   	case 1:
   	{  //CASE 1 FOR SQUARE ROOT
	    int num;
		double result;
	    	printf("**SQUARE ROOT**\nEnter a number: ");
	        scanf("%d",&num);
	       if(num>=0)
		   {   result=sqrt(num);
	          printf("The result of square root of %d is: %.2lf",num,result);}
	    else
	        {
			printf("Square root is undefined for negative number.");}
   		break;
	   }
   	case 2:
 	{    //CASE 2 FOR CUBE OF ANY NUMBER
	    int num;
	    long result;
	    printf("**CUBE**\nEnter a number: ");
	    scanf("%d",&num);
	    result=pow(num,3);
	    printf("The result of (%d)^3 is: %ld",num,result);
   		break;
	   }
	case 3:
	{   //CASE E FOR PRINTING NUMBER 50 TIMES
	    int num;
	    printf("**PRINTS NUMBER 50 TIMES**\nEnter a number: ");
	    scanf("%d",&num);
	    for(int i=1;i<=50;i++)
	        printf("%d\n",num);
		break;
	}
	case 4:
	{   //CASE 4 FOR TABLE PRINTING
	    int table,length;
   	    printf("**TABLE**\nWhich table you want to print: ");
	    scanf("%d",&table);
	    printf("Which length you prefer: ");
	    scanf("%d",&length);
	    for(int i=1;i<=length;i++)
	    {
	       printf("%d * %2d = %3d\n",table,i,table*i);
	    }
		break;
	}
	default:
	{ //DEFAULT FOR SELECTING WRONG OPTION
	  printf("***INVALID CHOICE***");
	}
   }
   return 0;
}
