#include<stdio.h>

int main(){
    int number1 = 12345;
    int number2 = 1197465;
    printf("The value of number1%97 is %d\n", number1%97);//Not divisible by 97 as remainder is not 0
    printf("The value of number2%97 is %d", number2%97);  //divisible by 97 as remainder is 0
    return 0;
}