#include<stdio.h>

int main(){
    int a;
    //Inorder to take input from the user and assign it to a variable, we use 'scanf()' function
    scanf("%d", &a);// '&' is the 'address of' operator and it means that the supplied value should be copied to the address which is indicated by variable a
    printf("The value of a is %d", a);
    return 0;
}