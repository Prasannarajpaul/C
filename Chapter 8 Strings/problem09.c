#include<stdio.h>
#include<string.h>

int contain(char arr[], char ch);

int contain(char arr[], char ch){
    int i=0, count=0;
    for(int i=0;i<strlen(arr);i++){
        if(ch==arr[i]){
            return 1;
        }
    }
    return 0;    
}

int main(){
    char str[] = "Harry is a Great Coder";
    char ch = 'a';
    if(contain(str, ch)){
        printf("String contains the %c character\n", ch);
    }else{
        printf("String does not contains the %c character\n", ch);
    }
    return 0;
}