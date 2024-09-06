#include<stdio.h>

int fibonacci(int n);
// 0, 1, 2, 3, 5, 8, 13, 21, 34
int fibonacci(int n){
    if(n==1||n==2){
        return n-1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n = 7;
    printf("%dth element in Fibonacci Series is %d", n, fibonacci(n));
    return 0;
}