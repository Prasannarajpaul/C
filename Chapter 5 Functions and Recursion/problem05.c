#include<stdio.h>

int main(){
    int a = 4;
    printf("%d %d %d", a, ++a, a++);
    //Evaluation order is left to right
    //a++ prints 4 and increments 4 to 5
    //++a increments 5 to 6 and prints 6
    //a prints 6

    return 0;
}