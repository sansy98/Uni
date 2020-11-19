#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a = 0, b = 0, c = 0;
    char check = '?';
    do
    {
        printf("Introduce 3 parametros:\n");
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        if ((pow(b,2) - 4*a*c) == 0)
        {
            printf("\nEl resultado es: %d",-b/(2*a));
        }
        else if ((pow(b,2) - 4*a*c) < 0)
        {
            printf("\nEl primer resultado es: %.2f + %.2f *i",-b/2*a, ((sqrt(-(pow(b,2)-4*a*c)))/2*a));
            printf("\nEl segundo resultado es: %.2f - %.2f *i",-b/2*a, ((sqrt(-(pow(b,2)-4*a*c)))/2*a));
        }
        else
        {
            printf("\nEl primer resultado es: %.2f", (-b + sqrt(pow(b,2)-4*a*c))/2*a);
            printf("\nEl segundo resultado es: %.2f", (-b - sqrt(pow(b,2)-4*a*c))/2*a);
        }
        printf("\nPara calcular otra ecuacion escribe \(c\) // Para salir escribe \(s\)\n");
        scanf(" %c",&check);
    } while (check != 's');
    return 0;
}
