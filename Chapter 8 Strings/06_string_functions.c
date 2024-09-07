#include<stdio.h>
#include<string.h>//string functions header file

int main(){
    char st[] = "Harry";
    //strlen()--> length of string
    printf("%d\n", strlen(st));//strlen() excludes the null(\0) character

    //strcpy()--> copy the string
    char st1[30];
    strcpy(st1, st);//string st is copied to string st1
    printf("%s\n", st1);//Harry

    //strcat()--> concatenate the two string
    char st2[] = "Coder";
    strcat(st1, st2);//string st2 is added to st1
    printf("%s\n", st1);//st1 now have HarryCoder

    //strcmp()--> compare the two string, return 0 if both are same
    //A Negative Value if the first strings mismatching characters ASCII value is less than the second strings corresponding mismatching character, and a Positive value otherwise
    printf("%d\n",strcmp("far", "joke"));//Negative value -1
    printf("%d\n", strcmp("joke", "far"));//Positive value 1
    printf("%d\n", strcmp("Harry", "Harry"));// Harry is equal to Harry, it returns 0

    return 0;
}