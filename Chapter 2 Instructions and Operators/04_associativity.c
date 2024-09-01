#include<stdio.h>

int main(){
    int a = 3;
    int b = 6;
    int c = 9;

    printf("The value is %d", a*b/c);// first a*b then /c

    /*
    3*x-8*y is (3*x)-(8*y) or 3*(x-8*y)?
    In C language simple mathematics rules like BODMAS are not applied
    The anser to the above can be provided by operator precendence and associativity
     */

    /*
    Operator Precedence
    '*' '/' '%' -> 1st priority
    '+' '-'     -> 2nd priority
    '='         -> 3rd priority
    Higher priority are evaluated first in the presence of parenthesis
    */

    /*
    Operator Associativity
    when operators of equal priority are present in an expression, the tie is taken care of by associativity
    x*y/z -> (x*y) /z
    x/y*z -> (x/y) *z
    *, / follows left to right associativity
    */

   //Always use parenthesis in case of confusion
    return 0;
}