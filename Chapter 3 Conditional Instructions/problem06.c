#include<stdio.h>

int main(){
    int n1, n2, n3, n4;
    printf("Enter number 1: ");
    scanf("%d", &n1);
    printf("Enter number 2: ");
    scanf("%d", &n2);
    printf("Enter number 3: ");
    scanf("%d", &n3);
    printf("Enter number 4: ");
    scanf("%d", &n4);

    if(n1>n2 && n1>n3 && n1>n4){
        printf("The Greatest number: %d\n", n1);
    }
    else if(n2>n1 && n2>n3 && n2>n4){
        printf("The Greatest number: %d\n", n2);
    }
    else if(n3>n1 && n3>n2 && n3>n4){
        printf("The Greatest number: %d\n", n3);
    }
    else{
        printf("The Greatest number: %d\n", n4);
    }

    return 0;
}