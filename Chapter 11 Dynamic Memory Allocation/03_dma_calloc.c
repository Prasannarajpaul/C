#include<stdio.h>
#include<stdlib.h>

int main(){
    //Taking float type just for practice
    int n = 5;
    float *ptr;

    //Creating Dynamic array of size n=5
    ptr = (float*) calloc(n, sizeof(float));//allocates continous space in memory for 30 blocks (floats)
    //calloc() - stands for continous allocation. It initialize each memory block with a default value of 0

    ptr[0] = 3;
    ptr[1] = 6;
    ptr[2] = 7;
    ptr[3] = 9;
    ptr[4] = 11;

    //if no values are initialized to the array after creating, the array will retun 0s as calloc initialize every block with a default value of 0

    for(int i=0; i<n; i++){
        printf("%.2f\n", ptr[i]);
    }

    
    free(ptr);//always free allocated memory

    
    return 0;
}