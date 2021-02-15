#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float sphereVolume(float);

int main()
{
    float radio = 0;
    printf("Introduce un radio: ");
    scanf("%f",&radio);
    printf("El volumen de la esfera es %f", sphereVolume(radio));
    return 0;
}

float sphereVolume(float r)
{
    float volume = (4/3)*M_PI*pow(r,3);
    return volume;
}
