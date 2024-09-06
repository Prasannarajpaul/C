#include<stdio.h>

void swap(int *x, int *y);

void swap(int *x, int *y){
    int temp = *x;//assigning x value to a temp
    *x = *y;      //assigning y value to x
    *y = temp;    //assigning temp value which is x value to y
}
int main(){
    int a = 5;
    int b = 10;

    //Using a function to swap the numbers a and b
    printf("Before Swapping:\na = %d\nb = %d\n", a, b);
    swap(&a, &b);// Function Call By Reference
    printf("After Swapping:\na = %d\nb = %d\n", a, b);

    return 0;
}
    /*
    Swapping Explaination
    Assume:
    x plate with mango  ->x = mango
    y plate with banana ->y = banana
    (To Swap)
    take a temp plate
    change mango from x to temp plate -> temp = x(mango)
    change banana from y to x plate   -> x    = y(banana)
    change mango from temp to y plate -> y    = temp(mango)
    now we have 
    x plate with banana ->x = banana
    y plate with mango  ->y = mango
    */