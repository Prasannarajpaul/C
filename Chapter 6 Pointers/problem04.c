#include<stdio.h>

void call(int *x);

void call(int *x){
    printf("The value of a is %d", *x);
}
int main(){
    int a = 45;
    call(&a);// calling through reference
    return 0;
}