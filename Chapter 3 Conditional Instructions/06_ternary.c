#include<stdio.h>

int main(){
    // A shorthand "if-else" can be written using the conditional or ternary operator
    // condition ? expression-if-true : expression-if-false
    int a = 100;
    int b = 10;
    a>b?printf("a is greater"):printf("b is greater");
    /*
    The above is same as
    if(a>b){
        printf("a is greater");
    }
    else{
        printf("b is greater");
    }
    */
    return 0;
}