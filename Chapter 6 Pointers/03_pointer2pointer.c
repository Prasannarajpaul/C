#include<stdio.h>

int main(){
    //Pointer to a Pointer
    //like j pointing to i or storing the address of i
    //we can have another pointer that pointing to address of j

    int i = 10;
    int *j = &i; // j pointer stores address of i variable
    int **k = &j;// k poniter stores address of j pointer

    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The value of i is %d\n", **k);

    //Simply remember that * cancel out &
    //*j  = *(&i)  = i
    //**k = **(&j) = *j =*(&i) = i
    
    return 0;
}