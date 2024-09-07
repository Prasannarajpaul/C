#include<stdio.h>

void mystringlength(char arr[]);

void mystringlength(char arr[]){
    char c;
    int i=0;
    c = arr[i];
    while(c!='\0'){//We know that last character in string is null character '\0'
        c = arr[i];
        i++;
    }
    printf("The length of the string is %d", i-1);//since, loop iterates until '\0', it means it counts '\0' also
    
}

int main(){
    char str[] = "Harry";
    mystringlength(str);//we cant use built in function names to declare new function which causes errors

    return 0;
}