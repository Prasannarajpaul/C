#include<stdio.h>

int main(){

    int i = 72;
    int* j = &i;
    // j is a pointer pointing to i
    // j is an integer pointer
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);

    char k = 'A';
    char* l = &k;
    // l is a pointer pointing to k
    // l is an character pointer
    printf("The address of k is %p\n", &k);
    printf("The address of k is %p\n", l);

    float m = 2.5;
    float* n = &m;
    // n is a pointer pointing to m
    // n is an float pointer
    printf("The address of m is %p\n", &m);
    printf("The address of m is %p\n", n);


    //Practice use of meaningful variable names
    //int *in_ptr
    //char *ch_ptr
    //float *fl_ptr

    return 0;
}