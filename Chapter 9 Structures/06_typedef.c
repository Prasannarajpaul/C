#include<stdio.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
} emp;//we made an alias name for struct employee, which is emp

int main(){
    //type def is used to create an alias name for simple usage
    //It can be used for any data type but most use is to use for struct
    //using it for float as u dont like to type float always

    typedef float fl;// Now float alias name is f
    //we can use f instead of float from now

    fl a = 12.5;
    printf("%f\n", a);

    //It is useful for struct as we need to write long data type for declaration

    emp e1 = {1, 25000, "Harry"};//See instead of writing "struct employee", now we can use its alias name "emp"
    printf("%d %.2f %s\n", e1.code, e1.salary, e1.name);

    emp *ptr = &e1;//pointer declaration
    printf("%d %.2f %s\n", (*ptr).code, (*ptr).salary, (*ptr).name);

    //using arrow function
    printf("%d %.2f %s\n", ptr->code, ptr->salary, ptr->name);

    

    return 0;
}