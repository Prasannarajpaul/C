#include<stdio.h>

float average(int a, int b, int c);

float average(int a, int b, int c){
    return (a+b+c)/3.0;  // to make the division return float we using float number(3.0)
}

int main(){
    int a, b, c;
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);
    
    printf("The Average is %f", average(a, b, c));
    return 0;
}