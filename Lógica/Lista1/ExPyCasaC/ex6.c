#include <stdio.h>
#include <math.h>

int main()
{
    float raio,comp,ar;

    printf("Digite a medida do raio ( em m ):  ");
    scanf("%f",&raio);
    
    comp = 2 * M_PI * raio ;
    ar = M_PI * pow(raio,2);

    printf("Comprimento: %.2f m. \n Área: %.2f m² : ",comp, ar);
 
    return 0;
}