#include <iostream>
using namespace std;
int main()
{
    char gender,city;
    int age,salary,net_salary;
    // Input gender
    printf("Enter Gender (M for Male,F for Female): ");
    scanf(" %c",&gender);
    // Input age
    printf("Enter Age: ");
    scanf("%d",&age);
    // Input city
    printf("Enter City (K for Karachi, H for Hyderabad, S for Sukkur, G for Ghotki): ");
    scanf(" %c",&city);
    // Input salary
    printf("Enter Salary: ");
    scanf("%d",&salary);
    // Check conditions to adjust net salary
    if (gender=='F' && (age>=25 && age<=35) && (city=='K'||city=='H'))
    {
        net_salary=salary+2000; // Add 2000 if conditions for female are met
    } 
	else if (gender=='M' && (age>=25 && age<=40) && (city=='S' || city=='G')) 
	{
        net_salary=salary+2500; // Add 2500 if conditions for male are met
    }
    else
    { net_salary=salary;
    }
    // Prints the net salary
    printf("The net salary is: %d\n", net_salary);
    return 0;
}

