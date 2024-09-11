#include<stdio.h>
#include<stdlib.h>

int main(){
    //C is a language with some fixed rules of programming. ex: Changing the size of an array is not allowed

    //Dynamic memory allocation is a way to allocate memory to data structure during the runtime. We use DMA function available in C to allocate and free memory during run time

    //Function for DMA in C: malloc(), calloc(), free(), realloc()

    // int n;
    // scanf("%d", &n);
    // int arr[n];//Not allowed in C

    //malloc() - stands for memory allocation. It takes number of bytes to be allocated as an input and returns a pointer of type void

    int n;
    int *ptr;
    scanf("%d", &n);
    //Creating Dynamic array
    ptr = (int*)malloc(n*sizeof(int));//malloc returns null pointer, so we typecasted to int* (integer pointer)

    //taking input from user and storing in ptr array
    for(int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<n; i++){
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    
    return 0;
}