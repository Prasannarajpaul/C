#include<stdio.h>

int main(){
    //we can create a string using a pointer
    char *ptr = "Hello";
    puts(ptr);

    //char st[] =  "Harry"; Once a string is initialized it cannot be reinitialized
    //But if the string is initialized using a pointer, we can reinitialize it
    ptr = "Changed to";
    puts(ptr);

    ptr = "World";
    puts(ptr);
    return 0;
}