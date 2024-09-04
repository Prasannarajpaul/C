#include<stdio.h>

int main(){
    int n = 10;
    int sum = 0;
    //for loop
    for(int i = 1; i<=n; i++){
        sum += i;
    }
    
    printf("The sum of first %d natural numbers is: %d\n", n, sum);

    //do-while loop
    int i = 1;
    sum = 0; // sum value will be 55, so making it zero
    do{
        sum += i;
        i++;
    }while(i<=10);

    printf("The sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}