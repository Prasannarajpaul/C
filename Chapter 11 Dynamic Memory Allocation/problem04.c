#include<stdio.h>
#include<stdlib.h>

int main(){
    int  *ptr;
    int n = 5;
    ptr = (int*) malloc(n*sizeof(int));

    ptr[0] = 10;
    ptr[1] = 15;
    ptr[2] = 20;
    ptr[3] = 25;
    ptr[4] = 30;

    ptr = (int*) realloc(ptr, 10*sizeof(int));

    ptr[5] = 35;
    ptr[6] = 40;
    ptr[7] = 45;
    ptr[8] = 50;
    ptr[9] = 55;

    
    printf("Entered values:\n");
    for(int i=0;i<10;i++){
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    return 0;
}