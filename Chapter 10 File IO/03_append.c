#include<stdio.h>

int main(){
    FILE *fptr;
    //Instead of emptying and writing from the start, we can use append. which appends the new content at last
    fptr = fopen("prasanna.txt", "a");//leaves the old content and starts writing new content
    int num = 543;
    fprintf(fptr, "%d", num);//It appends 543 into prasanna.txt
    fclose(fptr);

    //append will add the content at last where you left the cursor while saving the file
    return 0;
}