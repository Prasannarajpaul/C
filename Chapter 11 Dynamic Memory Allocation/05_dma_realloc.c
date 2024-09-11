#include<stdio.h>
#include<stdlib.h>

int main(){
    // sometimes the dynamic allocated memory is insufficient or more than required. 
    //realloc() - is used to allocate memory of new size using the previous pointer ans size
    int n = 3;
    int *ptr;

    //Creating Dynamic array of size n=3
    ptr = (int *)malloc(n * sizeof(int));

    // values are assigned at allocated memory
    ptr[0] = 3;
    ptr[1] = 6;
    ptr[2] = 7;

    //I want to add 2 more integers but the memory is full (3 integers are initialized)

    //reallocating 2 more to the 3 making it into 5
    ptr =(int*) realloc(ptr, 5*sizeof(int));

    ptr[3] = 9;
    ptr[4] = 11;

    // printing values  
    for(int i=0; i<5; i++){
        printf("%d\n", ptr[i]);
    }

    //using free()
    free(ptr);

    
    return 0;
}