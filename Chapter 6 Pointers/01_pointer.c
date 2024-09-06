#include<stdio.h>

int main(){
    /*
    A pointer is a variable which stores the address of another variable
    The address operator is used to obtain the address of a given variable
    
    Assume:
    i stores 72 and has a address in the memory of 87994
    j(pointer) stores 87994(address of i) and has a address in the memory of 87994

    Ex: &i--> 87994
        &j--> 87998
    */
    int i =72; //72 will be stored in the ram at an address of i
    printf("The address of i is %p\n", &i);// %p is called format specifier of of pointer and &i is the address of i
    printf("The address of i is %u\n", &i);// %u is called format specifier of of unsigned integer and &i is the address of i

    int* j = &i;//j is a pointer pointing to i
    // j and &i are same means j has value which is the address of i
    printf("The value of j is %p\n", j);// %p gives value in Hexadecimal
    printf("The value of j is %u\n", j);// %u gives value in integer

    //*(&i) gives value at address i
    //* called Value at Address operator
    printf("The value at address j is %d\n", *j);

    //we know that pointer is a variable that store address of another vairable
    //This means the pointer variable also has an address in the memory
    //j also has a address
    printf("The address of address j is %p\n", &j);
    printf("The address of address j is %u\n", &j);


    return 0;
}