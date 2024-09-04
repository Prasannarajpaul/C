//Prerequisites: Complete upto Chapter 4

/*
We write a program that generates a random number and asks the player to guess it.
If the player's guess is higher than the actual number, the program displays "Lower number please".
Similarly, if the player's guess is lower than the actual number, the program displays "Higher number please".

When the user guesses the correct number, the program displays the number of guesses the player used to arrive at the number

Hint: Use loop & use a random number generator
*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    
    //Initialize random number generator
    srand(time(0));

    //Generate random number between 1 to 100
    int randomNumber = (rand() % 100) + 1;

    int no_of_guesses = 0;
    int guessed;
    
    do{
        printf("Guess the Number: ");
        scanf("%d", &guessed);
        if(guessed>randomNumber){
            printf("Lower Number Please...\n");
        }else if(guessed<randomNumber){
            printf("Higher Number Please...\n");
        }else{
            printf("Congratulation!!!\n");
        }
        no_of_guesses++;
    }while(guessed!=randomNumber);

    printf("You guessed the number in %d guesses", no_of_guesses);

    return 0;
}