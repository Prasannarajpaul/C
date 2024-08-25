#include<stdio.h>

int main(){
    // Area of Circle is pi * r * r
    // hint pi = 3.14
    int radius = 6;
    int height = 10;
    printf("The area of Circle with radius %d is %f\n", radius, 3.14*radius*radius);
    // Volume of the Cylinder is pi*r*r*h
    printf("The volume of Cylinder with radius %d and height %d is %f", radius, height, 3.14*radius*radius*height);
    return 0;
}