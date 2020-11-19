#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 0, num2 = 0, res = 0;
    printf("Introduce un numero: ");
    scanf("%d",&num1);
    printf("\nAhora introduce un numero mayor: ");
    scanf("%d",&num2);
    if (num1 > 0 && num2 > num1 && num2 > 0)
    {
        for (num1; num1 <= num2; num1++)
        {
            res += num1;
        }
        printf("\nLa suma de los digitos entre ambos numeros es: %d",res);
    }
    else
    {
        printf("\nHas introducido un numero invalido.");
    }
    return 0;
}
