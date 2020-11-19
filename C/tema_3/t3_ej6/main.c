#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 0, num2 = 0, x = 0;
    printf("Introduce un numero: ");
    scanf("%d",&num1);
    printf("\nIntroduce un numero mas grande: ");
    scanf("%d",&num2);
    printf("\n");
    x = num1;
    for (num1; num1 <= num2; num1++)
    {
        printf("%d ",num1);
    }
    num1 = x;
    printf("\n");
    while (num1 <= num2)
    {
        printf("%d ",num1);
        num1++;
    }
    num1 = x;
    printf("\n");
    do
    {
        printf("%d ",num1);
        num1++;
    } while (num1 <= num2);
    return 0;
}
