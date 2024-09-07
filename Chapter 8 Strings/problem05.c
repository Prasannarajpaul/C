#include<stdio.h>

int mystrlen(char arr[]){
    char c;
    int i=0;
    c = arr[i];
    while(c!='\0'){//We know that last character in string is null character '\0'
        c = arr[i];
        i++;
    }
    return i-1;    
}

void mystrcpy(char target[], char source[]){
    for (int i = 0; i < mystrlen(source); i++)
    {
        target[i] = source[i];
    }
    //Just making sure the last item to be null character
    target[mystrlen(source)]='\0';
    
}
int main(){
    char str1[] = "Harry";
    char str2[10];
    mystrcpy(str2, str1);
    printf("String 1 is %s\n", str1);
    printf("String 2 is %s\n", str2);

    return 0;
}