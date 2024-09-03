#include<stdio.h>

int main(){
    // Decision Making Instructions in C
    // if-else statement
    // switch statement
    int age = 20;

    if(age>18){
        printf("We are inside if\n");
        printf("You are above 18\n");
    }
    if(age%5==0){
        printf("We are inside another if\n");
        printf("Your age is divisible by 5\n");
    }
    return 0;
}