#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int exp = 0, i = 1;
    float base = 0;
    printf("Introduce un numero real: ");
    scanf("%f",&base);
    printf("\nIntroduce un exponente entero: ");
    scanf("%d",&exp);
    printf("\n");
    for (i; i <= exp; i++)
    {
        printf("%.2f ", pow(base,i));
    }
    return 0;
}
