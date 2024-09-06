#include<stdio.h>

int main(){
    int marks[3] = {80, 90, 70};//initializing while declaration
    //1 intger = 4 bytes
    //size of array is 3 means 3 items, data type is int so
    //array size = elements * data type -> 3*4 = 12
    //if array address for marks[0] is 62302
    //then marks[1] address will be 62306
    //marks[2] address will be 62310, because array will store the items in continous memory blocks

    //using for loop to iterate through each element in the array
    for(int i=0;i<3;i++){
        printf("The marks of Student %d is %d\n",i+1 , marks[i]);
    }
    return 0;
}