#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("problem05.txt", "r");
    int number1;
    fscanf(ptr, "%d", &number1);
    printf("%d\n", number1);//to find the number is read correct or not

    fclose(ptr);//cloasing file
    number1*=2;//number = number*2
    printf("%d\n", number1);

    //writing it into the file
    ptr = fopen("problem05.txt", "w");
    fprintf(ptr, "%d", number1);

    fclose(ptr);
    
    return 0;
}