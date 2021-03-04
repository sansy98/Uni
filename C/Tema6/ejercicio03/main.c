#include <stdio.h>
#include <stdlib.h>
#define TAM 4

void completarMatriz (int matOriginal[TAM][TAM], int matAmpliada[TAM+1][TAM+1])
{
    int i = 0, j= 0;
    for (i=0;i<TAM;i++)
    {
        for(j=0; j<TAM; j++)
        {
            matAmpliada[i][TAM] += matOriginal[i][j];
            matAmpliada[TAM][j] += matOriginal[i][j];
            matAmpliada[i][j] = matOriginal[i][j];
        }
    }
}

void rellenarMatriz(int matriz[TAM][TAM])
{
    int i = 0, j = 0;
    for (i=0; i<TAM; i++)
    {
        for (j=0; j<TAM; j++)
        {
            matriz[i][j] = rand()%21-10; //GEnera número entre 10 y 10
        }
    }
}

void mostrarMatriz(int matriz[TAM][TAM])
{
    int i = 0, j = 0;
    for (i=0; i<TAM; i++)
    {
        for (j=0; j<TAM; j++)
        {
            printf("\t%d",matriz[i][j]);
        }
        printf("\n");
    }
}
void mostrarMatriz2(int matriz[TAM+1][TAM+1])
{
    int i = 0, j = 0;
    for (i=0; i<TAM+1; i++)
    {
        for (j=0; j<TAM+1; j++)
        {
            printf("\t%d",matriz[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    int m[TAM][TAM], m2[TAM+1][TAM+1]={0};
    rellenarMatriz(m);
    completarMatriz(m,m2);
    mostrarMatriz(m);
    mostrarMatriz2(m2);

    return 0;
}
