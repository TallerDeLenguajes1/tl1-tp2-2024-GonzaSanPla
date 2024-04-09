// codigo a completar
#include<stdio.h>
#include <stdlib.h>

#define N 20

int main(){

    int i;
    int vt[N],*p=vt;
    for(int i = 0;i<N; i++)
    {
        *p=1+rand()%100;
        printf("%.d ", *p);
        p= p++;
    }
}
