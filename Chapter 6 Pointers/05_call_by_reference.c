#include<stdio.h>

int sum(int *x, int *y);

int sum(int *x, int *y){
    *x=6;  //*(&a) = a, so we are directly working with values a and b
    return *x + *y;
}
int main(){
    int a = 5;
    int b = 7;
    //Now calling the sum by reference
    printf("The sum of %d and %d is %d\n", a, b, sum(&a, &b)); //instead of values we are sending the addresses
    //Since, we are sending the addresses we should use pointers as parameters

    printf("The value of a is %d", a);//a value changed
    //Because we are not sending copies like in call by value
    //We are sending the address at which the value is present
    //So, changing the value at that address mains we changed the value of the variable

    return 0;
}