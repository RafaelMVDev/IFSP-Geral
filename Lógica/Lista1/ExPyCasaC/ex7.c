#include <stdio.h>
#include <math.h>

int main()
{
    float r,sup,v;

    printf("Digite o raio da esfera ( em M ):  ");
    scanf("%f",&r);

    sup = 4 * M_PI * pow(r,2);

    v = (4/3) * M_PI * pow(r,3);

    printf("Área da esfera: %.2f m²\nVolume da esfera: %.2f m³", sup,v);
 
    return 0;
}
