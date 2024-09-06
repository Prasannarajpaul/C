#include<stdio.h>

int main(){
    //An array is an collection of similar elements. Array allows a single variable to store multiple values
    int marks[5];//array size 5, starting from 0. 0, 1, 2, 3, 4

    for(int i=0;i<5;i++){
        printf("Enter marks of Student %d: ",i+1);
        scanf("%d", &marks[i]);
    }

    for(int i=0;i<5;i++){
        printf("The marks of Student %d is %d\n",i+1 , marks[i]);
    }


    return 0;
}