#include <iostream>
using namespace std;
int main()
{
	int n1,n2,n3;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1==n2)
	  {if(n2==n3)
	     {printf("All values are equal\n");
		 }
	  }
	else
	{ printf("They all are not equal\n");
	}
	return 0;
}
