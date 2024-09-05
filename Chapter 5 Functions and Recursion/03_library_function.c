#include<stdio.h>
#include<math.h> // This header file contains maths related functions

int area(int x);

int area(int x){
    return x*x;
}
int main(){
    int a = 5;
    //using a library function - a square
    printf("The are of the square is %f\n", pow(a, 2));//pow(a, b)== a to the power of b. pow gives float value
    //using a user defined function - a*a
    printf("The are of the square is %d\n", area(a));

    return 0;
}