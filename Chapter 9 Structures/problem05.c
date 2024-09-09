#include<stdio.h>

typedef struct complexnumber
{
    int r;//real part
    int i;//imaginary part
} Complex;
int main(){
    Complex  c = {1, 2};
    printf("The complex number is %d+%di", c);
    return 0;
}