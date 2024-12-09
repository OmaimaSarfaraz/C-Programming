#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
    double a,b,c,disc,root1,root2,real,imaginary;
    // Input coefficients
    printf("Enter values of a, b, and c: ");
    scanf("%lf %lf %lf",&a,&b,&c);
    // Calculate discriminant
    disc=(b*b)-(4*a*c);
    if (disc>0) 
	 { // Real and unequal roots
      root1=(-b+sqrt(disc))/(2.0*a);
      root2=(-b-sqrt(disc))/(2.0*a);
      printf("Roots are real and unequal: \nRoot1 = %.2lf \nRoot2 = %.2lf\n",root1,root2);
     } 
	else if(disc==0) 
   	 { // Real and equal roots
      root1=root2=-b/(2.0*a);
      printf("Roots are real and equal:\n");
      printf("Root1 = Root2 = %.2lf\n", root1); 
     }
	else 
	 { // Imaginary roots
      real=-b/(2.0*a);
      imaginary=sqrt(-disc)/(2.0*a);
      printf("Roots are imaginary:\n");
      printf("Root1 = %.2lf + %.2lfi\n",real,imaginary);
      printf("Root2 = %.2lf - %.2lfi\n",real,imaginary);
     }
    return 0;
}

