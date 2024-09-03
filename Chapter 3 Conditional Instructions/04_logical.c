#include<stdio.h>

int main(){
    int a = 1;
    int b = 0;
    printf("The value of a and b is %d\n", a&&b);
    printf("The value of a or b is %d\n", a||b);
    printf("The value of not(a) is %d\n", !a);

    /*
    Logical Operators are used to provide logic to the C program
    '&&'  AND
    '||'  OR
    '!'   NOT

    Usage
    1. &&(AND) is true when both the conditions are true
        a. 1 && 0  -> false
        b. 0 && 1  -> false
        c. 0 && 0  -> false
        d. 1 && 1  -> true
    2. ||(OR) is true when atleast one consition is true
        a. 1 || 0  -> true
        b. 0 || 1  -> true
        c. 0 || 0  -> false
        d. 1 || 1  -> true
    3. !(NOT) returns true if false and false if true
        a. !(3>5)  -> false
        b. !(9==10)-> true
    */
    /*
    if(a&&b){
        printf("Both are True");
    }
    The above is same as
    if(a){
        if(b){
        printf("Both are True");
        }
    }
    As the number of conditions increases, the level of indentation increases. This reduce readability. Logical operators come to rescue in such cases
    */
    return 0;
}