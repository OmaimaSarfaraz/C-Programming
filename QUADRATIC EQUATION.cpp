#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int c;
	float a=5.6,b=8.5,x1,x2;
	float test,deno;
	printf("Enter an integer: ");
	scanf("%d",&c);
	test=(pow(b,2)-(4*a*c));
	deno=((pow(a/b,2))+(pow(b/c,2)));
	if(test>=0)
	{
	x1=(-b+(sqrt(test))/deno);
	x2=(-b-(sqrt(test))/deno);
	printf("The roots are: \nx1 = %.3f \nx2 = %.3f\n",x1,x2);
    }
	else
	{ printf("The equation has no roots because it has negative value in the square root");
	}
	return 0;
}

