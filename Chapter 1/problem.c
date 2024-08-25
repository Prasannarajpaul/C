#include<stdio.h>

int main(){
    float c , f;

    printf("Enter temparatue in Celsius: ");
    //If data type is float and if you use %d instead of %f the value will change and give wrong answer
    //Always use declared data type throughout the program
    scanf("%f", &c);

    f = ((9.0/5.0)*c) + 32;// Always use parenthesis in C, as C didnt follow BODMAS or PODMAS rule
    printf("The value in Fahrenheit is %f", f);
    return 0;
}