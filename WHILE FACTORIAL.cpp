#include<iostream>
using namespace std;
int main()
{  
   int i,num;
   double fact=1;  
   printf("Enter a num to check its factorial: ");
   scanf("%d",&num);
   if (num<0)
       { printf("Error! Factorial of a negative number doesn't exist."); }
   else
   {
    printf("%d! = ", num);
    i=num;
    while (i>1)
	 { 
	     printf("%d*", i);
        fact *= i;
		  i--;}
        printf("1 = %.0lf\n", fact);  }
    return 0;  
}
