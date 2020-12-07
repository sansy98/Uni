#include <stdio.h>
#include <stdlib.h>

void drawLine(int, char, char);
void drawSquare(int, char, char);

int main()
{
    int longitud = 0, emptyCheck = 0;
    char caracterE = '/0', caracterC = '/0';
    printf("Introduce un char: ");
    scanf("%c",&caracterE);
    printf("\nIntroduce la longitud: ");
    scanf("%d",&longitud);
    printf("\nQuieres que sea hueco? No\(0\)  Si\(1\):  ");
    scanf("%d",&emptyCheck);
    if (emptyCheck == 0)
    {
        printf("\nIntroduce el caracter central: ");
        scanf(" %c",&caracterC);
    }
    else
    {
        caracterC = ' ';
    }
    drawSquare(longitud, caracterE, caracterC);
    return 0;
}

void drawLine(int longitudLocal, char caracterExtremoLocal, char caracterCentralLocal)
{
    int i = 0;
    printf("\n");
    printf("%c",caracterExtremoLocal);
    for(i=2; i<longitudLocal; i++)
    {
        printf("%c",caracterCentralLocal);
    }
    printf("%c",caracterExtremoLocal);
}

void drawSquare(int longitudCuadrado, char caracterExtremo, char caracterCentral)
{
    int i = 0;
    drawLine(longitudCuadrado, caracterExtremo, caracterExtremo);
    for(i=2; i<longitudCuadrado; i++)
    {
        drawLine(longitudCuadrado, caracterExtremo, caracterCentral);
    }
    drawLine(longitudCuadrado, caracterExtremo, caracterExtremo);
}
