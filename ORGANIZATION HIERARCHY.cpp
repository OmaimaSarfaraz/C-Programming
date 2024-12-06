#include <iostream>
using namespace std;
int main() 
{
    int school,department;
    printf("Organization Hierarchy:\n");
    printf("1. School of Computer Science\n");
    printf("2. School of Business\n");
    printf("3. School of Engineering\n");
    printf("Enter your school choice (1-3): ");
    scanf("%d",&school);

    switch (school) 
	{
        case 1: // School of Computer Science
          {
			printf("\nWelcome to the School of Computer Science.\nDepartments are:\n");
            printf("1. Department of Informatics\n");
            printf("2. Department of Machine Learning\n");
            printf("Enter your department choice (1-2): ");
            scanf("%d",&department);

            switch (department)
			{
                case 1:
                  {	printf("\nWelcome to the Department of Informatics\n");
                    printf("Subjects: AI, Computer Networks, DBMS and Information Security.\n");
                    break; }
                case 2:
                  { printf("\nWelcome to the Department of Machine Learning\n");
                    printf("Subjects: AI systems, Algorithms, and Natural Language Processing.\n");
                    break; }
                default:
                    printf("Invalid department in School of Computer Science!\n");
            }
            break;
         }       
        case 2: // School of Business
          {
			printf("\nWelcome to the School of Business. \nDepartments are:\n");
            printf("1. Department of Commerce\n");
            printf("2. Department of Purchasing\n");
            printf("Enter your department choice (1-2): ");
            scanf("%d", &department);

            switch (department) 
			{
                case 1:
                  { printf("\nWelcome to the Department of Commerce\n");
                    printf("Subjects: Trade, Economics, Banking and Financial strategies.\n");
                    break;}
                case 2:
                  {  printf("\nWelcome to the Department of Purchasing\n");
                    printf("Subjects: Procurement, Supply chain, and Vendor management.\n");
                    break;}
                default:
                    printf("Invalid department in School of Business!\n");
            }
            break;
          } 
        case 3: // School of Engineering
           {
			printf("\nWelcome to the School of Engineering.\nDepartments are:\n");
            printf("1. Department of Mechanical Engineering\n");
            printf("2. Department of Mechatronics Engineering\n");
            printf("Enter your department choice (1-2): ");
            scanf("%d", &department);

            switch (department)
			{
                case 1:
                  { printf("\nWelcome to the Department of Mechanical Engineering\n");
                    printf("Subjects: Design, Problem solving, Manufacturing, and Maintenance of Mechanical systems.\n");
                    break;}
                case 2:
                  {  printf("\nWelcome to the Department of Mechatronics Engineering\n");
                    printf("Subjects: Robotics, Integration of Mechanical, Electrical, and Computer systems.\n");
                    break;}
                default:
                    printf("Invalid department in School of Engineering!\n");
            }
            break;
          } 
        default: // For wrong input choice
            printf("Invalid School Choice!\n");
    }

    return 0;
}

