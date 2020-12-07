#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float hiperbSin(float);

int main()
{
    float num = 0;
    printf("Introduce un valor: ");
    scanf("%f",&num);
    printf("\nSu sinh es: %f", hiperbSin(num));
    return 0;
}

float hiperbSin(float x)
{
    float res = (exp(x) - exp(-x))/2;
    return res;
}
