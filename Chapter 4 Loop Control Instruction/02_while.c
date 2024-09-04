#include<stdio.h>

int main(){
    /*
    While Loop:
    Loops can execute a block of code as long as a specified condition is reached.
    They are handy because they save time, reduce errors, and they make code more readable.
    The while loop loops through a block of code as long as a specified condition is true:

    Try: Write aprogram to print natural numbers from 25 to 50
    counter is initialized to 0
    */
    int i = 0;//counter is initialized to 0
    while(i<=50){
        if(i>=25){
            printf("The value of i is %d\n", i);
        }

        i = i + 1;//dont forget to  increment and check condition in while to prevent from infinite loop
    }
    return 0;
}