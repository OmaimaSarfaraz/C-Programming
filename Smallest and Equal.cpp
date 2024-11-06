#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e;
	printf("Enter 5 numbers: ");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	
	if(a<b&&a<c&&a<d&&a<e)
	{printf("%d is smallest \n",a);}
	else if(b<a&&b<c&&b<d&&b<e)
	{printf("%d is smallest \n",b);}
	else if(c<b&&c<a&&c<d&&c<e)
	{printf("%d is smallest \n",c);}
	else if(d<b&&d<c&&d<a&&d<e)
	{printf("%d is smallest \n",d);}
	else if(a==b&&a==c&&a==d&&a==e)
	{printf("\n");}
	else 
	{printf("%d is smallest \n",e);}
    if(a==b&&a==c&&a==d&&a==e)
	{printf("All Are Equal \n");}
	else
	{printf("All Are Not Equal");
	}
    return 0;
}
