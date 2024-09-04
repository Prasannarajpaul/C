#include<stdio.h>

int main(){
    /*
    Loops:
    A loop in programming is like doing something over and over again until you're satisfied. You get to pick what you want to do and how many times you want to do it. It's like telling the computer, "Keep doing this until I say stop!"

    Using loops makes things easier because instead of writing the same instructions multiple times, you can just tell the computer to repeat those instructions for you.

    Imagine you want to print numbers from 1 to 10, each on a new line.

    Without using a loop, you'd have to write 10 separate cout statements like this:

    Types of Loops
    1. while loop
    2. do-while loop
    3. for loop
    */

    int i = 1;
    while(i<=10){
        printf("The value of i is %d\n", i);
        i = i + 1;
    }
    return 0;
}