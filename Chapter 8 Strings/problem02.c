#include<stdio.h>
#include<string.h>

int main(){
    char st1[6];
    char st2[6];
    //for loop to use %c
    for(int i=0;i<5;i++){
        scanf("%c",&st1[i]);//after entering a character it moves to next line
        //It can be read as escape character, to prevent this we need to flush it
        fflush(stdin);//makes don't consider new line as a character in %c
    }
    st1[5] = '\0';//A string is a character array that ends with null character - \0

    printf("First string is %s", st1);
    
    printf("\n");
    //using %s
    scanf("%s", st2);
    printf("Second String is %s", st2);

    printf("\n");

    //Now comparing both are equal or not (Provide same string to both like 'Hello')
    printf("%d", strcmp(st1, st2));//0 means both are same
    
    return 0;
}