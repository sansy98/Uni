#include <stdio.h>
#include <stdlib.h>

/*Solicitar al usuario dos n�meros y el programa debe mostrar los n�meros primos comprendidos entre los dos n�meros dados y el n�mero total de primos.
� Los n�meros introducidos deben ser considerados
� No es necesario comprobar el orden en el que le usuario introduce los n�meros
Ejemplo de funcionamiento:
N�mero 1 : 7 (el usuario introduce 7)
N�mero 2 : 13 (el usuario introduce 13)
Los n�meros primos son : 7, 11, 13
Los n�meros primos son 3*/

int main()
{
    int esPrimo = 1, numero1 = 0, numero2= 0, numeroDePrimos= 0, i = 0,j =0;

    printf("Introduce n�mero 1:");
    scanf("%d",&numero1);
    printf("\nIntroduce n�mero 2:");
    scanf("%d",&numero2);

    printf("\nLos primos son: ");
    for(i=numero1; i<=numero2; i++) //rrecorro los n�meros comprendidos entres numero1 y numero2
    {
        esPrimo = 1; //actualizo el esta de si es primo o no para cada n�mero
        for(j=2; j<=i/2;j++) //para cada i compruebo si es primo
        {
            if (i%j==0) esPrimo = 0; //Si entra en el if no es Primo
        }
        if (esPrimo) //si es primo
        {
            numeroDePrimos++; //incremewnto el n�mero de primos
            printf("\t%d",i); //muestro el primo
        }
    }
    printf("\nEl n�mero de primos es: %d",numeroDePrimos);
    return 0;
}
