#include<stdio.h>

int main(){
    //Any program like .c will first get compiled and will be stored in RAM(Random Access Memory- which is volatile)
    //And then it executes (.exe file will be temporary and after running it will be removed from RAM)

    //A file is data stored in a storage device
    //A c program can talk to the file by reading content from it and writing content in it
    //C program -->Write-->File
    //C program <--Read <--File

    //A "File" is a structure which needs to be created for opening the file
    //A file pointer is a pointer to this structure of the file
    //A File pointer can be created as follows

    FILE *ptr;//File data type "FILE"
    //fopen syntax -> fopen("filename.txt", "mode");
    ptr = fopen("prasanna.txt", "r");//prasanna.txt has "12 34" in it

    if(ptr == NULL){//means the pointer is null and it doesnt have any address. It happens if prasanna.txt is not found
        printf("The file does not exists\n");
    }else{          //if else is not there, it will point to random address and give random output
    int num;
    //fscanf() is file counterpart of scanf()
    fscanf(ptr, "%d", &num);//this will make the pointer to start in the prasanna.txt
    printf("%d\n", num);//12

    fscanf(ptr, "%d", &num);//the pointer will move to next addrress
    printf("%d\n", num);//34
    }

    fclose(ptr);//Its a good practise to close the file.
    //It tells the compiler that we are done working with this file and the associated resources could be freed


    //All modes
    //"r"   ->  open for reading
    //"rb"  ->  open for reading in binary
    //"w"   ->  open for writing  (if the file exists, the contents will be overwritten)
    //"wb"  ->  open for writing in binary
    //"a"   ->  open for append   (if the file does not exists, it will be created

    //There are two types of Files primarily
    //1. Text files (.txt, .c)
    //2. Binary files (.jpg, .dat)
    return 0;
}