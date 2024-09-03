#include<stdio.h>

int main(){
    for (int i = 0; i < 15; i++)
    {
        if(i==10){
            break; // means exit the loop now
        }
        if(i==5){
            continue; //means exit this iteration now, this means exit this iteration. i.e it skips this particular iteration 
        }
        printf("i is %d\n", i);
    }
    
    return 0;
}