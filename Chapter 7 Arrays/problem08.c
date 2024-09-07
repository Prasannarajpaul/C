#include<stdio.h>

int main(){
    int array[3][10];
    int n1, n2, n3;
    // printf("Enter n1: ");
    // scanf("%d",&n1);
    // printf("Enter n2: ");
    // scanf("%d",&n2);
    // printf("Enter n3: ");
    // scanf("%d",&n3);
    //Instead of the above we can take space separaetd values as input
    printf("Enter n1 n2 n3: ");
    scanf("%d %d %d", &n1, &n2, &n3);//input like 5 6 8
    
    
    
    int mul[] = {n1, n2, n3};
    
    for(int i=0;i<3;i++){
        for(int j=0; j<10; j++){
            array[i][j]=mul[i]*(j+1);
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0; j<10; j++){
            printf("The value of arr[%d][%d] is %d\n",i , j, array[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
}