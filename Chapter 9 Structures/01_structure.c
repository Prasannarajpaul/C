#include<stdio.h>
#include<string.h>

struct employee{
    int code;//This declares a new user defined data type!
    float salary;
    char name[10];
};//semi colon is important

int main(){
    struct employee e1, e2;
    e1.code = 1;
    // e1.name = "Harry"; we cant directly assign value 
    strcpy(e1.name, "Harry");
    e1.salary = 25000;

    printf("%d %f %s", e1.code, e1.salary, e1.name);
    return 0;
    /*
    Array or strings    -> Similar data(int, float, char)
    Structures can hold -> Dissimilar data

    We can create the data types in the employee structures separately but when the number of properties in a structure increases, it becomes difficult for us to create data variables without structures.
    In a nutshell:
        a. Structures keep the data organized
        b. Structures make data management easy for the programmer
    */
}