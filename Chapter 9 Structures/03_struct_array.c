#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee facebook[100]; // an array of structures same like : int array[], we declaring struct <name> array[]
    //we can access the data using:
    facebook[0].code = 100;
    facebook[0].salary = 15000;
    strcpy(facebook[0].name, "Harry");

    facebook[1].code = 101;
    facebook[1].salary = 25000;
    strcpy(facebook[1].name, "Prasanna");

    facebook[2].code = 102;
    facebook[2].salary = 35000;
    strcpy(facebook[2].name, "Paul");

    facebook[3].code = 103;
    facebook[3].salary = 21000;
    strcpy(facebook[3].name, "Maddy");

    facebook[4].code = 104;
    facebook[4].salary = 17000;
    strcpy(facebook[4].name, "Pranathi");

    for (int i = 0; i < 5; i++)
    {
        printf("%d %.2f %s\n", facebook[i].code, facebook[i].salary, facebook[i].name);
    }


    //We can assign values like this also in a structure
    struct employee e1 = {100, 55000, "Harry"};
    printf("%d %.2f %s\n", e1.code, e1.salary, e1.name);

    struct employee e2 = {0};//all values set to 0
    printf("%d %.2f %s\n", e2.code, e2.salary, e2.name);

    //Structures in Memory
    //struct employee e1 = {100, 71.22, "Harry"}
    //Address          --> 78810  78812  78818//100 at 78810, next one is float +4 = 78814 ane next one is string +4 = 78818


    
    return 0;
}