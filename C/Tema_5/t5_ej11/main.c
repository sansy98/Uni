#include <stdio.h>
#include <stdlib.h>

int digitAddition(int);

int main()
{
    int num = 0;
    printf("Introduce un numero: ");
    scanf("%d",&num);
    printf("\n%d",digitAddition(num));
    return 0;
}

int digitAddition(int x)
{
    int i = 0;
    while (x>10)
    {
        i += (x%10);
        x /= 10;
    }
    i += x;
    return i;
}
