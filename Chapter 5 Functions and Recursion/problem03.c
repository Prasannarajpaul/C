#include<stdio.h>
float force(float);

float force(float mass){
    return mass*9.8;
}
int main(){
    int m = 45;
    printf("The value of force is %.2f", force(m));
    return 0;
}