#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee e1;  //same as int e1, but data type is employee
    struct employee *ptr;//same as *ptr = &e1, but data type is employee
    ptr = &e1;

    e1.code = 1001;

    printf("%d\n", (*ptr).code);

    //Arrow Operator
    //ptr->code same as (*ptr).code
    printf("%d\n", ptr->code);
    
    return 0;
}