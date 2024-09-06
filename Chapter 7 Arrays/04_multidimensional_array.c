#include<stdio.h>

int main(){
    //2D array
    int arr[2][2] = {   {1, 4},
                        {2, 3}  };
    //The above is a 2 rows 2 cloumns array which looks like
    // 1    4
    // 2    3
    //This can be accessed like
    //arr[0][0] arr[0][1]
    //arr[1][0] arr[1][1]

    //using for loop
    for(int i=0; i<2; i++){//for rows
        for(int j=0; j<2; j++){//for columns
            printf("%d ", arr[i][j]);
        }
        printf("\n");//for new line
    }

    //Storage in memory be like
    // normal array[3] is stored as
    // array[0]-->62320
    // array[1]-->62324
    // array[3]-->62328
    //same like above
    //A 2d array like array[2][2] is stored as
    //array[0][0]-->623420
    //array[0][1]-->623424
    //array[1][0]-->623428
    //array[1][1]-->623432

    return 0;
}