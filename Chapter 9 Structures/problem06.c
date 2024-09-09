#include<stdio.h>

typedef struct complexnumber
{
    int r;//real part
    int i;//imaginary part
} Complex;

void display(Complex c){
    printf("%d+%di\n", c);
}
int main(){
    Complex  c[5];
    
    for(int i=0;i<5;i++){
        printf("Enter comlpex number %d\n", i+1);
        printf("Enter Real part: ");
        scanf("%d", &c[i].r);
        printf("Enter Imaginary part: ");
        scanf("%d", &c[i].i);
    }

    printf("The complex numbers are:\n");
    for(int i=0;i<5;i++){
        display(c[i]);
    }
    
    return 0;
}