#include<stdio.h>

int main(){
    // Hard coded inputs
    // int length = 3;
    // int breadth = 6;

    // Tip: Always use hard coded inputs first for fast debugging and completing the program and then change them into user inputs.

    // User inputs
    int length, breadth;
    // we can simply use l for length and b for breadth
    printf("Enter Length: ");
    scanf("%d", &length);
    printf("Enter Breadth: ");    
    scanf("%d", &breadth);

    printf("The are of this Rectangle is %d", length*breadth);
    return 0;
}