#include <stdio.h>
#include <stdlib.h>
#define TAM 4

/*1.	Escribir un programa que lea diez n�meros naturales, los guarde
en un vector y a continuaci�n los imprima en orden inverso al de su entrada.
A continuaci�n calcular� la media, la moda y la desviaci�n est�ndar del
conjunto de n�meros. El programa deber� ejecutarse c�clicamente hasta que
la persona usuaria decida finalizar la aplicaci�n.*/
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
