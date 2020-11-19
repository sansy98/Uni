#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 0,num2 = 0;
    printf("Introduce un numero positivo o negativo: ");
    scanf("%d",&num1);
    printf("\nIntroduce otro numero positivo o negativo: ");
    scanf("%d",&num2);
    if (num1 >= 0 && num2 >= 0)
    {
        printf("\nLos dos numeros son positivos.");
    }
    else if (num1 < 0 && num2 < 0)
    {
        printf("\nNinguno de los numeros es positivo.");
    }
    else
    {
        printf("\nUno de los numeros es positivo.");
    }
    return 0;
}
