#include<stdio.h>

int main(){
    char st[] =  "Harry"; //once a string is initialized it cannot be changed
    for(int i=0; i<5; i++){
        printf("%c", st[i]);
    }
    printf("\n");
    //for the above loop, we need to know the string size and need to iterate each character
    // instead of this, we can use 
    //string format specifier -> %s

    printf("%s", &st);//we know &st gives address of first element in the array
    printf("\n");
    
    return 0;
}