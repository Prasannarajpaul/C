#include<stdio.h>

int main(){
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if((year%4==0 && year%100!=0)|| year%400==0){
        printf("This is a Leap year");
    }
    else{
        printf("This is not a Leap year");
    }
    return 0;
}