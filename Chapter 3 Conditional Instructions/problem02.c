#include<stdio.h>

int main(){
    //assume total marks for each subject as 100
    int max_marks = 100; // so, we can change max marks here
    int marks1, marks2, marks3;
    printf("Enter marks1: \n");
    scanf("%d", &marks1);
    printf("Enter marks2: \n");
    scanf("%d", &marks2);
    printf("Enter marks3: \n");
    scanf("%d", &marks3);

    printf("The marks are:\nSubject 1 - %d\nSubject 2 - %d\nSubject 3 - %d\n", marks1, marks2, marks3);
    int marks1_percentage = (marks1*100)/max_marks;
    int marks2_percentage = (marks2*100)/max_marks;
    int marks3_percentage = (marks3*100)/max_marks;

    int total_percentage = ((marks1+marks2+marks3)*100)/(3*max_marks);

    if(marks1_percentage<33 || marks2_percentage<33 || marks3_percentage<33){
        printf("You are failed due to less percentage in individual subject(s)");
    }
    else if(total_percentage<40){
        printf("You are failed due to less percentage in total");
    }
    else{
        printf("You passed!");
    }

    return 0;
}