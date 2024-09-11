#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("prasanna.txt", "w");//empty the prasanna.txt and starts writing
    int num = 432;
    //fprintf() is file counterpart of printf()
    fprintf(fptr, "%d", num);//It writes 432 into prasanna.txt

    fclose(fptr);

    return 0;
}