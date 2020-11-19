#include <stdio.h>
#include <stdlib.h>

int main()
{
    char time = '?', sex = '?';
    printf("Selecciona conforme la situacion actual\n");
    printf("Mañana\(m\) Tarde\(t\) Noche\(n\): ");
    scanf("%c",&time);
    printf("\nMasculino\(m\) Femenino\(f\): ");
    scanf(" %c",&sex);
    switch (time)
    {
    case'm':
        printf("\nBuenos dias ");
        break;
    case't':
        printf("\nBuenas tardes ");
        break;
    case'n':
        printf("\nBuenas noches ");
        break;
    default:
        printf("Tiempo invalido!!!");
        sex = '?';
    }
    switch (sex)
    {
    case'm':
        printf("señor!");
        break;
    case'f':
        printf("señora!");
        break;
    case'?':
        break;
    default:
        printf("\[SEXO INVALIDO\]");
        break;
    }
    return 0;
}
