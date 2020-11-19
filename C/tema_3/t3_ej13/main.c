#include <stdio.h>
#include <stdlib.h>

int main()
{
    float res = 1;
    int i = 1;
    int fact = 1;
    int num = 0;
    int c = 1;
    int cnt = 0;
    printf("Introduce un numero entero positivo: ");
    scanf("%d", &num);
    for(i; i != num; i++)
    {
        fact = 1;
        for (c; c <= i; c++)
        {
            fact *= c;
        }
        res += 1/fact;
    }
    printf("El resultado es %.2f", res);
    return 0;
}
