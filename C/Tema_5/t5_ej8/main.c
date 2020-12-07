#include <stdio.h>
#include <stdlib.h>

void dividers(int);

void main(void)
{
    int x = 0;
    printf("Introduce un numero: ");
    scanf("%d",&x);
    printf("\n");
    dividers(x);
}

void dividers(int x)
{
    int i = x;
    for (i; i>0; i--)
    {
        if (x%i == 0)
        {
            printf("%d ",i);
        }
    }
}
