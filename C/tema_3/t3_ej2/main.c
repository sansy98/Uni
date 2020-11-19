#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 0,num2 = 0;
    printf("Introduce un numero: ");
    scanf("%d",&num1);
    printf("\nIntroduce otro numero: ");
    scanf("%d",&num2);
    if (num2%num1 == 0)
    {
        printf("\n%d es multiplo de %d",num1,num2);
    }
    return 0;
}
