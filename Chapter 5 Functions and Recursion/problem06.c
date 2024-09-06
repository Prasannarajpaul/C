#include<stdio.h>

int sum_natural(int n);

int sum_natural(int n){
    if(n==1){
        return 1;
    }
    return n+sum_natural(n-1);
}
int main(){
    int a = 10;
    printf("Sum of first %d natural numbers is %d", a, sum_natural(a));
    return 0;
}