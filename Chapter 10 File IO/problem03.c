#include<stdio.h>

int main(){
    FILE *ptr1, *ptr2;//ptr1 for reading, ptr2 for writing
    char ch;
    ptr1 = fopen("problem03r.txt", "r");
    ptr2 = fopen("problem03w.txt", "w");
    while(1){
        ch = fgetc(ptr1);
        if(ch==EOF){
            break;
        }else{
            fprintf(ptr2, "%c", ch);
            printf("%c", ch);
        }
    }
    printf("\n");
    
    fprintf(ptr2, "%c", '\n');//Moving pointer to next line

    fclose(ptr1);//closing files
    fclose(ptr2);//closing files
    //it will write once
    ptr1 = fopen("problem03r.txt", "r");//reinitializing pointer from starting
    ptr2 = fopen("problem03w.txt", "a");//appending same text again
    while(1){
        ch = fgetc(ptr1);
        if(ch==EOF){
            break;
        }else{
            fprintf(ptr2, "%c", ch);
            printf("%c", ch);
        }
    }
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}