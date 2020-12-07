#include <stdio.h>
#include <stdlib.h>

int lowerToUpper(int);

int main()
{
    char letra = '/0';
    printf("Introduce una letra: ");
    scanf("%c",&letra);
    printf("\n%c", lowerToUpper(letra));
    return 0;
}

lowerToUpper(int c)
{
    if (c >= 97 && c <= 122)
    {
        return c - 32;
    }
    else
    {
        return c;
    }
}
