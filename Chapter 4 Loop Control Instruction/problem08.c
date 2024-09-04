#include<stdio.h>

int main(){
    //5! = 5*4*3*2*1 = 120
    //n! = 1*2*3*4*......*n
    //0!=1
    
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact*=i;//same as fact = fact*i
    }
    printf("Factorial of %d is %d", n, fact);

     /*
    Doing iterations for understanding let us consider n=5

    While loop started:
    fact = fact(initial value 1)   * i(1) -> fact = 1
    fact = fact(previous value 1)  * i(2) -> fact = 1  * 2 -> fact = 2
    fact = fact(previous value 2)  * i(3) -> fact = 2  * 3 -> fact = 6
    fact = fact(previous value 6)  * i(4) -> fact = 6  * 4 -> fact = 24
    fact = fact(previous value 24) * i(5) -> fact = 24 * 5 -> fact = 120
    

    i = 6; i<=5 condition fails and exits for loop
    The value of fact = 120

    prints the fact value    


    */


    return 0;
}