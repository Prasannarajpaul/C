#include<stdio.h>
#include<string.h>

void encrypt(char array[]){
    for(int i=0;i<strlen(array);i++){
        array[i]=array[i]+1;
    }
}
int main(){
    char str[] = "Hacker12345";//be my password
    //To encrypt
    printf("Password: %s\n", str);
    printf("Encrypting...\n");
    encrypt(str);
    printf("Encoded Password: %s\n", str);

    //Create a secret message
    char str2[] = "The secret to become best coder is having strong foundation";
    printf("Normal Message: %s\n", str2);
    printf("Encrypting...\n");
    encrypt(str2);
    printf("Encypted Secret Message: %s\n", str2);//Save this and we are using to decrypt in problem07.c
    return 0;
}