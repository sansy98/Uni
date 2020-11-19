#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));                      //rand() seed from system time.

    int r = 1+ rand() % 100;
    int tries = 6;
    int sol = -1;
    int is_correct = 0;

    printf("Adivina el numero entre el 1 y el 100");
    while (tries != 0 && is_correct == 0)
    {
        printf("\nTienes %d intentos: ", tries);
        scanf("%d", &sol);
        if (sol < r)
        {
            printf("\nLa solucion es mayor que %d !", sol);
        }
        else if (sol > r)
        {
            printf("\nLa solucion es menor que %d !", sol);
        }
        else
        {
            is_correct = 1;
        }
        tries--;
    }
    if (is_correct == 1)
    {
        printf("\nCorrecto! El numero era %d !", r);
    }
    else
    {
        printf("\nTe has quedado sin intentos! El numero correcto era %d !", r);
    }
    return 0;
}
