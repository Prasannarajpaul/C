#include<stdio.h>

typedef struct Date
{
    int mm;
    int dd;
    int yyyy;
} Date;

int compare(Date d1, Date d2){
    if(d1.yyyy==d2.yyyy){
        if(d1.mm==d2.mm){
            if(d1.dd==d2.dd){
                return 0;
            }else if(d1.dd>d2.dd){
                return 1;
            }else{
                return 0;
            }
        }else if(d1.mm>d2.mm){
            return 1;
        }else{
            return -1;
        }
    }else if(d1.yyyy>d2.yyyy){
        return 1;
    }else{
        return -1;
    }
}
int main(){
    Date d1 = {27, 9, 2000};
    Date d2 = {9, 12, 2002};
    
    int value = compare(d1, d2);

    if(!value){                //we know 0 means false and any other is true. ! make reverse
        printf("Both are same dates");
    }else if(value>0){
        printf("Date 2 is greater");
    }else{
        printf("Date 1 is greater");
    }


    
    return 0;
}