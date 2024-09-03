#include<stdio.h>

int main(){
    /*
    Sometimes we want our program to execute few set of instructions over and over again. For example: printing 1 to 100, first 100 even numbers etc.

    Hence, loops make it easy for a programmer to tell the computer that given set of instructions must be executed repeatedly

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