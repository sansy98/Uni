#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void cargarMatriz(int matLocal[TAM][TAM]);
void mostrarMatriz(int matLocal[TAM][TAM]);
void completarMatriz(int matLocal[TAM][TAM], int matAument[TAM+1][TAM+1]);
void mostrarMatrizAmpliada(int matLocal[TAM+1][TAM+1]);

int main()
{
    int matMain[TAM][TAM], matAmpliadaMain[TAM+1][TAM+1];
    cargarMatriz(matMain);
    mostrarMatriz(matMain);
    completarMatriz(matMain, matAmpliadaMain);
    mostrarMatrizAmpliada(matAmpliadaMain);



    return 0;
}

void cargarMatriz(int matLocal[TAM][TAM])
{
    int i = 0, j = 0;
    for (i=0; i<TAM; i++)
    {
        for (j=0; j<TAM; j++)
        {
            matLocal[i][j] = rand()%11;
        }
    }
}

void mostrarMatriz(int matLocal[TAM][TAM])
{
    int i = 0, j = 0;
    for (i=0; i<TAM; i++)
    {
        for (j=0; j<TAM; j++)
        {
            printf("\t%d",matLocal[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
}

void completarMatriz(int matLocal[TAM][TAM], int matAument[TAM+1][TAM+1])
{
    int i = 0, j = 0;
    for (i=0; i<TAM; i++)
    {
        for (j=0; j<TAM; j++)
        {
            matAument[i][j] = matLocal[i][j];
            matAument[TAM][j] += matLocal[i][j];
            matAument[i][TAM] += matLocal[i][j];
        }
    }
}
void mostrarMatrizAmpliada(int matLocal[TAM+1][TAM+1])
{
    int i = 0, j = 0;
    for (i=0; i<=TAM; i++)
    {
        for (j=0; j<=TAM; j++)
        {
            printf("\t%d",matLocal[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
}
