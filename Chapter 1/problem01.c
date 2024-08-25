#include<stdio.h>

int main(){
    //Hard coded inputs
    // int length = 3;
    // int breadth = 6;

    //User inputs
    int length, breadth;
    printf("Enter Length: ");
    scanf("%d", &length);
    printf("Enter Breadth: ");    
    scanf("%d", &breadth);
    
    printf("The are of this Rectangle is %d", length*breadth);
    return 0;
}