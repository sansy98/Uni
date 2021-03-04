#include <stdio.h>
#include <stdlib.h>

/*Solicitar al usuario dos números y el programa debe mostrar los números primos comprendidos entre los dos números dados y el número total de primos.
• Los números introducidos deben ser considerados
• No es necesario comprobar el orden en el que le usuario introduce los números
Ejemplo de funcionamiento:
Número 1 : 7 (el usuario introduce 7)
Número 2 : 13 (el usuario introduce 13)
Los números primos son : 7, 11, 13
Los números primos son 3*/

int main()
{
    int esPrimo = 1, numero1 = 0, numero2= 0, numeroDePrimos= 0, i = 0,j =0;

    printf("Introduce número 1:");
    scanf("%d",&numero1);
    printf("\nIntroduce número 2:");
    scanf("%d",&numero2);

    printf("\nLos primos son: ");
    for(i=numero1; i<=numero2; i++) //rrecorro los números comprendidos entres numero1 y numero2
    {
        esPrimo = 1; //actualizo el esta de si es primo o no para cada número
        for(j=2; j<=i/2;j++) //para cada i compruebo si es primo
        {
            if (i%j==0) esPrimo = 0; //Si entra en el if no es Primo
        }
        if (esPrimo) //si es primo
        {
            numeroDePrimos++; //incremewnto el número de primos
            printf("\t%d",i); //muestro el primo
        }
    }
    printf("\nEl número de primos es: %d",numeroDePrimos);
    return 0;
}
