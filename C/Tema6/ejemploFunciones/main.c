#include <stdio.h>
#include <stdlib.h>

#define LD 205
#define LS 196

void lineaHorizontalSimple(int longitud)
{
    int i = 0;
    char tipoLinea = LS;
    for (i=0; i<longitud; i++)
    {
        printf("\%c",tipoLinea);
    }
}
void lineasTotalesSimples(int numeroLineas, int longLinea)
{
    int i = 0;
    for(i=0; i<numeroLineas;i++)
    {
        lineaHorizontalSimple(longLinea);
    }
}

void lineaHorizontalDoble(int longitud)
{
    int i = 0;
    char tipoLinea = LD;
    for (i=0; i<longitud; i++)
    {
        printf("\%c",tipoLinea);
    }
}
void lineasTotalesDobles(int numeroLineas, int longLinea)
{
    int i = 0;
    for(i=0; i<numeroLineas;i++)
    {
        lineaHorizontalDoble(longLinea);
    }
}

void lineaGenerica(int longitud ,char tipoLinea)
{
    int i = 0;
    for (i=0; i<longitud; i++)
    {
        printf("\%c",tipoLinea);
    }
}
void lineasTotalesGenerica(int numeroLineas, int longLinea, char tipoL)
{
    int i = 0;
    for(i=0; i<numeroLineas;i++)
    {
        lineaGenerica(longLinea,tipoL);
    }
}

int main()
{
    int opcion = 0;
    printf("\nIntrodcue opcion: ");
    scanf("%d",&opcion);
    if (opcion == 1) lineasTotalesDobles(6, 9);
    else lineasTotalesSimples(6, 9);
       /* if (opcion == 1) lineasTotalesGenerica(6,9,LD);
    else lineasTotalesGenerica(6,9,LS);*/

    return 0;
}
