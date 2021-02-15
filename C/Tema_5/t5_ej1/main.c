#include <stdio.h>
#include <stdlib.h>

int isFirstSmaller(float, float);

int main()
{
    float num1 = 0, num2 = 0;
    printf("Introduce un numero: ");
    scanf("%f",&num1);
    printf("\nIntroduce otro numero: ");
    scanf("%f",&num2);
    if (isFirstSmaller(num1,num2) == 1)
    {
        printf("\nTrue");
    }
    else
    {
        printf("\nFalse");
    }
    return 0;
}

int isFirstSmaller(float x1, float x2)
{
    if (x1 < x2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
