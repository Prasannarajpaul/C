#include<stdio.h>

int main(){
    int x = 2;
    int y, z;
    y = z = 3;
    int k = 1;

    int e = 3*x/y-z+k;
    // (3*x)/y = (3*2)/3 = 6/3 = 2 (same priority so precedence left to right)
    // 2-z+k   =  2-3+1  = -1+1= 0 (same priority so precedence left to right)
    printf("The value of Expression 3*x/y-z+k is %d", e);
    return 0;
}