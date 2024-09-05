#include<stdio.h>

int factorial(int n);

int factorial(int n){
    //Base condition to prevent infinite calling loop
    if(n == 0 || n == 1){
        return 1;
    }else{
    //Recursion - calling a function by its function
        return n*factorial(n-1);
    }
}
int main(){
    int a = 5;
    printf("The factorial of %d is %d", a, factorial(a));
    /*
    Execution
    factorial(5) calls the funtion
    if condition fails, return x(5)*factorial(5-1)
    if condition fails, return x(4)*factorial(4-1) --> replaced at factorial(5-1) --> return 5*4*factorial(4-1)
    if condition fails, return x(3)*factorial(3-1) --> replaced at factorial(4-1) --> return 5*4*3*factorial(3-1)
    if condition fails, return x(2)*factorial(2-1) --> replaced at factorial(3-1) --> return 5*4*3*2*factorial(1-1)
    if condition true , returns 1                  --> replaced at factorial(1-1) --> return 5*4*3*2*1
    */
    return 0;
}