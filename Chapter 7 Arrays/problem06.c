#include<stdio.h>

int count(int a[], int n);

int count(int a[], int n){
    int no_of_positives=0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            no_of_positives++;
        }

    }
    return no_of_positives;
}

int main(){
    int arr[5] = {40, -10, 30, -20, 50};
    printf("The number of Positive Integers is %d\n", count(arr, 5));
    
    return 0;
}