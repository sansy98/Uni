#include <stdio.h>
#include <stdlib.h>

int drawLine(int);

int main()
{
    int num = 0;
    printf("Introduce un entero: ");
    scanf("%d",&num);
    drawLine(num);
    return 0;
}

int drawLine(int x)
{
    int i = 0;
    for (i; i<x; i++)
    {
        printf("*");
    }
    printf("\n");
    return 0;
}
