#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("prasanna.txt", "r");
    char c = fgetc(fptr);//used to read a charcater from the file
    printf("%c", c);

    //writes 5 as content in the prasanna.txt
    // FILE *fptr1;
    // fptr1 = fopen("prasanna.txt", "w");
    // fputc('5', fptr1);

    //appends 6 as content at the last in the prasanna.txt
    // FILE *fptr2;
    // fptr2 = fopen("prasanna.txt", "a");
    // fputc('6', fptr2);
    // return 0;
}