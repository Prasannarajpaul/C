#include<stdio.h>

int main(){
    int a;
    char ch = 'a';
    ch = 'c';
    ch = '\n'; //it looks like two charactera '\' and 'n' but it is one character called escape sequence character
    // \n represents a new line
    printf("Hey I am good \n nice to meet you \n");
    // \t represents a tab space
    // \" represents "
    // \' represents '
    // \\ represents \

    printf("\"Hi\" I\'m your new sir, you can call me sir\\paul");
    return 0;
}