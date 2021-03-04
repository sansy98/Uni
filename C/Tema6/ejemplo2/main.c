#include <stdio.h>
#include <stdlib.h>

#define TAMANYO 4

int main()
{
    char arrayDeLetras [TAMANYO]; //Va de 0 a 9, caben 10


    //Llenar el vector
    int i = 0;
    printf("\nPor favor llena el vector: ");
    for (i=0; i<TAMANYO; i++)
    {
        printf("\n\tIntroduce el dato %d: ",i);
        scanf("%c", &arrayDeLetras[i]);
        fflush(stdin);
    }

    //Mostrar el vector
    printf("\nEl vector es: ");
    for (i=0; i<TAMANYO; i++)
    {
        printf("\t%c",arrayDeLetras[i]);
    }

    //Mostrar el mínimo
    int posicionMinimo = 0;
    for (i=0; i<TAMANYO; i++)
    {
        if (arrayDeLetras[i]<arrayDeLetras[posicionMinimo])
        {
            posicionMinimo = i;
        }
    }
    printf("\nEl char mínimo está en la posición %d y es %c",posicionMinimo,arrayDeLetras[posicionMinimo]);

    //Mostrar el máximo
    int posicionMaximo = 0;
    for (i=0; i<TAMANYO; i++)
    {
        if (arrayDeLetras[i]>arrayDeLetras[posicionMaximo]) posicionMaximo = i;
    }
    printf("\nEl char máximo está en la posición %d y es %c",posicionMaximo,arrayDeLetras[posicionMaximo]);


    return 0;
}
