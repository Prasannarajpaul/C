#include<stdio.h>
/*
    A function is a block of code which A particular task
    A function can be reused by the programmer in a given program any number of times
*/

//Function prototype
void sum(int x, int y);

//Function defination
// This part contains the exact set of instructions executed during the function call
// when a function is called from main(), The main function pauses and temporarily suspends. During this time, control transfers to the called function. Once the function finishes executing, main() resumes
void sum(int x,int y){// x and y are parameters that take values from funtion call temporary
    printf("The sum is %d\n", x+y);
}


//void means no return type - we will se return type later

int main(){

    int a = 2;
    int b = 3;
    sum(a, b); //Function call, a and b are arguments that pass through the function
    // A function call instructs the compiler to execute the functions body when the call is made

    int a1 = 5;
    int b1 = 10;
    sum(a1, b1); //Function call

    int a2 = 10;
    int b2 = 40;
    sum(a2, b2); //Function call

    /*
    Types of Functions:
    1. Library functions      -> Commonly required functions grouped together in a library on disk
    2. User Defined functions -> These are the functions declared and defined by the user
    */

    
    
    return 0;
}
