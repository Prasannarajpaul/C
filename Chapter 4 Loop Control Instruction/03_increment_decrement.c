#include<stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d\n", i);

    printf("Increment\n");
    i++; // same as i = i + 1
    printf("The value of i is %d\n", i);

    ++i;
    printf("The value of i is %d\n", i);

    /*
    i++ and ++i are different
    i++ prints and increments
    ++i increments and prints
    Below to understand better
    */
    printf("Difference\n");
    printf("The value of i is %d\n", i++);//7 (it prints i i.e 7 value and then increments i.e 7+1)
    printf("The value of i is %d\n", i);  //8 (is incremented in previous step)
    printf("The value of i is %d\n", ++i);//9  (it incremented i i.e 8+1 and prints i i.e 9)

    printf("Decrement\n");
    i--; // same as i = i + 1
    printf("The value of i is %d\n", i);

    --i;
    printf("The value of i is %d\n", i);

    /*
    i-- and --i are different
    i-- prints and increments
    --i increments and prints
    */

    /*
    Compound assignment operators
    +=
    -=
    /=
    *=
    %=
    */
    printf("Comound assignment operator\n");

    i+=2; // same as i = i + 2;
    printf("The value of i is %d\n", i);

    i-=2; // same as i = i - 2;
    printf("The value of i is %d\n", i);

    i*=2; // same as i = i * 2;
    printf("The value of i is %d\n", i);

    i/=2; // same as i = i / 2;
    printf("The value of i is %d\n", i);

    i%=2; // same as i = i % 2;
    printf("The value of i is %d\n", i);

    /*
    <<= Left shift assignment
    >>= Right shift assignment
    &= Bitwise AND assignment
    |= Bitwise OR assignment
    ^= Bitwise XOR assignment

    In Later Chapters we will come up with the above assignment operators
    */
    
    return 0;
}