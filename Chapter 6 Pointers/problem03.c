#include<stdio.h>

void tentimes(int *x);

void tentimes(int *x){
    *x *= 10;
    /*For better understanding
    *x parameter receives argument as reference &a
    *x=&a -> *x *=10 -> *(&a) *= 10 -> a *=10 -> a = a*10
    */
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Entered number:%d\n",n);
    tentimes(&n);
    printf("New number:%d",n);

    return 0;
}