#include<stdio.h>

void printArray(int a[], int n);
void reverse(int a[], int n);

void printArray(int a[], int n){
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);      
    }
    printf("\n");
}

void reverse(int a[], int n){
    int temp;
    for(int i=0; i<n/2; i++){
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    printArray(arr, 5);
    reverse(arr, 5);
    printArray(arr, 5);
    return 0;
}