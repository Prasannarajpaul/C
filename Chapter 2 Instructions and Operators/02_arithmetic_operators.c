#include<stdio.h>

int main(){
    int a = 4;
    int b = 3;
    int c = a + b;
    printf("The value of a is %d and value of b us %d\n", a, b);
    printf("The sum is %d\n", c);

    // Modulus operator is used to get the remainder
    printf("The remainder is %d\n", a%b);

    /*
    1. Operands can be int/ float etc/
    2. % is the modular division operator
        % returns the remainder
        % cannot be float
        % sign is same as of numerator(-5%2 = -1 but 5%-2 = 1)
    3. No operator is assumed if you declare a=bc(like general), only use operators like a=b*c
    4. There is no operator to perform exponentiation in C however we can use pow(x,y) from <math.h>
     */

    //In calculator we use ^ but ^ is not a operator in C. Only we need to use pow(x, y)

    return 0;
}