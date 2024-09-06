#include<stdio.h>

float c2f(float c);

float c2f(float c){
    return ((9*c)/5)+32;
}

int main(){
    float c = 32;
    printf("Celsius to Fahrenheit for %.2f is %.2f", c, c2f(c));
    return 0;
}