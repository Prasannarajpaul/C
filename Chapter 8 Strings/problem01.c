#include<stdio.h>

int main(){
    char st[50];
    gets(st);// reads the stdin line until a new line or EOF is encountered means it takes multi-word string with spaces
    puts(st);// prints the string
    printf("%s", st);// prints the string
    scanf("%s", &st);//reads single word without any spaces
    //a.gets() is the answer
    return 0;
}