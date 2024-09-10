#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("problem02.txt", "w");
    int num=7;

    for(int i=0;i<10;i++){
        fprintf(ptr, "%d %c %d %c %d", num, 'X', (i+1), '=', num*(i+1));//writes num X (i+1) = num*(i+1)
        fprintf(ptr, "%c", '\n');//for next line
    }

    fclose(ptr);
    return 0;
}