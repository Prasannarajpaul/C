#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

void show(struct employee e);

void show(struct employee e){
    printf("Code  : %d\n", e.code);
    printf("Salary: %.2f\n", e.salary);
    printf("Name  : %s\n", e.name);
}


int main(){
    struct employee e1;
    e1.code = 1000;
    e1.salary = 15000;
    strcpy(e1.name, "Harry");

    //making more employees data
    struct employee e2={1001, 20000, "Prasanna"};
    struct employee e3={1003, 25000, "Pranathi"};

    //printing the struct employee data using a funtion
    show(e1);
    show(e2);
    show(e3);

    return 0;
}