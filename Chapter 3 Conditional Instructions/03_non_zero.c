#include<stdio.h>

int main(){

    // Note: In C, a non-zero value is considered to be true, only 0 is false
    
    if(1){
        printf("1 if is executed\n");
    }
    if(0){
        printf("0 if is executed\n");//it will not print
    }
    if(12345){
        printf("12345 if (int) is executed\n");
    }
    if(3.14){
        printf("3.14 (float) if is executed\n");
    }
    if(-20){
        printf("-20 (negative) if is executed\n");
    }
    if('h'){
        printf("'h' (char) if is executed\n");
    }
    
    return 0;
}