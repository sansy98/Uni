#include <stdio.h>
#include <stdlib.h>

int square(int);

void main(void)
{
    int x = 4;
    printf("Introduzca un numero: ");
    scanf("%d",&x);
    printf("\nSu factorial es: %d",square(x));
}

int square(int x)
{
    x *= x;
    return x;
}
