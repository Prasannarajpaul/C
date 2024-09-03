#include<stdio.h>

int main(){
    /*
    ASCII value
    refer this link -> https://www.asciitable.com/

    Every character has a ASCII value
    a = 97, b = 98, c = 99, . . . z = 122
    */

    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);
    printf("Entered character: %c and its ASCII value is %d\n", ch, ch);
    //The %d converts the character ch into its corresponding ASCII value
    
    if(ch>=97 && ch<=122){
        printf("This Character is Lower Case\n");
    }
    else{
        printf("This Character is Upper Case\n");
    }
    //Its a normal code and it only checks for Lower Case or not as any value other than [97, 122] will consider as Upper Case but in reality they can be symbols or numbers
    return 0;
}