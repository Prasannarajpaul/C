#include<stdio.h>
//Proto type is not Compulsory required but for best practice we should use
int change(int x);

int change(int x){
    x = 20; // x changed to 20
    return x; // return will return the value at function call
}

int main(){

    int a = 2;
    int b = change(a);// It will return some value(20), So we assigned to b variable
    printf("The value is %d\n", b);// b will be 20

    //But a didn't change in main function
    change(a);// We passing a value by copying it and get a result by the function. It doesn't change the value of a in main()

    printf("The value is %d\n", a);// a will be same as declared(2)

    return 0;
}
