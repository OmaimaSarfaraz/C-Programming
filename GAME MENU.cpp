#include <stdio.h>
using namespace std;
int main() 
{
    int option,choice;
    printf("Game Menu:\n1. Start Game\n2. Settings\n3. Exit\nEnter your choice: ");
    scanf("%d",&option);
    switch (option) 
	{
        case 1: // Start Game
            printf("\nStart Game Options:\n1. New Game\n2. Load Game\n3. Back to Game Menu\nEnter your choice: ");
            scanf("%d",&choice);
            switch (choice)
			 {
                case 1:
                    printf("Starting a New Game.\n");
                    break;
                case 2:
                    printf("Loading Game.\n");
                    break;
                case 3:
                    printf("Returning to Game Menu.\n");
                    break;
                default:
                    printf("Invalid Option!\n");
            }
            break;
            
        case 2: // Settings
            printf("\nSettings Menu:\n1. Display Settings\n2. Sound Settings\n3. Players Settings\nEnter your choice: ");
            scanf("%d", &choice);
            switch (choice) {
                case 1:
                    printf("Adjusting Display Settings.\n");
                    break;
                case 2:
                    printf("Adjusting Sound Settings.\n");
                    break;
                case 3:
                    printf("Adjusting Players Settings.\n");
                    break;
                default:
                    printf("Invalid Settings Option!\n");
            }
            break;

        case 3: // Exit
            printf("You choose Exit.\nExiting the Game. Goodbye!\n");
            break;
            
        default: //For invalid option
            printf("Invalid Main Menu Option!\n");
    }
    return 0;
}

