#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch = '?';
    printf("Introduce una letra: ");
    scanf("%c",&ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("\n\"%c\" es una vocal.",ch);
    }
    return 0;
}
