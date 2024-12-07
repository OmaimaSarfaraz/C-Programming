#include <iostream>
using namespace std;
int main() 
{
    double a,b,c,d,x,y,numi,deno,result;   // Variables declaration 
    // Input values for variables
    printf("Enter the values for a, b, c, d, x, and y:\n");
    printf("a: ");
    scanf("%lf", &a);
	printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);
    printf("d: ");
    scanf("%lf", &d);
	printf("x: ");
    scanf("%lf", &x);
    printf("y: ");
    scanf("%lf", &y);
    // Check for division by zero
    if (y==0 || (x+a)==0) 
     {   printf("Division by zero is not allowed.\n");
      }
    // Calculate the result using the given equation
    numi=(((7*7*b)*((x*y)+a))/(c-(0.8+(2*b*d))));
    deno=((x+a)*(1/y));
    result=numi/deno; 
    // Display the result
    printf("The result of the equation is: %.2lf\n", result);
    return 0;
}

