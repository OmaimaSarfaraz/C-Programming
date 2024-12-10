#include<iostream>
using namespace std;
int main()
{
   float gpa,grade_point[5],credit_hours[5],sum=0,total_h=0;
   for(int i=0;i<5;i++)
   {
   printf("Enter credit hours for course %d: ",i+1);
   scanf("%f",&credit_hours[i]);
   printf("Enter grade points for course %d: ",i+1);
   scanf("%f",&grade_point[i]);
   total_h+=credit_hours[i];
   sum+=credit_hours[i]*grade_point[i];
   }
   gpa=sum/total_h;
   printf("The SGPA of the semester is: %.2f",gpa);
   return 0;
}
