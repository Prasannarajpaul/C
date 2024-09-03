#include<stdio.h>

int main(){
    int age = 60;

    if(age>=60){
        printf("You are senior citizen and you can drive");
    }
    else if(age>40){
        printf("You are elder citizen and you can drive");
    }
    else if(age>18){
        printf("You can drive");
    }
    else{
        printf("You cannot drive");
    }
    /*
    1. Using if-else if-else reduces indents
    2. The last "else" is optional
    3. There can be any number of "else-if"
    4. Last else is executed only if all conditions fail
    */
    return 0;
}
