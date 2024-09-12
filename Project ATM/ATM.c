#include<stdio.h>
#include<stdlib.h>

void Credit();
void Debit();
void Check_Balance();

int main(){
    int input;
    while(1){
        printf("Available Options\n1.Credit\n2.Debit\n3.Check Balance\n4.Exit\nEnter your Choice: ");
        scanf("%d", &input);
        switch (input)
        {
        case 1: Credit();
                break;
        case 2: Debit();
                break;
        case 3: Check_Balance();
                break;
        case 4: printf("Thank You, Please Vist Again");
                exit(1);
                break;
        
        default:printf("None of the Options selected\nSession Ended\n");
                printf("Thank You, Please Vist Again");
                exit(1);
                break;
        }
        
    }

    return 0;
}

void Credit(){
    FILE *ptr1, *ptr2;
    ptr1 = fopen("money.txt", "r");
    if(ptr1 == NULL){
        printf("The file does not exists\n");
    }else{     
    int num1, num2;
    fscanf(ptr1, "%d", &num1);
    printf("Enter Amount to Credit: ");
    scanf("%d", &num2);
    num1+=num2;
    ptr2 = fopen("money.txt", "w");
    fprintf(ptr2, "%d", num1);
    fclose(ptr2);
    fclose(ptr1);
    }
}

void Debit(){
    FILE *ptr1, *ptr2;
    ptr1 = fopen("money.txt", "r");
    if(ptr1 == NULL){
        printf("The file does not exists\n");
    }else{     
        int num1, num2;
        fscanf(ptr1, "%d", &num1);
        printf("Enter Amount to Debit: ");
        scanf("%d", &num2);
        if(num1<num2){
            printf("Insufficient Balance\n");
        }else{
            num1+=num2;
            ptr2 = fopen("money.txt", "w");
            fprintf(ptr2, "%d", num2);
        fclose(ptr2);
        }
    }
    fclose(ptr1);
}

void Check_Balance(){
    FILE *ptr;
    ptr = fopen("money.txt", "r");
    if(ptr == NULL){
        printf("The file does not exists\n");
    }else{          
    int num;
    fscanf(ptr, "%d", &num);
    printf("Available Balance is : %d\n", num);
    }

    fclose(ptr);
}
