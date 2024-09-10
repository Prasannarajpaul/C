#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("problem04.txt", "w");

    char name1[15], name2[15];
    int salary1, salary2;
    printf("Enter the Name: ");
    scanf("%s", &name1);
    printf("Enter the Salary: ");
    scanf("%d", &salary1);

    printf("Enter the Name: ");
    scanf("%s", &name2);
    printf("Enter the Salary: ");
    scanf("%d", &salary2);

    fprintf(ptr, "%s, %d", name1, salary1);
    fprintf(ptr, "%c", '\n');//moving to next line
    fprintf(ptr, "%s, %d", name2, salary2);

    fclose(ptr);

    return 0;
}