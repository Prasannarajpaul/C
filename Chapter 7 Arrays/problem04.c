#include<stdio.h>

int main(){
    int array[10] ;

    for(int i=0;i<10;i++){
        printf("Enter %d element: ",i);
        scanf("%d",&array[i]);
        
        
    }

    for(int i=0;i<10;i++){
        printf("The vale at index %d = %d\n", i, array[i]);
        
    }

    return 0;
}