#include<iostream>
using namespace std;
int main()
{  
    int age;
    char license;
    // Input user data
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Do you have a driving license? (Y for yes/N for no): ");
    scanf(" %c",&license);
    // Check conditions using logical operators
    // Using AND (&&) OR (||) NOT (!)
    if (age>=18 && license=='Y')
	{
        printf("You are eligible to drive.\n");
    } 
	else if(age>=18 || license=='N')
	{
        printf("You dont have a license so you are not eligible to drive.\n");
    }
    else if (age<18 || license!='Y')
	{
        printf("You are not eligible to drive.\n");
    }
   return 0;
}
