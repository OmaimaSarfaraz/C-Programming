#include <iostream>
using namespace std;
int main()
{   
    int no,rem,div; 
    printf("Enter a number for conventing into binary: ");
    scanf("%d",&no);
    do{
    	rem=no%2;
    	no/=2;
    	printf("%d",rem);
	}
	while(no>=1);
    return 0;
}
