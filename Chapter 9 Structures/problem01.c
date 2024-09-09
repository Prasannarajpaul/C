#include<stdio.h>

typedef struct vector
{
    int i;
    int j;
} vector;
int main(){
    vector v1;
    v1.i = 5;
    v1.j = 6;
    vector v2 = {3, 4};
    printf("The value of vector is %di+%dj\n", v1.i, v1.j);
    printf("The value of vector is %di+%dj\n", v2.i, v2.j);
    return 0;
}