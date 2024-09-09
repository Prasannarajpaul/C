#include<stdio.h>

typedef struct vector
{
    int i;
    int j;
} vector;

void sum(vector v1, vector v2);

void sum(vector v1, vector v2){
    printf("The sum of vectors %di+%dj and %di+%dj is %di+%dj", v1.i, v1.j, v2.i, v2.j, v1.i+v2.i, v1.j+v2.j);
}

vector sumr(vector v1, vector v2){
    vector v= {v1.i+v2.i, v1.j+v2.j};
    return v;
}

int main(){
    vector v1 = {3, 4};
    vector v2 = {5, 6};
    printf("The value of vector is %di+%dj\n", v1.i, v1.j);
    printf("The value of vector is %di+%dj\n", v2.i, v2.j);
    sum(v1, v2);

    //using return 
    printf("The sum of vectors %di+%dj and %di+%dj is %di+%dj\n", v1.i, v1.j, v2.i, v2.j,sumr(v1, v2));
    //sumr(v1, v2) return a vector of {8, 10}
    //which will auto asign to %d like
    printf("%di+%dj", v1);
    printf("%di+%dj", v2);
    //As our coding concepts increase, we write more short forms which reduce coding lines
    
    return 0;
}