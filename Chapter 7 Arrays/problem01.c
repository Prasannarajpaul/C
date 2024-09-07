#include<stdio.h>

int main(){
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = array;//which is same as *ptr=&array[0]
    printf("The value at address %u is %d\n", ptr, *ptr);//1 first element
    printf("The value at address %u is %d\n", ptr+2, *(ptr+2));// 3 third element
    //ptr = array --> ptr = &array[0]
    //ptr+1 = &array[1]
    //ptr+2 = &array[2]
    return 0;
}