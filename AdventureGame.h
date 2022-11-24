#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <unistd.h>
#include <time.h>

void position1(){
    char input[128];
    int valid = 0;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    // printf("-------------------------------------------\n");
    printf("You check your surroundings...\n\n");
    usleep(3000000);
    printf("You check behind you, and you see that the road goes straight back to a traffic light\n\n");
    usleep(4000000);
    printf("You don't wanna go that way though. Something about this area makes you want to go farther in, rather than walking away.\n\n");
    usleep(4000000);
    printf("So by going forward, the road splits in two directions, left and right.\n\n");
    usleep(4000000);
    printf("Directly in front of you, across the road, is a sign that reads \"One Way\"\n\n");
    usleep(4000000);
    printf("Probably just for cars though. Which direction would you like to go?\n\n");
    usleep(3000000);
    printf("type \"l\" for left, or \"r\" for right: ");
    scanf("%s", input);

    while(valid == 0){
        if(!strcmp(input, "l")){
            printf("\n--->   Mutha Fucka went left\n\n");
            valid++;
        }
        else if(!strcmp(input, "r")){
            printf("\n--->   Mutha Fucka went right on god\n\n");
            valid++;
        }
        else if(!strcmp(input, "?")){
            position1();
            valid++;
        }
        else{
            printf("\n--->   Not a valid input, retard\n\n");
            usleep(3000000);
            printf("*\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf("type \"l\" for left, type \"r\" for right, or type \"?\" to check surroundings again: ");
            scanf("%s", input);
        }
    }
}

void position1Return(){
    char input[128];
    int valid = 0;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("You're back where you originally started, at the entrance\n\n");
    usleep(3000000);
    printf("Like before, the sign in front of you reads \"One Way\". Probably just for cars though.\n\n");
    usleep(4000000);
    printf("Would you like to go left or right?\n\n");
    printf("type \"l\" for left, or \"r\" for right: ");

    while(valid == 0){
        if(!strcmp(input, "l")){
            printf("\n--->   Mutha Fucka went left\n\n");
            valid++;
        }
        else if(!strcmp(input, "r")){
            printf("\n--->   Mutha Fucka went right on god\n\n");
            valid++;
        }
        else if(!strcmp(input, "?")){
            position1Return();
            valid++;
        }
        else{
            printf("\n--->   Not a valid input, retard\n\n");
            usleep(3000000);
            printf("*\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            printf("type \"l\" for left, type \"r\" for right, or type \"?\" to check surroundings again: ");
            scanf("%s", input);
        }
    }
}

void position2(){
    char input[128];
    int valid = 0;
}

void deadEnd(){
    
}