#include<stdio.h>
#include<stdlib.h>

int main(){
    int  *ptr;
    int n = 6;
    ptr = (int*) malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        scanf("%d", &ptr[i]);
    }
    printf("Entered values:\n");
    for(int i=0;i<n;i++){
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    return 0;
}