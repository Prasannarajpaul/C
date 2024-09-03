#include<stdio.h>

int main(){
    int a = 10;
    if(a = 11)
        printf("I am 11");
    else
        printf("I am not 11");

    //Answer will be "I am 11" because we assigned a value to 'a' and didn't used comparision operator ==
    //We know any value except 0 in if will be true
    //So, 11 is not zero and if block starts executing

    
    /*
    Note:
    If a single statement is next to if then white space is enough
    But practice of using {} is encouraged as we use them in real time
    */

    return 0;
}