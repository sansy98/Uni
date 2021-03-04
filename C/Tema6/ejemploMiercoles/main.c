#include <stdio.h>
#include <stdlib.h>

#define TAMANYO 3

void mostrarContenidoVector( int vectorLocal[TAMANYO], int dimensionVector);
int devolverPosicionElementoMayorVector( int vectorLocal[TAMANYO], int dimensionVector);


int main()
{
    int miVector [TAMANYO];
    int i = 0;

    //Llenado del vector desde teclado
    for (i=0; i<TAMANYO; i++)
    {
        printf("\nIntroduce el valor de la posición %d:", i);
        scanf("%d", &miVector[i]);
    }

    //Mostrar contenido del vector
    /*printf("\n\nEl contenido del vector es: \n");
    for (i=0; i<TAMANYO; i++)
    {
        printf("\t%d", miVector[i]);
    }*/

    mostrarContenidoVector(miVector,TAMANYO);

    //Calcular el número mayor del vector
    /*int posicionNumeroMayor = 0;
    for (i=1; i<TAMANYO; i++)
    {
        if (miVector[i]>miVector[posicionNumeroMayor])
        {
            posicionNumeroMayor = i;
        }
    }
    printf("\nEl mayor número del vector es %d",miVector[posicionNumeroMayor]);*/

    printf("\nEl mayor número del vector es %d",miVector[devolverPosicionElementoMayorVector(miVector,TAMANYO)]);

    //Calcular el número menor del vector
    int posicionNumeroMenor = 0;
    for (i=1; i<TAMANYO; i++)
    {
        if (miVector[i]<miVector[posicionNumeroMenor]) posicionNumeroMenor = i;
    }
    printf("\nEl menor número del vector es %d",miVector[posicionNumeroMenor]);


    return 0;
}

void mostrarContenidoVector( int vectorLocal[TAMANYO], int dimensionVector)
{
    int i = 0;
    printf("\n\nEl contenido del vector es: \n");
    for (i=0; i<dimensionVector; i++)
    {
        printf("\t%d", vectorLocal[i]);
    }

}
int devolverPosicionElementoMayorVector( int vectorLocal[TAMANYO], int dimensionVector)
{
    int i  =  0, posicionNumeroMayor = 0;
    for (i=1; i<dimensionVector; i++)
    {
        if (vectorLocal[i]>vectorLocal[posicionNumeroMayor])
        {
            posicionNumeroMayor = i;
        }
    }
    return posicionNumeroMayor;
}

