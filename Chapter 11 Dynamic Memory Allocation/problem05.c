#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr; int n=10;
    ptr = (int*) malloc(n*sizeof(int));

    int t=7;
    for(int i=0;i<n;i++){
        ptr[i]=t*(i+1);
    }
    //printing table upto n=10
    for(int i=0;i<n;i++){
        printf("%d X %d = %d\n", t, (i+1), ptr[i]);
    }

    printf("Reallocating Memory:\n");
    n=15;
    ptr = (int*) realloc(ptr, n*sizeof(int));
    for(int i=0;i<n;i++){
        ptr[i]=t*(i+1);
    }
    //printing table upto n=15
    for(int i=0;i<n;i++){
        printf("%d X %d = %d\n", t, (i+1), ptr[i]);
    }

    return 0;
}