#include <stdio.h>
#include <stdlib.h>
#define TAM 4

/*1.	Escribir un programa que lea diez números naturales, los guarde
en un vector y a continuación los imprima en orden inverso al de su entrada.
A continuación calculará la media, la moda y la desviación estándar del
conjunto de números. El programa deberá ejecutarse cíclicamente hasta que
la persona usuaria decida finalizar la aplicación.*/
void solicitarDatos(int vector [TAM]);

int main()
{
    int vectorNaturales[TAM];
    solicitarDatos(vectorNaturales);
    return 0;
}
void solicitarDatos(int vector [TAM])
{
    int i = 0;
    for(i=0; i<TAM; i++)
    {
        printf("\nIntrodue el dato %d: ",i);
        scanf("%d", &vector[i]);
    }
}
