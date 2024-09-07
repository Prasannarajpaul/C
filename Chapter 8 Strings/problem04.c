#include<stdio.h>

char* slice(char arr[], int n, int m);

char* slice(char arr[], int n, int m){
    char *ptr1 = &arr[n];
    char *ptr2 = &arr[m];

    arr = ptr1;
    arr[m] = '\0';
    return arr;
}
int main(){
    char str[] = "Harry is a Good Boy";
    int n, m;
    n=1;m=3;
    // scanf("%d %d", &n, &m);

    printf("%s", slice(str, n, m));

    return 0;
}