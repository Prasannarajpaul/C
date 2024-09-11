#include<stdio.h>
#include<stdlib.h>

int main(){
    int  *ptr;
    int n = 6;
    ptr = (int*) calloc(n, sizeof(int));

    //since, using calloc we have all values set to 0
    
    for(int i=0;i<n;i++){
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    return 0;
}