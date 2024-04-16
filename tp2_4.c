#include<stdio.h>
#include <stdlib.h>
#include <time.h>

struct  {
    int velocidad;//entre 1 y 3 GHz
    int anio;//entre 2015 y 2023
    int cantidad;//entre 1 y 8
    char tipo_cpu[10]; //valores del arreglo tipos
} typedef Compu;

Compu cargarCompu();
void mostrarCompu(Compu computadora);
void pcVieja(Compu *computadora);
void pcVeloz(Compu *computadora);

int main(){

    Compu lista[5];

    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        lista[i]=cargarCompu();
        printf("\n\n---------------Computadora N%d---------------",i+1);
        mostrarCompu(lista[i]);
    }
    
    pcVieja(lista);
    pcVeloz(lista);

    return(0);
}

Compu cargarCompu(){
    Compu computadora;
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    int tipoCpu=rand()%6;
    int i;

    computadora.velocidad=1+rand()%3;
    computadora.anio=2015+rand()%8;
    computadora.cantidad=1+rand()%9;

    for (i = 0; tipos[tipoCpu][i]!='\0'; i++)
    {
        computadora.tipo_cpu[i]=tipos[tipoCpu][i];
    }
    
    return computadora;

}

void mostrarCompu(Compu computadora)
{
    printf("\n La velocidad de la computadora es de: %d GHz",computadora.velocidad);
    printf("\n El anio de la computadora es de: %d",computadora.anio);
    printf("\n La cantidad de nucleos de la computadora es de: %d ",computadora.cantidad);
    printf("\n El cpu de la computadora es de:");
    for (int i = 0;computadora.tipo_cpu[i]!='\0'; i++)
    {
         printf("%c",computadora.tipo_cpu[i]);
    }

}
void pcVieja(Compu *computadora)
{
    int vieja=2050,masVieja=0;

    for (int i = 0; i < 5; i++)
    {
       if (computadora[i].anio<vieja)
       {
            vieja=computadora[i].anio;
            masVieja=i;
       }
       
    }
    printf("\n\n---------------La computadora mas vieja es la N%d---------------",masVieja+1);
    mostrarCompu(computadora[masVieja]);
}

void pcVeloz(Compu *computadora)
{
    int veloz=0,masRapida=0;

    for (int i = 0; i < 5; i++)
    {
       if (computadora[i].velocidad>veloz)
       {
            veloz=computadora[i].velocidad;
            masRapida=i;
       }
       
    }
    printf("\n\n---------------La computadora mas rapida es la N%d---------------",masRapida+1);
    mostrarCompu(computadora[masRapida]);
}