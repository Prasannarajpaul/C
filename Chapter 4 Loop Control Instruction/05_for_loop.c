#include<stdio.h>

int main(){
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    //for( initialize; test condition; increment or decrement){
    //     Block of code to execute
    //}

    // Loop runs in the following way
    // 1. i is initialized to 1
    // 2. condition will be checked i.e 1<=10 true
    // 3. code block is executed
    // 4. i is incremented
    // 5. 2, 3 and 4 steps will run until condition fails i.e i=11 which means 11<=10 which is false so loop will terminate


    // one time execution of a loop is called 1 iteration
    // the above loop goes for n iterations as initial value is 1 and condition is <=n
    return 0;
}