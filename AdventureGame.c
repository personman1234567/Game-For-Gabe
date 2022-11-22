#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

void waitFor (unsigned int secs) {
    unsigned int retTime = time(0) + secs;   // Get finishing time.
    while (time(0) < retTime);               // Loop until it arrives.
}

int main(void)
{
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf(" ---------------------------------\n");
    printf("|             Welcome             |\n");
    printf(" ---------------------------------\n\n\n");

    printf("You find yourself standing in the middle of the street, all alone. You have no Idea what you're doing here.\n\n\n");
    // waitFor(3);

    char input[128];
    int noCount = 0;
    int valid = 0;


    while(valid == 0){
        printf("Let's check out our surroundings shall we?\n\nEnter 'y' for yes, or 'n' for no: ");
        scanf("%s", input);
        // fgets(input, 1, stdin);
        printf("\n");
        if(!strcmp(input, "y")){
            printf("--->   YESSSS\n");
            valid++;
        }
        else if(!strcmp(input, "n")){
            if(noCount == 0){
                printf("--->   Pfffft I guess SOMEBODY doesn't want to unlock his fridge any time soon.\n");
                usleep(3000000);
                printf("--->   Come back when you get serious.\n");
                usleep(2000000);
                printf("--->   Press any key, then enter to continue...");
                scanf("%s", input);
                if(!strcmp(input, "n")){
                    printf("Aight\n");
                    break;
                }
                noCount++;
            }
            else if(noCount == 1){
                printf("--->   I thought you were serious this time but I guess not...\n");
                usleep(3000000);
                printf("--->   Bitch.\n");
                printf("--->   Press any key, then enter to continue...");
                scanf("%s", input);
                if(!strcmp(input, "n")){
                    printf("--->   Aight, come back later then.\n");
                    break;
                }
                noCount++;
            }
            printf("*\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        }
        else{
            printf("--->   Not a valid input, retard\n\n");
            waitFor(3);
            printf("*\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        }
    }
}