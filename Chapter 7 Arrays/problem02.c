#include<stdio.h>

int main(){
    int S[3] = {1, 2, 3};
    int *S_ptr = S;
    printf("%d", *S_ptr);//element 1
    printf("%d", *(S_ptr+1));//element 2
    printf("%d", *(S_ptr+2));//element 3

    //S_ptr+3 will be fourth element which exceed the size of array(3)
    //So, Answer is
    //b. False
    return 0;
}