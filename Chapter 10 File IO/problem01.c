#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("problem1.txt", "r");
    int num1, num2, num3;
    fscanf(ptr, "%d", &num1);//pointer points to first content
    fscanf(ptr, "%d", &num2);//moves to next content
    fscanf(ptr, "%d", &num3);//moves to next content

    printf("%d %d %d", num1, num2, num3);

    fclose(ptr);

    return 0;
}