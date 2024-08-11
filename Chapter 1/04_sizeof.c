#include<stdio.h>

int main(){
    //The amount of memory can take vary depending on the system and compiler. However the most typical sizes of these data types on most platforms.
    //int : Usally 4 bytes (32 bits)
    //char : Always 1 byte (8 bits) as per C standard
    //float : Usally 4 bytes (32 bits)

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of float: %zu bytes\n", sizeof(float));    
    return 0;

    //.exe is executable for windows and created when we run the code in windows.
    //.exe will not be created in the mac and linux.

    //Keywords - reserved words
    //Internally reserved words, whose meaning is already known by the compiler.
    //32 keywords are available in C.
    //auto break case char const continue default do
    //double long return register short signed sizeof static
    //int else enum extern float for goto if
    //struct switch typedef union unsigned void volatile while

    //using any code editors (vscode), they change the color of the keywords

}