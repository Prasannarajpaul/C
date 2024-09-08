#include<stdio.h>
#include<string.h>

void occurence(char arr[], char ch);

void occurence(char arr[], char ch){
    int i=0, count=0;
    for(int i=0;i<strlen(arr);i++){
        if(ch==arr[i]){
            count++;
        }
    }
    printf("The Occurences of %c are %d", ch, count);//since, loop iterates until '\0', it means it counts '\0' also
    
}

int main(){
    char str[] = "Harry is a Great Coder";
    char ch = 'a';
    occurence(str, ch);
    return 0;
}