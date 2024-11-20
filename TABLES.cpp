#include <iostream>
using namespace std;
int main() 
{  
    int n;
    printf("ENTER A NUMBER: ");
    scanf("%d",&n);
    for (int i=n;i>=1;i--) 
	{  printf("TABLE OF %d:\n",n);
        for (int j=1;j<=10;j++) 
		{  
		 printf("%d * %d = %d",n,j,n*j);
		 printf("\n");
      }  
       printf("\n");
       n--;
    }
	return 0;
}


