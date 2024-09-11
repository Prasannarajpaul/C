#include<stdio.h>
#include<stdlib.h>

int main(){
    int  *ptr;
    int n = 6;
    ptr = (int*) malloc(n*sizeof(int));

    ptr[0]=6;
    ptr[1]=2;
    ptr[2]=3;
    ptr[3]=4;
    ptr[4]=1;
    ptr[5]=5;

    for(int i=0;i<n;i++){
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    return 0;
}