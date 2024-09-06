#include<stdio.h>

int* sum(int i, int j);
float* average(int i, int j);

int* sum(int i, int j){
    int sum = i+j;
    printf("The sum is %d\n", sum);
    int *ptr = &sum;
    return ptr;
}

float* average(int i, int j){
    float average = (i+j)/2.0;
    printf("The average is %.2f\n", average);
    int *ptr = &average;
    return ptr;
}


int main(){
    int a = 25;
    int b = 35;
    int *ptr1;
    float *ptr2;

    //sum
    sum(a,b);
    //average
    average(a,b);

    //we get a warning for accessing the local variable
    ptr1 = sum(a, b);//it calls the function sum, it takes some memory address to run, and then erase it self
    ptr2 = average(a, b);// it is calling after the sum function, it uses the same memory address that sum run, and then erase it self

    printf("The address of sum is %u and of average is %u", ptr1, ptr2);//both will be same
    return 0;
}