#include<stdio.h>

int main(){
    char st[] = {'a', 'b', 'c'};// Character Array
    for(int i=0; i<3; i++){
        printf("Character is %c\n", st[i]);
    }
    //String is a character array that terminates with null character
    char st1[] = {'H', 'i', '\0'};// \0 is null character

    //We can create the above like
    char s[] =  "Harry"; //it adds null character automatically
    for(int i=0; i<5; i++){
        printf("Character is %c\n", s[i]);
    }


    
    return 0;
}