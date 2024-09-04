#include<stdio.h>

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int fact = 1;
    int i = 1;
    while(i<=n){
        fact*=i; //same as fact = fact*i
        i++;     //i = i + 1
    }
    printf("Factorial of %d is %d", n, fact);

    return 0;
}