#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    for (i; i <= 57; i++)
    {
        printf("%d ",i);
    }
    i = 1;
    printf("\n");
    while (i <= 57)
    {
        printf("%d ",i);
        i++;
    }
    i = 1;
    printf("\n");
    do
    {
        printf("%d ",i);
        i++;
    } while (i <= 57);
    return 0;
}
