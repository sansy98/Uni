#include <stdio.h>
#include <stdlib.h>

int factorial(int);

void main(void)
{
    int x = 4;
    printf("Introduzca un numero: ");
    scanf("%d",&x);
    printf("Su factorial es: %d",factorial(x));
}

int factorial(int x)
{
    int i = 1, res = 1;
    for (i; i<=x; i++)
    {
        res *= i;
    }
    return res;
}
