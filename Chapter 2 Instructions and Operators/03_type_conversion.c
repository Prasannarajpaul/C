#include<stdio.h>

int main(){
    int a = 9;
    int b = 2;
    float c = 9/2;
    printf("The value of a/b is %f", c);//gives 4.000000 because int/int gives int i.e  9/2=4 and it converts result (4) to float (4.000000)
    /*
    An Arithmetic operation between
        int and int    -> int
        int and float  -> float
        float and float-> float
    */
    
   // In programming, type compatibility is crucial.
   // For int a = 3.5; the float 3.5 is demoted 3, losing the fractionl part because a is an integer
   // For float b = 4; the integer 4 is promoted to 4.0 matching the float type of b and retaining precision

   //Answer the code
   //int a = 3.0/9; value of k? and why?
    return 0;
}