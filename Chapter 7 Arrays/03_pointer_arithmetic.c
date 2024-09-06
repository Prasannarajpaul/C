#include<stdio.h>

int main(){
    int a = 5;
    int *ptr = &a;
    printf("The address of a is %u\n", ptr);//assume address = 6422220
    ptr++;
    printf("The values ptr is %u\n", ptr);//it will be 6422224, because it increments the size of data type i.e int(4)
    //A pointer can do:
    //Addition, Subtraction, and Comparision of two numbers

    //we can use this to access elements in an array
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int *array_ptr = &array[0];// first element address
    
    for(int i=0; i<10;i++){
        printf("The value at index %d is %d\n", i, *array_ptr);
        array_ptr++;//increments by the size of data type i.e 4bytes
    }


    return 0;
}