#include<stdio.h>
#include<string.h>

void decrypt(char array[]){
    for(int i=0;i<strlen(array);i++){
        array[i]=array[i]-1;
    }
}
int main(){
    char str[] = "Ibdlfs23456";//Encrypted password
    //To decrypt
    printf("Encoded Password: %s\n", str);
    printf("Decrypting...\n");
    decrypt(str);
    printf("Decoded Password: %s\n", str);

    //Decoding a secret message
    char str2[] = "Uif!tfdsfu!up!cfdpnf!cftu!dpefs!jt!ibwjoh!tuspoh!gpvoebujpo";//ouput from problem06.c
    printf("Encoded Message: %s\n", str2);
    printf("Decrypting...\n");
    decrypt(str2);
    printf("Decoded Message: %s\n", str2);
    return 0;
}