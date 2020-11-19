#include <stdio.h>
#include <stdlib.h>

int main()
{
    char inputchar = 'a';
    int num = 0;
    printf("Introduce un caracter: ");
    scanf("%c",&inputchar);
    printf("\nIntroduce el numero de veces que se repetira el caracter: ");
    scanf("%d",&num);
    printf("\n");
    for (num; num > 0; num--)
    {
        printf("%c",inputchar);
    }
    return 0;
}
