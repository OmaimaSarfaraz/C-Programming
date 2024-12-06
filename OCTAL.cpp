#include <iostream>
using namespace std;
int main()
{   
    int no,rem,div; 
    printf("Enter a number for conventing into Octal: ");
    scanf("%d",&no);
    do{
    	rem=no%8;
    	no/=8;
    	printf("%d",rem);
	}
	while(no>=1);
    return 0;
}
