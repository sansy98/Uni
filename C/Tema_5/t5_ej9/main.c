#include <stdio.h>
#include <stdlib.h>

void commonDividers(int, int);

int main()
{
    int num1 = 0, num2 = 0;
    printf("Introduce un numero: ");
    scanf("%d",&num1);
    printf("\nIntroduce otro numero: ");
    scanf("%d",&num2);
    printf("\n");
    commonDividers(num1, num2);
    return 0;
}

void commonDividers(int x, int y)
{
    int i = 0;
    if (x > y)
    {
        i = x;
    }
    else
    {
        i = y;
    }
    for (i; i>0; i--)
    {
        if (x%i == 0 && y%i == 0)
        {
            printf("%d ", i);
        }
    }
}
