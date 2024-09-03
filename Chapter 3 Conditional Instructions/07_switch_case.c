#include<stdio.h>

int main(){
    int a;
    printf("Enter a: ");
    scanf("%d", &a);
    switch(a){
        case 1: printf("You entered 1");
                break;
        case 2: printf("You entered 2");
                break;
        case 3: printf("You entered 3");
                break;
        case 4: printf("You entered 4");
                break;
        case 5: printf("You entered 5");
                break;
        default: printf("No case for you input");
    }
    /*
    1. We can uses switch-case statements even by writing cases in any order of our choice(not necessary ascending)
    2. char values are allowed as they can be easily evaluated to an integer
    3. A switch can occur within another but in practice this is rarely done
    */
    return 0;
}