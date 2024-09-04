#include<stdio.h>

int main(){
    int n = 10;
    int i = 1;
    int sum = 0;
    while (i<=10)   
    {
        sum += 8*i; // sum = sum + i 
        i++;      // i = i + 1;
    }
    /*
    Same like problem05 but instead of adding i, we are adding 8*i 
    i iterate from 1 to 10 results in 8, 16, 24, 32, ... 72, 80 being added to the sum variable
    */
    printf("The sum of the numbers occuring in the multiplication table of 8: %d", sum);

    return 0;
}