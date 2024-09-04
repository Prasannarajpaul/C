#include<stdio.h>

int main(){
    int n = 10;
    int i = 1;
    int sum = 0;
    while (i<=10)   
    {
        sum += i; // sum = sum + i 
        i++;      // i = i + 1;
    }
    printf("The sum of first %d natural numbers is: %d", n, sum);
    /*
    Doing iterations for understanding

    While loop started:
    sum = sum(initial 0) + i (1) -> sum  = 1
    sum = sum(previous value 1)  + i (2)  -> sum  = 1 + 2   -> sum = 3
    sum = sum(previous value 3)  + i (3)  -> sum  = 3 + 3   -> sum = 6
    sum = sum(previous value 6)  + i (4)  -> sum  = 6 + 4   -> sum = 10
    sum = sum(previous value 10) + i (5)  -> sum  = 10 + 5  -> sum = 15
    sum = sum(previous value 15) + i (6)  -> sum  = 15 + 6  -> sum = 21
    sum = sum(previous value 21) + i (7)  -> sum  = 21 + 7  -> sum = 28
    sum = sum(previous value 28) + i (8)  -> sum  = 28 + 8  -> sum = 36
    sum = sum(previous value 36) + i (9)  -> sum  = 36 + 9  -> sum = 45
    sum = sum(previous value 45) + i (10) -> sum  = 45 + 10 -> sum = 55

    i = 11; i<=10 condition fails and exits while loop
    The value of sum = 55

    prints the sum value    


    */
    return 0;
}