#include<stdio.h>

int main(){
    int i = 10;
    int *ptr = &i;
    printf("The address of the value is %u\n", ptr);
    printf("The value at the address is %d\n", *ptr);

    return 0;
}