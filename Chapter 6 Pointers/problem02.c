#include<stdio.h>

void some(int *ptr);

void some(int *ptr){
    printf("The value of ptr is %d\n", ptr);
    printf("The value at ptr is %d\n", *ptr);
}
int main(){
    int i = 10;
    int *ptr = &i;
    printf("The value at the i is %d\n", *ptr);
    printf("The address of i is %u\n", ptr);
    some(ptr);

    return 0;
}