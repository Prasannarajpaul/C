#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("prasanna.txt", "r");
    char ch;
    //EOF -> End of File
    //fgetc returns EOF when all the characters from a file have been read
    //So, by using EOF we can create a program that returns all the file content
    while(1){
        ch = fgetc(ptr);
        printf("%c", ch);
        
        if(ch == EOF){
            break;
        }
    }
    return 0;
}