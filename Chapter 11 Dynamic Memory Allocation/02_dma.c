#include<stdio.h>
#include<stdlib.h>

int main(){
    //Taking float type just for practice
    int n = 5;
    float *ptr;

    //Creating Dynamic array of size n=5
    ptr = (float*)malloc(n * sizeof(float));
    //malloc() - stands for memory allocation. It takes number of bytes to be allocated as an input and returns a pointer of type void

    ptr[0] = 3;
    ptr[1] = 6;
    ptr[2] = 7;
    ptr[3] = 9;
    ptr[4] = 11;

    //if no values are initialized to the array after creating, malloc provides garbage(random) values

    for(int i=0; i<n; i++){
        printf("%.2f\n", ptr[i]);
    }

    free(ptr);//always free allocated memory

    // Dynamic means at run time
    //when we declare int arr[5];
    //it will be compiled first and allocate memory before the program runs
    //int arr[n]; where n is taken at run time will not allocate any memory causing error
    //By dynamic allocation, we can allocate memory to a data strcuture(like array) at run time
    return 0;
}