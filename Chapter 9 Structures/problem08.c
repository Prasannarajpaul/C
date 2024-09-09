#include<stdio.h>

typedef struct bankacc
{
    int accNo;
    char name[35];
    char ifsc[12];
    float balance;
} bankacc;

int main(){
    bankacc c1 = {121, "Prasanna", "SBI123456789", 20.5};

    printf("%d %s %s %.2f", c1.accNo, c1.name, c1.ifsc, c1.balance);

    return 0;
}