#include<stdio.h>

int main(){
    int n;
    float m = 32.23;

    n = (int) m;// convert the float to int by demoting fractional part .23
    printf("The value of n is %d", n);
    return 0;
}