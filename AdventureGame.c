#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include "AdventureGame.h"

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
    usleep(3000000);

    char input[128];
    int noCount = 0;
    int valid = 0;


    while(valid == 0){
        printf("Let's check out our surroundings shall we?\n\nEnter 'y' for yes, or 'n' for no: ");
        scanf("%s", input);
        printf("\n");
        if(!strcmp(input, "y")){
            position1();
            valid++;
        }
        else if(!strcmp(input, "n")){
            if(noCount == 0){
                printf("--->   Pfffft I guess SOMEBODY doesn't want to unlock his fridge any time soon.\n");
                usleep(3000000);
                printf("--->   Come back when you get serious.\n");
                usleep(2000000);
                printf("--->   Press any key, then enter to continue: ");
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
                printf("--->   Press any key, then enter to continue: ");
                scanf("%s", input);
                if(!strcmp(input, "n")){
                    printf("--->   Aight, come back later then.\n");
                    break;
                }
                noCount++;
            }
            else if(noCount == 2){
                printf("--->   You are getting really annoying, but I'm not the one whose fridge is chained lmao\n\n");
                usleep(3000000);
                printf("--->   Press any key, then enter to continue: ");
                scanf("%s", input);
                if(!strcmp(input, "n")){
                    printf("--->   Aight, come back later then.\n");
                    break;
                }
                noCount++;
            }
            else if(noCount == 3){
                printf("--->   HAHAHAHA you did it again\n\n");
                usleep(3000000);
                printf("--->   Headass\n");
                usleep(3000000);
                printf("--->   Press any key, then enter to continue: ");
                scanf("%s", input);
                if(!strcmp(input, "n")){
                    printf("--->   Aight, come back later then.\n");
                    break;
                }
                noCount++;
            }
            else if(noCount == 10){
                printf("--->   Holy shit you're still at it. Thats impressive\n\n");
                usleep(3000000);
                printf("--->   Press any key, then enter to continue: ");
                scanf("%s", input);
                if(!strcmp(input, "n")){
                    printf("--->   Aight, come back later then.\n");
                    break;
                }
                noCount++;
            }
            else{
                printf("--->   Just check your surroundings man\n\n");
                usleep(2000000);
                printf("--->   Press any key, then enter to continue: ");
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
            usleep(3000000);
            printf("*\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        }
    }
}