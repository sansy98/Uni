#include <stdio.h>
#include <stdlib.h>

void drawBlank(int);
void drawLine(char, int, int);
void drawTriangle(char, int);

int main()
{
    int altura = 0;
    char caracter = '/0';
    printf("Introduce la altura: ");
    scanf("%d",&altura);
    printf("\nIntroduce el caracter: ");
    scanf(" %c",&caracter);
    drawTriangle(caracter, altura);
    return 0;
}

void drawBlank(int blanks)
{
    for (blanks; blanks>0; blanks--)
    {
        printf(" ");
    }
}

void drawLine(char lCaracter, int h, int caracNum)
{
    drawBlank(h-1);
    for (caracNum; caracNum>0; caracNum--)
    {
        printf("%c",lCaracter);
    }
    drawBlank(h-1);
    printf("\n");
}

void drawTriangle(char lCaracter, int h)
{
    int caracNum = 1;
    for (h; h>0; h--)
    {
        drawLine(lCaracter, h, caracNum);
        caracNum += 2;
    }
}
