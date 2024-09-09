#include<stdio.h>
#include<string.h>

struct employee{
    int code;//This declares a new user defined data type!
    float salary;
    char name[10];
};//semi colon is important

int main(){
    struct employee e1, e2, e3;
    printf("Enter Employee 1 Details: ");
    scanf("%d %f %s",&e1.code , &e1.salary, e1.name);
    printf("Enter Employee 2 Details: ");
    scanf("%d %f %s",&e2.code , &e2.salary, e2.name);
    printf("Enter Employee 3 Details: ");
    scanf("%d %f %s",&e3.code , &e3.salary, e3.name);

    printf("Entered data: \n");

    printf("%d %.2f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %.2f %s\n", e2.code, e2.salary, e2.name);
    printf("%d %.2f %s\n", e3.code, e3.salary, e3.name);
    return 0;

}