#include <iostream>
#include <string.h>
using namespace std;
int main() 
{
    int id;
    char pass[20];
    printf("Enter your ID: ");
    scanf("%d",&id);
    switch(id) 
	{ 
      case 101: // First valid ID
      case 102: // Second valid ID
           {
			 printf("Enter your password: ");
            scanf("%s",pass); }
            switch(id) 
			{
                case 101:
                    if (strcmp(pass,"@pak12")==0) 
                    {    printf("Welcome! ADMIN\n");
                    }
				    else 
                    {   printf("Incorrect Password\n");
                    }
                    break;
                case 102:
                    if (strcmp(pass,"pass102")==0)
					{
                        printf("Welcome! User1\n");
                    }
					else 
					{
                        printf("Incorrect Password\n");
                    }
                    break;
            }
            break;
      default: // Id ID is not valid
        printf("Incorrect ID\n");
    }
    return 0;
}

