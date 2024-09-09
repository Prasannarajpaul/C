#include<stdio.h>

int main(){
    //we will use array, as it is same data type

    int array[20];
    for(int i=0;i<20;i++){
        array[i]=i+1;
    }

    //printing
    for(int i=0;i<20;i++){
        printf("%d ", array[i]);
    }
    return 0;
}