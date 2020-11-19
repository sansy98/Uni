#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primes[1000] = {2, 3, 5, 7};
    int num = 8;
    int isPrime = 0;
    int nxtFree = 4;
    int i = 0;
    do
    {
        isPrime = 1;
        for (int i = 0; i <= nxtFree - 1; i++)
        {
            if (primes[i] != 0)
            {
                if (num % primes[i] == 0)
                {
                    isPrime = 0;
                }
            }
        }
        if (isPrime == 1)
        {
            primes[nxtFree] = num;
            nxtFree++;
        }
        num++;
    } while (nxtFree < 1001);
    printf("Los primeros 1000 numeros primos son: ");
    for (int i = 0; i < sizeof(primes) / sizeof(primes[0]); i++) {printf("%d ",primes[i]);}
    return 0;
}
