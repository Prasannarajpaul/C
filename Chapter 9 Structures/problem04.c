#include<stdio.h>
#include<string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
} Emp;

int main(){
    Emp e1;
    Emp *ptr = &e1;
    ptr->code = 100;//same as *ptr.code = *(&e1).code = e1.code
    ptr->salary = 56000;
    strcpy(ptr->name, "Prasanna");

    printf("%d %.2f %s", ptr->code, ptr->salary, ptr->name);
    return 0;
}