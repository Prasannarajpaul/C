#include<stdio.h>

int main(){
    // we can also take input directly
    char st1[50];
    scanf("%s", st1);//we didn't use &st1 as we know &st1 and st1 both gives address of the first element
    printf("%s", st1);

    /*
    Note: The string should be short enough to fit into the array
        scanf cannot be used to input multi-word strings with spaces
    */
    return 0;
}