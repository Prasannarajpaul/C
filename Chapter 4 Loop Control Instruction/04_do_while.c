#include<stdio.h>

int main(){
    /*
    'while' checks the condition and then execute the code
    'do-while' executes the code and checks the condition
    'do-while' = while loop which executes atleast once
    */

    // lets print 1 to n numbers using do-while loop
    int i = 1;
    int n;
    printf("Enter n value: ");
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);
        i++;
    } while (i<=n);
    
    return 0;
}