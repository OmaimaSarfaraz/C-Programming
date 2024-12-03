#include<iostream>
using namespace std;
int main()
{
	char gender;
	printf("Enter your gender in 'm' or 'f': ");
	scanf("%c",&gender);
	if(gender=='m')
	{
		printf("You are a male");
	}
	else
	{
		printf("You are a female");
	}
	return 0;
}
