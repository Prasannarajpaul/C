#include<stdio.h>

int main(){
    /*
    Try: Write a program to find grade of a student given his marks based on below:
        90 - 100 => A
        80 - 90  => B
        70 - 80  => C
        60 - 70  => D
        50 - 60  => E
            <50  => F
    */
    int marks;
    char grade;
    printf("Enter marks: ");
    scanf("%d", &marks);

    //using if-else ladder
    if(marks<=100 && marks>=90){
        grade = 'A';
    }
    else if(marks<90 && marks>=80){
        grade = 'B';
    }
    else if(marks<80 && marks>=70){
        grade = 'C';
    }
    else if(marks<70 && marks>=60){
        grade = 'D';
    }
    else if(marks<60 && marks>=50){
        grade = 'E';
    }
    else{
        grade = 'F';
    }
    printf("Grade is %c\n", grade);

    //using switch-case
    switch (marks / 10) {
        case 10:  // For marks 100 Since, no break it goes to next case
        case 9:   // For marks 90-99
            grade = 'A';
            break;
        case 8:   // For marks 80-89
            grade = 'B';
            break;
        case 7:   // For marks 70-79
            grade = 'C';
            break;
        case 6:   // For marks 60-69
            grade = 'D';
            break;
        case 5:   // For marks 50-59
            grade = 'E';
            break;
        default:  // For marks less than 50
            grade = 'F';
            break;
    }

    printf("Grade is %c\n", grade);

    return 0;
}