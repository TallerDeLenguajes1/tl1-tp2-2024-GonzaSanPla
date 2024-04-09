#include <stdlib.h>
#include<stdio.h>

#define N 5
#define M 7

int main(){
    int i, j;
    int mt[N][M],*p=&mt[0][0];
   
    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
            *p = 1+rand()%100;
            printf("%d ", *p);
            p++;
        }  
        printf("\n");
    }
    printf("%s", type(mt));
}

