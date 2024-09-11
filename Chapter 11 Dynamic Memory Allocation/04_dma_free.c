#include<stdio.h>
#include<stdlib.h>

int main(){
    //free() - used to deallocate the memory. The memory allocated using calloc or malloc is not deallocated automatically
    int n = 5;
    int *ptr;

    //Creating Dynamic array of size n=5
    ptr = (int *)malloc(n * sizeof(int));

    // values are assigned at allocated memory
    ptr[0] = 3;
    ptr[1] = 6;
    ptr[2] = 7;
    ptr[3] = 9;
    ptr[4] = 11;

    // printing values  
    for(int i=0; i<n; i++){
        printf("%d\n", ptr[i]);
    }

    //using free()
    free(ptr);

    //printing again to see what will come
    for(int i=0; i<n; i++){
        printf("%d\n", ptr[i]);
    }
    //garbage values are found
    
    return 0;
}