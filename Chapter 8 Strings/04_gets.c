#include<stdio.h>

int main(){
    char st[30];
    //scanf for strings
    gets(st);//same as scanf("%s", st) and takes spaces also like, "This is a classroom"
    //printf for strings
    puts(st);//same as printf("%s", st) and prints This is a class room

    //But gets--> create buffer overflow
    //It reads the line from stdin into the buffer pointed to by 'str' until a newline(Enter) or EOF is encountered
    //So, depricated in C11 standard
    //We have another one to use instead of gets --> fgets

    return 0;
}