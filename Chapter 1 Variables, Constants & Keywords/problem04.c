#include<stdio.h>

int main(){
    // Simple interest = (P*r*t)/100
    // P = Principal amount
    // r = rate of interest
    // t = time

    float p = 34.1;
    int r = 8, t = 5; 
    

    printf("The value of the simple interest is %f", (p*r*t)/100);

    return 0;
}