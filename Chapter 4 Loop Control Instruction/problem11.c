#include<stdio.h>

int main(){
    
    int n;
    int count=0;
    printf("Enter number: ");
    scanf("%d", &n);

    // 0 and 1 are not prime
    if(n==0 || n==1){
        count=1;
    }

    int i = 2;
    while(i<n){
        if(n%i==0){
            count=1;
        }
        i++;
    }
    
    //using ternary operator
    count==0?printf("Given number is Prime Number"):printf("Given number is not Prime Number");//count == 0 means there are no divisors other than 1(we started loop from 2) and itself (loop iterates until n-1)
    //you use if-else also

    return 0;
}