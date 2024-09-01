#include<stdio.h>

int main(){
    /*
    A C program is a set of instructions. just like a reciepe - which contains instructions to prepare a particular dish
    Types of Instructions
    1. Type declaration Instructions
    2. Arithmetic Instructions
    3. Control Instruction
    */
    // Type declaration instruct compile to reserve a memory location 
    int a;      //Declare an integer variable 'a'
    float b;    //Declare a float variable 'b'
    char c;     //Declare a char variable 'c'
    int i = 10; //Declare and initialize 'i' with 10
    int j = i;  //Declare 'j' and initialize with 'i'
    int e = 2, f = 3, g = 4, h = 5; //Declare and initialize mutiple variables

    int k, l, m, n;
    k = l = m = n = 10;             //Assigning same value to multiple variables
    //%d is format specifier
    //%d is for int, %f for float, and %c for char
    printf("The value of i is %d and value of j is %d\n" ,i , j);
    printf("The value of e is %d and value of f is %d\n" ,e , f);
    printf("The value of g is %d and value of h is %d\n" ,g , h);
    printf("The value of k is %d and value of l is %d\n" ,k , l);
    printf("The value of m is %d and value of n is %d\n" ,m , n);

    // X + Y = Z 
    // X, Y are Operands
    // + Operators
    // Z Result
    return 0;
}