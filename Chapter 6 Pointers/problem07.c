#include<stdio.h>

void tentimes(int x);

void tentimes(int x){
    x *= 10;
}
int main(){
    int n = 45;
    printf("n value: %d\n", n);//n = 10
    tentimes(n);// Call by value
    printf("n value: %d\n", n);// n = 10, no change

    return 0;
}