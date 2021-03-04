#include <stdio.h>
#include <stdlib.h>

#define LONGITUDFRASE 100

void  quitarEspaciosBlancos (char cadenaOriginal [LONGITUDFRASE], char cadenaSinBlancos[LONGITUDFRASE]);

int main()
{
    char opcion = '\0';
    char * punteroChar;
    char cadOriginal[LONGITUDFRASE];
    char cadSinBlancos[LONGITUDFRASE] = {'\0'};
    do
    {
        printf("Introduce la cadena a quitar blancos: ");
        //scanf("%s",cadOriginal); No funciona por los blancos
        gets(cadOriginal);
        quitarEspaciosBlancos(cadOriginal,cadSinBlancos);
        printf("\nLa cadena con blancos es: %s y la cadena sin blancos es: %s", cadOriginal, cadSinBlancos);
        printf("\nSi quieres seguir pulsa S , otra para salir: ");
        scanf("%c",&opcion);
        fflush(stdin);

    }while(opcion == 'S');
    printf("\nTam antes de j %d",strlen(cadOriginal));
    cadOriginal[strlen(cadOriginal)]='j';
    printf("\nTam antes de j %d",strlen(cadOriginal));
    printf("\nLa cadena con blancos es: %s y la cadena sin blancos es: %s", cadOriginal, cadSinBlancos);

    return 0;
}

void  quitarEspaciosBlancos (char cadenaOriginal [LONGITUDFRASE], char cadenaSinBlancos[LONGITUDFRASE])
{
    int i = 0, j = 0;
    //for (i=0 ; cadenaOriginal[i]!='\0';i++)
    for (i=0 ; i<= strlen (cadenaOriginal);i++)
    {
        if (cadenaOriginal[i] != ' ')
        {
            cadenaSinBlancos[j] = cadenaOriginal[i];
            j++;
        }
    }
}
