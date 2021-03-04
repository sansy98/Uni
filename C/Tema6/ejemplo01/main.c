#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int main()
{
    int vector [5];
    char letras[] = {'w','5','o'};

    /*printf("\nEl segundo elemento del primer vector %d", vector[1]);
    printf("\nEl tercer elemento del segundo vector %c", letras[2]);
    printf("\nME salgo de rango en segundo vector %c", letras[3]);

    printf("\nIntroduce la posición segunda del primer vector: ");
    scanf("%d", &vector[1]);
    fflush(stdin);
    printf("\nIntroduce la posición delo tercer elemento del segundo vector: ");
    scanf("%c", &letras[2]);

    printf("\nEl segundo elemento del primer vector %d", vector[1]);
    printf("\nEl tercer elemento del segundo vector %c", letras[2]);


    int i = 0;
    int cienNumeros [TAM];
    for (i = 0; i<TAM; i++)
    {
        cienNumeros[i] = rand()%(5+i);
    }
    for (i=0; i<TAM; i++)
    {
        printf("\nEl valor de la posición %d es %d", i, cienNumeros[i]);
    }*/

    printf("\nTamaño del primer vector de int: %d",sizeof(vector));
    printf("\nTamaño del segundo vector de char: %d",sizeof(letras));

    return 0;
}
