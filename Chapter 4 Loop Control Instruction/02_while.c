#include<stdio.h>

int main(){
    /*
    Try: Write aprogram to print natural numbers from 25 to 50
    counter is initialized to 0
    */
    int i = 0;//counter is initialized to 0
    while(i<=50){
        if(i>=25){
            printf("The value of i is %d\n", i);
        }

        i = i + 1;//dont forget to  increment and check condition in while to prevent from infinite loop
    }
    return 0;
}