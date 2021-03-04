#include <stdio.h>
#include <stdlib.h>

#define LIN_HOR_DOBLE 205

void dibujarLineaHorizontalSuperior(int numeroCuadros, int longArista)
{
    int i = 0, j = 0;
    printf("%c",201);
    for (i=0; i<numeroCuadros; i++)
    {
        for (j=0; j<longArista; j++)
        {
            printf("%c",LIN_HOR_DOBLE);
        }
        if (i == (numeroCuadros-1)) printf("%c",187);
        else printf("%c",203);
    }
    printf("\n");
}

void dibujarLineaHorizontalHueca(int numeroCuadros, int longArista)
{
    int i = 0, j = 0;
    printf("%c",186);
    for (i=0; i<numeroCuadros; i++)
    {
        for (j=0; j<longArista; j++)
        {
            printf(" ");
        }
        printf("%c",186);
    }
    printf("\n");
}



void dibujarLineaHorizontalCentral(int numeroCuadros, int longArista)
{
    int i = 0, j = 0;
    printf("%c",204);
    for (i=0; i<numeroCuadros; i++)
    {
        for (j=0; j<longArista; j++)
        {
            printf("%c",LIN_HOR_DOBLE);
        }
        if (i == (numeroCuadros-1)) printf("%c",185);
        else printf("%c",206);
    }
    printf("\n");
}

void dibujarLineaHorizontalInferior(int numeroCuadros, int longArista)
{
    int i = 0, j = 0;
    printf("%c",200);
    for (i=0; i<numeroCuadros; i++)
    {
        for (j=0; j<longArista; j++)
        {
            printf("%c",LIN_HOR_DOBLE);
        }
        if (i == (numeroCuadros-1)) printf("%c",188);
        else printf("%c",202);
    }
    printf("\n");
}

int main()
{
    dibujarLineaHorizontalSuperior(4,10);

    dibujarLineaHorizontalHueca(4,10);
    dibujarLineaHorizontalHueca(4,10);
    dibujarLineaHorizontalHueca(4,10);
    dibujarLineaHorizontalCentral (4,10);

    dibujarLineaHorizontalHueca(4,10);
    dibujarLineaHorizontalHueca(4,10);
    dibujarLineaHorizontalHueca(4,10);
    dibujarLineaHorizontalCentral (4,10);

    dibujarLineaHorizontalHueca(4,10);
    dibujarLineaHorizontalHueca(4,10);
    dibujarLineaHorizontalHueca(4,10);
    dibujarLineaHorizontalCentral (4,10);

    dibujarLineaHorizontalHueca(4,10);
    dibujarLineaHorizontalHueca(4,10);
    dibujarLineaHorizontalHueca(4,10);
    dibujarLineaHorizontalCentral (4,10);

    dibujarLineaHorizontalHueca(4,10);
    dibujarLineaHorizontalHueca(4,10);
    dibujarLineaHorizontalHueca(4,10);
    dibujarLineaHorizontalInferior (4,10);



    return 0;
}
