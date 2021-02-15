#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 0, num2 = 0, sum = 0;
    printf("Introduce un numero: ");
    scanf("%d",&num1);
    printf("\nIntroduce otro numero: ");
    scanf("%d",&num2);
    if (num1 > 0 && num2 < 0)
    {
        printf("\n");
        for (num1; num1 <= num2; num1++)
        {
            printf("%d ",num1);
            if (num1 % 4 == 0)
            {
                sum += num1;
            }
        }
        printf("\nLa suma de los numeros multiplos de 4 que se encuentran entre los numeros introducidos es: %d",sum);
    }
    else
    {
        printf("\nERROR: El primer numero debe ser mayor que cero y el segundo menor que cero");
    }
    return 0;
}