//Prerequisites: Complete upto Chapter 4
/*
Snake, Water, Gun or Rock, Paper, Scissors is a game most of us have played school time
Write a C program of playing this game with you
Your program should able to print the results after you choose snake, water or gun.
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

void choose(char *ptr, int choice){
    if(choice==0){
        strcpy(ptr, "Snake");
    }else if(choice==1){
        strcpy(ptr, "Water");
    }else{
        strcpy(ptr, "Gun");
    }
}

int main(){
    srand(time(0));

    int player, computer = (rand() % 3);
    //0 -> snake
    //1 -> water
    //2 -> gun
    printf("Choose 0. Snake, 1. Water, 2.Gun: ");
    scanf("%d", &player);
    
    //You Chose, This is optional. Prerequisites: Complete upto Chapter 6
    char choice[10];
    char *ptr = choice;
    choose(ptr, player);
    printf("You Chose     : %s\n", choice);
    choose(ptr, computer);
    printf("Computer Chose: %s\n", choice);

    //cases
    if(player == computer){
        printf("Tie");
    }else if(player==0 && computer ==1){
        printf("You Win");
    }else if(player==0 && computer ==2){
        printf("You Lost");
    }else if(player==1 && computer ==0){
        printf("You Lost");
    }else if(player==1 && computer ==2){
        printf("You Win");
    }else if(player==2 && computer ==0){
        printf("You Win");
    }else if(player==2 && computer ==1){
        printf("You Lost");
    }else{
        printf("Something went wrong");
    }

    //Creating a random number

    return 0;
}