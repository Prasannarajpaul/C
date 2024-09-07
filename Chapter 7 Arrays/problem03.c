#include<stdio.h>

int main(){
    int array[10] ;

    for(int i=0;i<10;i++){
        array[i]=(i+1)*5;
    }

    for(int i=0;i<10;i++){
        printf("The vale of 5 X %d = %d\n", i+1, array[i]);
        
    }

    return 0;
}