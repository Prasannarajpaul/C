#include<stdio.h>

int sum(int x, int y);

int sum(int x, int y){
    //x and y are parameters
    //trying to change x
    x=6;// The value of a cannot be changed because we are getting copy of 'a' value through parameters
    return x+y;
}
int main(){
    /*
    Types of Functions
    1. Call by value     -> Sending the values of arguments
    2. Call by reference -> Sending the address of arguments
    */
    int a = 5;
    int b = 7;

    printf("The sum of %d and %d is %d\n", a, b, sum(a, b)); //instead of values we are sending the addresses

    //a and b are arguments
    //we are passeing a and b as values
    //a and b values are copied and go to parameters x and y
    //This is called Call by Value
    //We cant change a and b values by calling a funtion

    printf("The value of a is %d", a);//In the above code at line 20 we called sum() but it didn't change the value of a
    //But to change we can use Call by Reference

    return 0;
}